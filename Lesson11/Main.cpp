//#include <iostream>
//using namespace std;
//
//const int MAX_LENGTH = 10;
//
//template <class T>
//class GList
//{
//public:
//	bool IsEmpty() const;
//	bool IsFull() const;
//	int  Length() const;
//	void Insert(T item);
//	void Delete(T item);
//	bool IsPresent(T item) const;
//	void SelSort();
//	void Print() const;
//	GList(); // Constructor
//private:
//	int length;
//	T data[MAX_LENGTH];
//};
//
//template <class T>
//bool GList<T>::IsEmpty() const
//{
//	return length == 0;
//}
//
//template <class T>
//bool GList<T>::IsFull() const
//{
//	return length != 0;
//}
//
//template <class T>
//void GList<T>::Insert(T item)
//{
//	data[length++] = item;
//}
//
//template <class T>
//void GList<T>::Delete(T item)
//{
//	//...
//}
//
//
//template <class T>
//void Print(T val)
//{
//	cout << "Value is " << val << endl;
//	T i;
//	i = val;
//	i = i + val;
//}
//
//class MyClass
//{
//	//operator<<, operator+, default ctor,
//	// must be defined in MyClass
//};
//
//////template <class T>
////void Print(MyClass val)
////{
////	cout << "Value is " << val << endl;
////	MyClass i;
////	i = val;
////	i = i + val;
////}
//
//
//template <class T>
//void DoSomething()
//{
//	T t1;
//	cin >> t1;
//	T t2;
//	cin >> t2;
//	T t3 = t1 + t2;
//	cout << t3;
//}
//
//
//void main()
//{
//	int sum = 7;
//	char initial = 'A';
//
//	Print(sum); //<==> Print<int>(sum);
//
//	DoSomething<int>();
//
//	Print<int>(sum);
//	Print<char>(initial);
//	Print<float>(2.5);
//
//	//MyClass mc;
//	//Print<MyClass>(mc);
//}
