#pragma once
#include "Graph.h"

class DijkstraAlgo : public Graph
{
public:
	DijkstraAlgo();
	DijkstraAlgo(int vertices, int edges);
	virtual ~DijkstraAlgo();

	void Dijkstra(std::vector<std::vector<int>>& matrix, int& sourceVertex);
	int minDistance(std::vector<int>& distance, std::vector<bool>& splSet);
};

