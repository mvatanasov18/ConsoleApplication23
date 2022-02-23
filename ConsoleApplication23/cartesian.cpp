#include "Set.h"
#include <vector>
#include <iostream>

std::vector<std::pair<int, int>> Set::cartesianProduct(Set& X, Set& Y)
{
	std::vector<std::pair<int, int>>map_pod_prikritie;// = std::vector<std::pair<int, int>>();
	for (int i = 0; i < X.size; i++)
	{
		for (int j = 0; j < Y.size; j++)
		{
			map_pod_prikritie.push_back(std::pair<int, int>(X.elements[i], Y.elements[j]));
		}
	}
	return map_pod_prikritie;
}

void Set::displayCartesianProduct(std::vector<std::pair<int, int>>& X)
{
	for (std::pair<int, int>temp : X)
	{

		std::cout << "{ " << temp.first << ", " <<
			temp.second << " }\n";


	}
}