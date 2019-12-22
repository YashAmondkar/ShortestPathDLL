#pragma once
#include "Graph.h"
#include <vector>

class BellmonFord : public Graph
{
public:
	BellmonFord();
	BellmonFord(int numberOfVertices, int numberOfEdges);
	virtual ~BellmonFord();

	void BellmonShortestPath(std::vector<std::vector<int>>& matrix, int & sourceVertex);
};

