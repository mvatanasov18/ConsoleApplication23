#include <iostream>
#include <vector>
#include "Set.h"
using namespace std;

int main()
{
	vector<int> v{ 1,2,3,4,5 };
	vector<int> v1{ 0,2,3,9,7 };

	Set* s = new Set(v);
	Set* s2 = new Set(v1);

	//Set inter=s->symmetricComplement(*s,*s2);
	//inter.sort()
	//inter.display();

	vector<std::pair<int, int>> p = Set::cartesianProduct(*s, *s2);
	Set::displayCartesianProduct(p);
}

