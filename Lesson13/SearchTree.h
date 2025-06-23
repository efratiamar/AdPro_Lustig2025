#pragma once
#include "Tree.h"

template <class T>
class SearchTree : public Tree<T>
{
	//void add( Node<T>* p, T val);
	void add (class Tree<T>::Node* current, T val);
	bool search(class Tree<T>::Node* current, T val) const;

public:
	void add(T val) override
	{ 
		if (this->root == nullptr)
		{
			//root = new Node<T>(val);
			this->root = new class Tree<T>::Node(val);
		}
		else
			add(this->root, val);
	};

	void remove(T value) override
	{
		if (search(this->root, value))
		{
			//remove(this->root, value); //TBD in Tirgul
		}
	}

	bool search(T val) const override { return search(this->root, val); };
};

template<class T>
inline void SearchTree<T>::add(class Tree<T>::Node* current, T val) 
{

	if (current->value < val) // Add to right subtree
		if (!current->right)
		{
			current->right = new class Tree<T>::Node(val);
			return;
		}
		else
			add(current->right, val);
	else  // Add to left subtree
		if (!current->left)
		{
			current->left = new class Tree<T>::Node(val);
			return;
		}
		else
			add(current->left, val);

}

template<class T>
inline bool SearchTree<T>::search(class Tree<T>::Node* current, T val)  const
{
	// see if argument value occurs in tree
	if (!current)
		return false;	// not found
	if (current->value == val)
		return true;
	if (current->value < val)
		return search(current->right, val);
	else
		return search(current->left, val);

}
