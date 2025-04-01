#include<iostream>
using namespace std;

class SmartPointer
{
private:
    int* ptr;
public:
    SmartPointer(int* p = nullptr);
    ~SmartPointer();
};

// SmartPointer.cpp
SmartPointer::SmartPointer(int* p) 
    : ptr(p)
{
    cout << "assignment and default ctor\n";
}

SmartPointer::~SmartPointer()
{
    cout << "dtor" << endl;
    if (ptr)
        delete[] ptr;
}

//int main()
//{
//    srand(time(nullptr));
//    int* p, size, num;
//
//    size = rand() % 100;
//    num = rand() % 100;
//    cout << "size=" << size << endl;
//    cout << "num=" << num << endl;
//    
//    p = new int[size];
//    for (int i = 0; i < size; i++)
//    {
//        p[i] = rand() % 100;
//        if (p[i] == num)
//            return 1;
//    }
//    
//    for (int i = 0; i < size; i++)
//        cout << p[i] << ((i + 1) % 10 ? '\t' : '\n');
//    cout << endl;
//    
//    delete[] p;
//    
//    return 0;
//}

// main.cpp
int main()
{
    srand(time(nullptr));
    
    int num1, num2;
    num1 = rand() % 100;
    num2 = rand() % 10;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
    
    SmartPointer p(new int(num1));
    
    if (num2 % 2)
        return 1;
    cout << num1 << endl;
    return 0;
}
