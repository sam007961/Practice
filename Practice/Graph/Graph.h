#pragma once
#include <vector>
#include <list>

struct Edge {
	int src, dest, weight;
};

struct Graph {
	std::vector<std::list<int>> adjList;

	Graph(const Edge* edges) {

	}

	Graph(const std::vector<Edge>& edges) {

	}

};


/* References
        https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/
        http://www.techiedelight.com/graph-implementation-using-stl/
*/