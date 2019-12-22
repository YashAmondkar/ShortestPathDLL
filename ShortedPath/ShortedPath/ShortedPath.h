#pragma once
#include <vector>

extern "C"
{
#include "PrimsAlgo.h"
#include "KrushalAlgo.h"
#include "DijkstraAlgo.h"
#include "BellmonFord.h"
#include "FloydWarshall.h"

	void __declspec(dllexport) GetPrimsSpanningTree(std::vector<std::vector<int>>& matrix, int& numberOfvertices, int& numberOfedges);
	void __declspec(dllexport) GetKruskalSpanningTree(std::vector<std::vector<int>>& matrix, int& numberOfvertices, int& numberOfedges);
	void __declspec(dllexport) GetDijkstraPath(std::vector<std::vector<int>>& matrix, int& sourceVertex, int& numberOfvertices, int& numberOfedges);
	void __declspec(dllexport) GetBellmonFordPath(std::vector<std::vector<int>>& matrix, int& sourceVertex, int& numberOfvertices, int& numberOfedges);
	void __declspec(dllexport) GetAllPairShortestPath(std::vector<std::vector<int>>& matrix, int& sourceVertex, int& numberOfvertices, int& numberOfedges);

}