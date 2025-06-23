#pragma once
#include <iostream>
using namespace std;

template <class T>
class Tree
{
protected:
	class Node
	{
	public:
		T value;
		Node* left;
		Node* right;

		Node(T val, Node* l = nullptr, Node* r=nullptr)
			: left(l), right(r) {};
	};

	Node* root;
private:
	void preOrder(Node* p);
	void inOrder(Node* p);
	void postOrder(Node* p);
	virtual void process(T& val);
	void clear(Node* p);
public:
	Tree() : root(nullptr) {};
	~Tree() { clear(root); };

	void preOrder() { preOrder(root);};
	void inOrder() { inOrder(root); };
	void postOrder() { postOrder(root); };
	bool isEmpty() { return root == nullptr; };
	void clear() { clear(root); };

	virtual void add(T val) = 0;
	virtual void remove(T val) = 0;
	virtual bool search(T val) const = 0;

};

template <class T>
inline void Tree<T>::preOrder(Node* p)
{
	if (p)
	{
		//cout << p->value << endl;
		process(p->value);
		preOrder(p->left);
		preOrder(p->right);
	}
}

template <class T>
inline void Tree<T>::inOrder(Node* p) 
{
	if (p)
	{
		inOrder(p->left);
		process(p->value);
		inOrder(p->right);
	}
}
template <class T>
inline void Tree<T>::postOrder(Node* p)
{
	if (p)
	{
		postOrder(p->left);
		postOrder(p->right);
		process(p->value);
	}
}
template<class T>
inline void Tree<T>::process(T& val)
{
	cout << val << endl;
}

template<class T>
inline void Tree<T>::clear(Node* p)
{
	if (p)
	{
		clear(p->left);
		clear(p->right);
		delete p;
	}

}
