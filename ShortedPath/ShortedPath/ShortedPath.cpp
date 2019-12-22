// ShortedPath.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "ShortedPath.h"
#include <vector>

void GetPrimsSpanningTree(std::vector<std::vector<int>>& matrix, int& numberOfvertices, int& numberOfedges)
{
	PrimsAlgo  *primsAlgo = new PrimsAlgo(numberOfvertices, numberOfedges);
	primsAlgo->PrimsMST(matrix);
	delete primsAlgo;
	primsAlgo = nullptr;
}

void GetKruskalSpanningTree(std::vector<std::vector<int>>& matrix, int& numberOfvertices, int& numberOfedges)
{
	KrushalAlgo *kruskalAlgo = new KrushalAlgo(numberOfvertices, numberOfedges);
	kruskalAlgo->KrushalMST(matrix);
	delete kruskalAlgo;
	kruskalAlgo = nullptr;
}

void GetDijkstraPath(std::vector<std::vector<int>>& matrix,int& sourceVertex, int& numberOfvertices, int& numberOfedges)
{
	DijkstraAlgo *dij = new DijkstraAlgo(numberOfvertices, numberOfedges);
	dij->Dijkstra(matrix,sourceVertex);
	delete dij;
	dij = nullptr;
}

void GetBellmonFordPath(std::vector<std::vector<int>>& matrix, int& sourceVertex, int& numberOfvertices, int& numberOfedges) 
{
	BellmonFord* bell = new BellmonFord(numberOfvertices, numberOfedges);
	bell->BellmonShortestPath(matrix, sourceVertex);
	delete bell;
	bell = nullptr;
}

void GetAllPairShortestPath(std::vector<std::vector<int>>& matrix, int& sourceVertex, int& numberOfvertices, int& numberOfedges) 
{
	FloydWarshall* floyd = new FloydWarshall(numberOfvertices, numberOfedges);
	floyd->AllPairShortestPath(matrix);
	delete floyd;
	floyd = nullptr;
}