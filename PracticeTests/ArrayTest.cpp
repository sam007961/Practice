#include "stdafx.h"
#include "CppUnitTest.h"
#include <algorithm>
#include "Array/Array.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using std::list;
using std::find_if;

namespace PracticeTests
{		
	TEST_CLASS(ArrayTest)
	{
	public:
		
		TEST_METHOD(TestPairsWithSumSorted)
		{
			unsigned int testArray1[] = { 1, 4, 6, 7, 9, 10, 12, 18 };
			list<pair> pairs;
			int count = pairs_with_sum_sorted(testArray1, 8, 10, pairs);
			Assert::AreEqual(count, 2);
			pair expectedPairs[] = { {1, 9}, {4, 6} };
			Assert::IsTrue(find_if(pairs.begin(), pairs.end(), pair_comparator(expectedPairs[0])) != pairs.end());
			Assert::IsTrue(find_if(pairs.begin(), pairs.end(), pair_comparator(expectedPairs[1])) != pairs.end());
		}

	};
}