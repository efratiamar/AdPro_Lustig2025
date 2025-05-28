#include <iostream>
#include "List.h"
using namespace std;
#include "TailList.h"

int main()
{
    TailList tls;
    
    tls.addFirst(5);//5
    tls.addFirst(6);//6 5
    tls.removeFirst(); //5
    int x = tls.firstElement(); //x =5
    tls.addLast(8); //5 8
    tls.addLast(10); //5 8 10

    List* ptl = new TailList();

    //...

    delete ptl;
}

int mainList()
{
    int element;
    List ls1, ls2;
    try
    {
        for (int i = 0; i < 5; i++)
        {
            ls1.addFirst(i);
            cout << i << " ";
        }
        ls1.removeFirst();
        for (int i = 0; i < 4; i++)
        {
            element = ls1.firstElement();
            cout << element << " ";
            ls2.addFirst(element);
        }
        cout << endl;
        cout << ((ls2.search(4)) ?
            "ls2 includes 4" :
            "ls2 doesn't include 4") << endl;
        cout << ((ls2.search(3)) ?
            "ls2 includes 3" :
            "ls2 doesn't include 3") << endl;
        ls2.removeFirst();
        cout << ((ls2.search(3)) ?
            "ls2 includes 3" :
            "ls2 doesn't include 3") << endl;

        List ls3(ls2);

    }
    catch (const char* problem)
    {
        cout << problem;
    }
    return 0;
}

