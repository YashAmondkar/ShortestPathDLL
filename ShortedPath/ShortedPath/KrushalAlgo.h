#pragma once
#include "Graph.h"
#include <vector>

class KrushalAlgo : public Graph
{
	int* parent;
public:
	KrushalAlgo();
	KrushalAlgo(int vertices, int edges);
	virtual ~KrushalAlgo();

	int Find(int );
	void Union(int&, int&);
	void KrushalMST(std::vector<std::vector<int>>& matrix);
};

