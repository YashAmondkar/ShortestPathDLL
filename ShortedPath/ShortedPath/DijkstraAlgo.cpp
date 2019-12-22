#include "stdafx.h"
#include "DijkstraAlgo.h"
#include <iostream>

using namespace std;

DijkstraAlgo::DijkstraAlgo(int vertices, int edges) : Graph(vertices, edges)
{

}

DijkstraAlgo::DijkstraAlgo()
{
}

DijkstraAlgo::~DijkstraAlgo()
{
}

void DijkstraAlgo::Dijkstra(vector<vector<int>>& matrix, int& sourceVertex) 
{
	int& vertices = GetNumberOfVertices();
	vector<int> distance(vertices, INT_MAX);
	vector<bool> splSet(vertices, false);

	distance[sourceVertex] = 0;

	int edgeCount = 0;

	while (edgeCount < vertices - 1) 
	{
		int u = minDistance(distance, splSet);
		splSet[u] = true;

		for (int v = 0; v < vertices; v++) 
		{
			if (splSet[v] == false && matrix[u][v] != 0 && distance[u] != INT_MAX && (distance[u] + matrix[u][v]) < distance[v]) 
			{
				distance[v] = distance[u] + matrix[u][v];
			}
		}
		edgeCount++;
	}

	cout << "\n Shorted Distance from Source Vertex" << sourceVertex << " to other vertices :";
	for (int i = 0; i < vertices; i++) 
	{
		cout << "\n" << i << "\t---\t" << distance[i];
	}

}

int DijkstraAlgo::minDistance(vector<int>& distance, vector<bool>& splSet)
{
	int min = INT_MAX;
	int minIndex;
	int& vertices = GetNumberOfVertices();

	for (int v = 0; v < vertices; v++) 
	{
		if (splSet[v] == false && distance[v] <= min) {
			min = distance[v];
			minIndex = v;
		}
	}

	return minIndex;
}
