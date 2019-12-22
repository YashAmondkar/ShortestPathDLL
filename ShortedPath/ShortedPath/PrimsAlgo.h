#pragma once
#include "Graph.h"

class PrimsAlgo : public Graph
{
public:
	PrimsAlgo();
	PrimsAlgo(int vertices, int edges);
	virtual ~PrimsAlgo();

	bool ValidEdge(int&, int&, std::vector<bool>& );
	void PrimsMST(std::vector<std::vector<int>>& matrix);
};
