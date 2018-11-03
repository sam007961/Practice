#include "stdafx.h"
#include "CppUnitTest.h"
#include "Graph/Graph.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using std::vector;
using std::list;

namespace PracticeTests
{		
	TEST_CLASS(GraphTest)
	{
	public:
		
		TEST_METHOD(TestGraphConstructor)
		{
			vector<Edge> edges = { Edge(0, 1), Edge(1, 2), Edge(2, 3) };
			Graph graph(edges, 4);

			for (auto adj : graph.adjList) {

			}
		}

	};
}