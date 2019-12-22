#include "stdafx.h"
#include "Graph.h"

using namespace std;

Graph::Graph()
{
	numberOfEdges = 0;
	numberOfVertices = 0;
}

Graph::Graph(int vertices,int edges)
{
	numberOfEdges = edges;
	numberOfVertices = vertices;
}

int& Graph::GetNumberOfVertices() 
{
	return numberOfVertices;
}

int& Graph::GetNumberOfEdges()
{
	return numberOfEdges;
}

Graph::~Graph()
{

}
