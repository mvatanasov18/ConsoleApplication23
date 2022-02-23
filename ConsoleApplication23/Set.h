#pragma once
#include<vector>
class Set {
	int size = 0;

	int DEFAULTSIZE = 10;
	int* elements;
public: // Default constructor

	Set();

	Set(int s);

	Set(std::vector<int> items);

	// Destructor

	~Set();

	int getSize() { return this->size; }

	bool contains(int n);

	Set unionWith(Set& Y);

	Set intersectWith(Set& Y);

	Set complementWith(Set& Y);

	static Set symmetricComplement(Set& X, Set& Y);


	static std::vector<std::pair<int, int>> cartesianProduct(Set& X, Set& Y);

	static void displayCartesianProduct(std::vector<std::pair<int, int>>& X);

	void sort();

	int calcDegree();

	void enterFromKeyboard();

	void display();
};