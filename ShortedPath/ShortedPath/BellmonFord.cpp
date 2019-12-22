#include "stdafx.h"
#include "BellmonFord.h"
#include <iostream>

using namespace std;

BellmonFord::BellmonFord()
{
}

BellmonFord::BellmonFord(int numberOfVertices, int numberOfEdges) :Graph(numberOfVertices, numberOfEdges) {

}

BellmonFord::~BellmonFord()
{
}

void BellmonFord::BellmonShortestPath(vector<vector<int>>& matrix, int& sourceVertex)
{
	int& vertices = GetNumberOfVertices();
	int& edges = GetNumberOfEdges();

	vector<int> dist(vertices, INT_MAX);

	dist[sourceVertex] = 0;
	
	// relaxing all edges |V|-1 times
	// We get shortest path to all vertices

	for (int i = 0; i < (vertices - 1); i++)
	{
		for (int j = 0; j < edges; j++)
		{
			if ((dist[matrix[j][0]] + matrix[j][2]) < dist[matrix[j][1]])
			{
				dist[matrix[j][1]] = dist[matrix[j][0]] + matrix[j][2];
			}
		}
	}


	//if there is negative weight cycle in graph then
	// weights changes

	for (int j = 0; j < edges; j++)
	{
		if (dist[matrix[j][0]] != INT_MAX && (dist[matrix[j][0]] + matrix[j][2]) < dist[matrix[j][1]])
		{
			cout << "\n Graph contains negative weight cycle";
			break;
		}
	}

	cout << "\n Shortest Distance Path from Source Vertex " << sourceVertex;

	for (int i = 0; i < vertices; i++)
	{
		cout << "\n " << i << "--->" << dist[i];
	}
}