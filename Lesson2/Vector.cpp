#include "Vector.h"

Vector::Vector()
{
    cout << "enter 10 numbers\n";
    for (int i = 0; i < 10; i++)
        cin >> numbers[i];
}

int Vector::add()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum += numbers[i];
    return sum;
}

void Vector::add(int number)
{
    for (int i = 0; i < 10; i++)
        numbers[i] += number;
}

void Vector::add(int num, int pos)
{
    numbers[pos] += num;
}
void Vector::print() const
{
    for (int i = 0; i < 10; i++)
        cout << numbers[i] << ' ';
    cout << endl;
}
