#pragma once
#include "Node.h"

ref class Stack
{
public:
	Node^ start;
	Node^ end;
	int count;

	Stack() :start(nullptr), end(nullptr), count(0) {}
	void InsertAtEnd(int value);
	Node^ ExtractAtEnd();
	Node^ GetNode(int value);
	bool isEmpty();

};

