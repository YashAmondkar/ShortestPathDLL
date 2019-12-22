#include "stdafx.h"
#include "PrimsAlgo.h"
#include <iostream>

using namespace std;

PrimsAlgo::PrimsAlgo(int vertices,int edges) : Graph(vertices,edges)
{

}

PrimsAlgo::PrimsAlgo()
{
}

PrimsAlgo::~PrimsAlgo()
{
}

bool PrimsAlgo::ValidEdge(int& i, int& j, vector<bool>& isMST)
{
	if (i == j)
		return false;
	
	if (isMST[i] == false && isMST[j] == false)
		return false;
	else if (isMST[i] = true && isMST[j] == true)
		return false;

	return true;
}

void PrimsAlgo::PrimsMST(vector<vector<int>>& matrix)
{
	int& vertices = GetNumberOfVertices();
	vector<bool> isMST(vertices, false);

	isMST[0] = true;
	int edgeCount = 0, minCost = 0;

	while (edgeCount < (vertices - 1))
	{
		int min = INT_MAX, a = -1, b = -1;
		for (int i = 0; i < vertices; i++)
		{
			for (int j = i; j < vertices; j++)
			{
				if (matrix[i][j] < min && ValidEdge(i,j,isMST)) {
					min = matrix[i][j];
					a = i;
					b = j;
				}
			}
		}

		if (a != -1 && b != -1) 
		{
			minCost += min;
			edgeCount++;
			isMST[a] = true;
			isMST[b] = true;
			cout << "\n Edge" << a << "-->" << b;
		}

	}

	cout << "\n Minimum cost spanning tree : " << minCost;
}
