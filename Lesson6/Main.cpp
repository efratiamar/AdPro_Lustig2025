#include <iostream>
#include <fstream>
#include "Point.h"
using namespace std;

struct Worker
{
	long id;
	char name[15];
	float hours;
	float salary;
};

void BinaryFileSequential_1()
{
	ofstream f1;
	f1.open("workers.bin");

	Worker worker1;

	for (int i = 0; i < 2; i++)
	{
		cout << "enter workers name ";
		cin >> worker1.name;
		cout << "enter " << worker1.name << "'s id ";
		cin >> worker1.id;
		cout << "enter number of hours ";
		cin >> worker1.hours;
		cout << "enter a salary per hour ";
		cin >> worker1.salary;

		f1.write( (char*) &worker1, sizeof(Worker));
	}

	f1.close();

	ifstream f2("workers.bin");
	Worker worker2;
	f2.read((char*)&worker2, sizeof(Worker));
	while (!f2.eof())
	{
		cout << worker2.name << worker2.id << worker2.hours << worker2.salary << endl;
		f2.read((char*)&worker2, sizeof(Worker));
	}

	f2.close();

}

int BinaryFileSequential_2()
{
	Worker worker1;
	ifstream f2("workers.bin");

	if (!f2)
	{
		cout << "could not open the file\n";
		return 0;
	}

	f2.read((char*)&worker1, sizeof(Worker));

	float salary;

	while (!f2.eof())
	{
		f2.read((char*)&worker1, sizeof(Worker));

		salary = worker1.hours * worker1.salary;
		if (worker1.hours > 45)
			salary += (worker1.hours - 45) * 0.5 * worker1.salary;
		cout << worker1.name << '\t' << worker1.id << '\t' << "salary: " << salary << endl;
	}

	return 0;
}

int BinaryFileSequential_3()
{
	ofstream f;
	f.open("points.txt");
	if (!f)
	{
		cout << "failed opening file.\n";
		return -1;
	}

	for (int i = 0; i < 10; i++)
	{
		Point p(rand() % 100, rand() % 100);
		cout << p << endl;
		f.write((char*)&p, sizeof(Point));
	}
	f.close();
	return 0;
}

int BinaryFileNonSequential_4()
{
	fstream f;
	f.open("points.txt", ios::in | ios::out);
	if (!f) {
		cout << "failed opening file.\n";
		return -1;
	}
	for (int i = 0; i < 10; i++)
	{
		Point p1, zeroPoint;
		f.seekg(i * sizeof(Point));
		f.read((char*)&p1, sizeof(Point));
		if (!(p1 != zeroPoint))        //p==(0,0)
		{
			Point p2(rand() % 10 + 1, rand() % 10 + 1);
			f.seekp(i * sizeof(Point));
			f.write((char*)&p2, sizeof(Point));
		}
	}
	f.close();
	return 0;
}


int BinaryFileNonSequential_5()
{
	fstream f;
	f.open("points.txt", ios::in | ios::out);
	if (!f)
	{
		cout << "failed opening file.\n";
		return -1;
	}

	Point p1, zeroPoint;
	f.read((char*)&p1, sizeof(Point));
	while (!f.eof())
	{
		if ((p1 != zeroPoint))
		{
			int pos = f.tellg();
			f.seekp(pos - sizeof(Point));
			f.write((char*)&zeroPoint, sizeof(Point));
			f.seekg(f.tellp());
		}
		f.read((char*)&p1, sizeof(Point));
	}
	f.close();
	return 0;
}


int BinaryFileNonSequential_6()
{
	fstream f;
	f.open("points.txt", ios::in | ios::out);
	if (!f) {
		cout << "failed opening file.\n";
		return -1;
	}

	Point p1, zeroPoint;
	f.read((char*)&p1, sizeof(Point));
	while (!f.eof()) {
		if ((p1 != zeroPoint))
		{
			int pos = f.tellg();
			f.seekp(pos - sizeof(Point));
			f.write((char*)&zeroPoint, sizeof(Point));
			f.seekg(f.tellp());
		}
		f.read((char*)&p1, sizeof(Point));
	}
	f.clear();
	f.seekg(0);
	while (f.read((char*)&p1, sizeof(Point)))
		cout << p1 << endl;
	f.close();
	return 0;
}


int main()
{
	BinaryFileSequential_1();
	//BinaryFileSequential_2();


}

//int main()
//{
//    fstream f;
//    f.open("points.txt", ios::in | ios::out);
//    if (!f)
//    {
//        cout << "failed opening file.\n";
//        return -1;
//    }
//
//    Point p1, zeroPoint;
//    f.read((char*)&p1, sizeof(Point));
//    while (!f.eof())
//    {
//        if ((p1 != zeroPoint))
//        {
//            int pos = f.tellg();
//            f.seekp(pos - sizeof(Point));
//            f.write((char*)&zeroPoint, sizeof(Point));
//            f.seekg(f.tellp());
//        }
//        f.read((char*)&p1, sizeof(Point));
//    }
//    f.close();
//    return 0;
//}


//int main()
//{
//    fstream f;
//    f.open("points.txt", ios::in | ios::out);
//    if (!f)
//    {
//        cout << "failed opening file.\n";
//        return -1;
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        Point p1, zeroPoint;
//        f.seekg(i * sizeof(Point));
//        f.read((char*)&p1, sizeof(Point));
//        if (!(p1 != zeroPoint))        //p==(0,0)
//        {
//            Point p2(rand() % 10 + 1, rand() % 10 + );
//            f.seekp(i * sizeof(Point));
//            f.write((char*)&p2, sizeof(Point));
//        }
//    }
//    f.close();
//
//    return 0;
//}


//int main()
//{
//    ofstream f;
//    f.open("points.txt");
//    if (!f)
//    {
//        cout << "failed opening file.\n";
//        return -1;
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        Point p(rand() % 100, rand() % 100);
//        cout << p << endl;
//        f.write((char*)&p, sizeof(Point));
//    }
//    f.close();
//    return 0;
//}


/*
Points.txt:
(67, 41)		(0, 34)
(24, 69)		(58, 78)
(64, 62)		(45, 5)
(27, 81)		(91, 61)
(42, 95)		(36, 27)
*/
