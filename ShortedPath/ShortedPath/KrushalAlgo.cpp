#include "stdafx.h"
#include <iostream>
#include "KrushalAlgo.h"

using namespace std;

KrushalAlgo::KrushalAlgo(int vertices, int edges) : Graph(vertices, edges)
{
	parent = new int[vertices];
}

KrushalAlgo::KrushalAlgo()
{
}


KrushalAlgo::~KrushalAlgo()
{	
}

void KrushalAlgo::KrushalMST(vector<vector<int>>& matrix)
{
	int minCost = 0;
	int& vertices = GetNumberOfVertices();
	int edgeCount = 0;

	for (int i = 0; i < vertices; i++)
	{
		parent[i] = i;
	}

	while (edgeCount < (vertices - 1))
	{
		int min = INT_MAX;
		int a = -1, b = -1;
		for (int i = 0; i < vertices; i++)
		{
			int x = Find(i);
			for (int j = 0; j < vertices; j++)
			{
				int y = Find(j);
				if (x != y && matrix[i][j] < min)
				{
					min = matrix[i][j];
					a = i;
					b = j;
				}
			}
		}
		Union(a, b);
		cout << "\n Edge " << a << "-->" << b;
		minCost += min;
		edgeCount++;
	}

	cout << "\n Minimum cost spanning tree : " << minCost;
}

int KrushalAlgo::Find(int i)
{
	while (parent[i] != i)
	{
		i = parent[i];
	}
	return i;
}

void KrushalAlgo::Union(int& i, int& j) 
{
	int a = Find(i);
	int b = Find(j);

	parent[a] = b;
}
