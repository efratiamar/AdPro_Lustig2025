#include "Tree.h"
#include "SearchTree.h"

int main()
{
	//Tree<int> t;

	SearchTree<char> t2;

	t2.add('A');
	t2.add('B');


	//...

	t2.inOrder();
	if (t2.search('T'))
		cout << "YES";
	t2.clear();



}