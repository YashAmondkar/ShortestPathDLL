#pragma once
#include <vector>

class Graph
{
	int numberOfVertices;
	int numberOfEdges;
	//std::vector<std::vector<int>> matrix;

public:
	Graph();
	Graph(int , int );
	int& GetNumberOfVertices();
	int& GetNumberOfEdges();
	~Graph();
};
