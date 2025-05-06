#include <iostream>
#include <fstream>
using namespace std;

#include "Point.h"
#include "Circle.h"

int sample9()
{
	// option A
	ofstream f;
	f.open("points.txt");

	// option B
	//ofstream f("points.txt");

	// option C
	//fstream f;
	//f.open("points.txt",ios::out);

	if (!f)
	{
		cout << "failed opening file.\n";
		return -1;
	}

	for (int i = 0; i < 3; i++)
	{
		Point p(rand() % 100, rand() % 100);
		//cout << p << endl;
		f << p << endl;
	}
	f.close();
	return 0;
}

int sample10()
{
	ifstream file1;
	file1.open("points.txt");

	ofstream file2;
	file2.open("out.txt");

	if (!file1 || !file2)
	{
		cout << "failed opening file.\n";
		return -1;
	}

	for (int i = 0; i < 3; i++)
	{
		Point p;
		file1 >> p;
		if (p.x == 0)
		{
			file2 << p;
		}
	}

	file1.close();
	file2.close();

	return 0;
}

int sample11()
{
	ifstream file1;
	file1.open("points.txt");

	ofstream file2;
	file2.open("out.txt");

	if (!file1 || !file2)
	{
		cout << "failed opening file.\n";
		return -1;
	}

	while (!file1.eof())
	{
		Point p;
		file1 >> p;
		if (p.x == 0)
		{
			file2 << p;
		}
	}

	file1.close();
	file2.close();

	return 0;
}

void printFileToScreen(ifstream& f)
{
	Point p;
	while (!f.eof())
	{
		f >> p;
		cout << p;
	}
	//
	//Point p;
	//while (f >> p)
	//	cout << p << endl;


}

int sample12()
{
	ifstream file("inCircle.txt");
	if (!file)
	{
		cout << "failed opening file.\n";
		return -1;
	}
	printFileToScreen(file);
	file.close();
	return 0;
}

int sample13()
{
	Circle A;
	cout << "enter a circle (radius and center point )\n";
	cin >> A;
	cout << "perimeter :" << A.perimeter() << '\n';
	cout << "area :" << A.area() << '\n';
	int in = 0, on = 0, out = 0;
	cout << "enter points to stop enter (0, 0) :\n";
	Point p, zeroPoint;
	cin >> p;
	while (p != zeroPoint) {
		if (A.onInOut(p) < 0) 	     in++;
		else if (A.onInOut(p) == 0)    on++;
		else			     out++;
		cin >> p;
	}
	cout << "num of points " << endl;
	cout << "in A:" << in << '\t';
	cout << "on A:" << on << '\t';
	cout << "out of A:" << out << '\t';
	return 0;

}
int main()
{
	sample9();
	sample10();


	//Point p1(5, 6);
	//Point p2(4, 7);
	//if (p1 != p2)
	//{

	//}

	////p1.print(); // (5,6)
	//cout << p1 << " " << p2;

	//Point p3;
	//cin >> p3;

	Circle A;
	cout << "enter a circle (radius and center point )\n";
	cin >> A;
	cout << "perimeter :" << A.perimeter() << '\n';
	cout << "area :" << A.area() << '\n';
	int in = 0, on = 0, out = 0;
	cout << "enter points to stop enter (0, 0) :\n";
	Point p, zeroPoint;
	cin >> p;
	while (p != zeroPoint) {
		if (A.onInOut(p) < 0) 	     in++;
		else if (A.onInOut(p) == 0)    on++;
		else			     out++;
		cin >> p;
	}
	cout << "num of points " << endl;
	cout << "in A:" << in << '\t';
	cout << "on A:" << on << '\t';
	cout << "out of A:" << out << '\t';
	return 0;
}


//class Rational
//{
//    int mone;
//    int mechane;
//public:
//    Rational(int myMone = 1, int myMechane = 1)
//        :mone(myMone), mechane(myMechane) {}
//
//    // Rational * Rational 
//    Rational operator*(const Rational& r2) const;
//
//    //Rational * int
//    Rational operator*(int num);
//
//    //int * Rational
//    friend Rational operator*(int num, const Rational& r2);
//
//    friend ostream& operator<<(ostream& os, const Rational& r2);
//    
//    friend istream& operator>>(istream& is, Rational& r2);
//
//
//    void print()
//    {
//        cout << mone << "/" << mechane << endl;
//    }
//};
//
//Rational Rational::operator*(const Rational& r2) const
//{
//
//}
//
//Rational Rational::operator*(int num)
//{
//    Rational t(mone * num, mechane);
//    return t;
//
//}
//
//Rational operator*(int num, const Rational& r2)
//{
//    Rational t (r2.mone* num, r2.mechane);
//
//    return t;
//
//}
//
//ostream& operator<<(ostream& os, const Rational& r2)
//{
//    os << r2.mone << "/" << r2.mechane << endl;
//    return os;
//}
//
//istream& operator>>(istream& is, Rational& r2)
//{
//    cout << "Enter m/m:";
//    is >> r2.mone;
//    is >> r2.mechane;
//    if (r2.mechane == 0)
//        r2.mechane = 1;
//}
//
//int main()
//{
//    Rational r1(2, 4), r2(9, 8), r3, r4, r5;
//
//    r3 = r1 * r2; // r3 = r1.operator*(r2)
//    r4 = r3 * 5;  // r4 = r3.operator*(5);
//    r5 = 7 * r4;  // r5 = operator*(7, r4);
//
//    //r1.print();
//
//    cout << r1;
//
//
//    cout << r1 << ' ' << 12; // output: 5/6 12
//
//    cin >> r5;
//
//
//
//}
//
