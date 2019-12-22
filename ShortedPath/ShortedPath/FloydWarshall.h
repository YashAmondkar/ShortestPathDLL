#pragma once
#include "Graph.h"
#include <vector>

class FloydWarshall :
	public Graph
{
public:
	FloydWarshall();
	FloydWarshall(int numberOfVertices, int numberOfEdges);
	virtual ~FloydWarshall();

	void AllPairShortestPath(std::vector<std::vector<int>>& distance);
};

