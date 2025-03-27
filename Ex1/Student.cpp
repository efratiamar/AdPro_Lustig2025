#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <string.h>
#include <iostream>
using namespace std;

float Student::avg()
{
	float sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += marks[i];
	}
	return sum/10;
}

void Student::setName(const char* n)
{
	if (strlen(n) > 20)
	{
		strncpy(name, n, 20);
		name[20] = '\0';

	}
	else
		strcpy(name, n);
}

char* Student::getName()
{
	return name;
}

void Student::setGrade(int g)
{
	if (g >= 1 && g <= 12)
		grade = g;
	else
		grade = 1;
}

int Student::getGrade()
{
	return grade;
}

void Student::inputMarks()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter the " << i+1 << " mark (0-100): ";
		cin >> marks[i];
		if (marks[i] < 0 || marks[i]> 100)
			i--;
	}

}

void Student::print()
{
	cout << "Name: " << name << " Grade: " << grade << " Average:  " << avg() << endl;
}
