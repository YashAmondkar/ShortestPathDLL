#include "stdafx.h"
#include "FloydWarshall.h"
#include <iostream>

#define INF 999999

using namespace std;

FloydWarshall::FloydWarshall(){
}

FloydWarshall::FloydWarshall(int numberOfVertices, int numberOfEdges) : Graph(numberOfVertices, numberOfEdges) 
{
}

FloydWarshall::~FloydWarshall()
{
}

void FloydWarshall::AllPairShortestPath(vector<vector<int>>& distance)
{
	int& vertices = GetNumberOfVertices();

	for (int k = 0; k < vertices; k++) 
	{
		for (int i = 0; i < vertices; i++) 
		{
			for (int j = 0; j < vertices; j++) 
			{
				if (distance[i][k] + distance[k][j] < distance[i][j]) 
				{
					distance[i][j] = distance[i][k] + distance[k][j];
				}
			}
		}
	}

	cout << "\n All Pair Shortest path";

	for (int i = 0; i < vertices; i++)
	{
		cout << "\n";
		for (int j = 0; j < vertices; j++)
		{
			if (distance[i][j] == INF) {
				cout << "\t" << "INF";
			}
			else {
				cout << "\t" << distance[i][j];
			}
		}
	}

}