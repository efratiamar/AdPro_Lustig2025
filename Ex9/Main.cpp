#include <iostream>
using namespace std;

class A
{
public:
	void show1() { cout << "-A1-"; }
	virtual void show2() { cout << "-A2-"; }
};

class B : public A
{
public:
	void show1() { cout << "-B1-"; }
	void show2()
	{
		cout << "-B2-";
		A::show2();
	}
};

int main()
{

	try
	{
		B* pB = new B;
		throw pB;
	}
	catch (A* x)
	{
		x->show1();

		x->show2();
	}
}


//#include <iostream>
//using namespace std;
//
//class myException : public exception
//{
//public:
//    virtual const char* what() const throw()
//    {
//        return "My exception! ";
//    }
//} myex;
//
//int main()
//{
//    try
//    {
//        int y = 0;
//        throw myex;
//        int x = 4 / y;
//    }
//    catch (exception& e)
//    {
//        cout << "1: " << e.what() << endl;
//    }
//    catch (myException& e)
//    {
//        cout << "2: " << e.what() << endl;
//    }
//    catch (...)
//    {
//        cout << "3: unhandled exception";
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class myException1 : public exception
//{
//public:
//	virtual const char* what() const throw()
//	{
//		return "My exception 1 happened";
//	}
//};
//
//class myException2 : public exception
//{
//public:
//	virtual const char* what() const throw()
//	{
//		return "My exception 2 happened";
//	}
//};
//
//
//int main()
//{
//	try
//	{
//		int y = -80;
//		if (0 == y)
//		{
//			myException1 myex1;
//			throw myex1;
//		}
//		else if (y < 0)
//		{
//			myException2 myex2;
//			throw myex2;
//		}
//		else
//			int x = 4 / y;
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}
