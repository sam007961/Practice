#pragma once
#include <vector>
#include <list>

struct Edge {
	int src, dest;
	Edge(int src, int dest) : src(src), dest(dest) {}
};


// Directed Graph
class Graph {
public:
	std::vector<std::list<int>> adjList;
	Graph(const std::vector<Edge>& edges, int n) {
		adjList.resize(n);
		for (Edge e : edges) {
			add_edge(e);
		}
	}

	void add_vertex(const int& count = 1) {
		adjList.resize(adjList.size + count);
	}

	void add_edge(const Edge& e) {
		(*this)[e.src].push_back(e.dest);
	}

	std::list<int>& operator[](const int& v) {
		return adjList[v];
	}

	class EdgeIterator {
		int v;
		std::list<int>::iterator iter;
	public:
		Edge&& operator*() {
			return Edge(v, *iter);
		}

		EdgeIterator& operator++() {

		}
	};

};


/* References
        https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/
        http://www.techiedelight.com/graph-implementation-using-stl/
*/