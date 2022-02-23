#include "Set.h"
#include <unordered_map>

Set Set::unionWith(Set& Y) {
	Set* temp = new Set(this->size + Y.size);

	std::unordered_map<int, int> map1;
	int j = 0;
	for (; j < this->size; j++)
	{
		temp->elements[j] = this->elements[j];
		map1.insert({ this->elements[j],j });
	}

	for (int i = 0; i < Y.size; i++) {

		if (map1.find(Y.elements[i]) == map1.end()) {

			temp->elements[j++] = Y.elements[i];
		}

	}
	temp->size = j;
	return *temp;
}

Set Set::intersectWith(Set& Y) {
	Set* temp = new Set(this->size + Y.size);
	int s_temp = 0;
	std::unordered_map<int, int> map1;

	for (int i = 0; i < Y.size; i++)
	{
		map1.insert({ Y.elements[i], i });
	}

	for (int i = 0; i < this->size; i++)
	{
		if (map1.find(this->elements[i]) != map1.end()) {
			temp->elements[s_temp++] = this->elements[i];
		}
	}
	temp->size = s_temp;
	return *temp;
}

Set Set::complementWith(Set& Y) {
	Set* temp = new Set(this->size + Y.size);
	int s_temp = 0;
	std::unordered_map<int, int> map1;

	for (int i = 0; i < Y.size; i++)
	{
		map1.insert({ Y.elements[i], i });
	}

	for (int i = 0; i < this->size; i++)
	{
		if (map1.find(this->elements[i]) == map1.end()) {
			temp->elements[s_temp++] = this->elements[i];
		}
	}
	temp->size = s_temp;
	return *temp;
}

Set Set::symmetricComplement(Set& X, Set& Y)
{
	Set s1 = X.complementWith(Y);
	Set s2 = Y.complementWith(X);

	return s1.unionWith(s2);
}