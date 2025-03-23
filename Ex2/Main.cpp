#include <iostream>
using namespace std;

#include "Student.h"

int main()
{

	//const int x = 9;
	//x = 7;
	//
	//const char* s;
	//strcpy(s, "ffff");

	Student st1;
	char na[21] = "moshe cohen";
	st1.setName(na);
	st1.setName("moshe cohen-levi");

	//cout << st1.getName() << endl;

	//st1.setGrade(12);
	//cout << st1.getGrade() << endl;

	//Student st2;
	//st2.setName("Yafa");
	//st2.setGrade(3);

	//st2.inputMarks();
	////cout<< st2.avg();
	
	Student arrStu[2];

	for (int i = 0; i < 2; i++)
	{
		cout << "Enter student's name: ";
		char n[21];
		cin >> n;
		arrStu[i].setName(n);

		cout << "Enter student's grade: ";
		int g;
		cin >> g;
		arrStu[i].setGrade(g);

		arrStu[i].inputMarks();

		arrStu[i].print();

	}


}