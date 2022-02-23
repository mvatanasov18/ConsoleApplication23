#include "Set.h"
#include <unordered_map>
Set::Set()
{
	this->size = this->DEFAULTSIZE;
	this->elements = new int[this->size];
}

Set::Set(int s)
{
	this->size = s;
	this->elements = new int[this->size];
}


Set::Set(std::vector<int> items)
{
	this->size = items.size();
	this->elements = new int[this->size];
	int temp = 0;
	for (auto i = items.begin(); i != items.end(); i++) {
		long a = *i;
		elements[temp] = int(a);
		temp++;
	}
}

Set::~Set()
{
	delete[] elements;
}
