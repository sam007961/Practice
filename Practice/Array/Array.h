#pragma once
#include <list>
struct pair {
	unsigned int a, b;
};

struct pair_comparator : public std::unary_function<pair, bool> {
	explicit pair_comparator(const pair& baseline) : baseline(baseline) {}
	bool operator()(const pair& arg) {
		return (arg.a == baseline.a && arg.b == baseline.b) ||
			(arg.a == baseline.b && arg.b == baseline.a);
	}

	pair baseline;
};

// Find all pairs that sum up to K in the sorted array A or distinct elements of size N
int pairs_with_sum_sorted(unsigned int* A, unsigned int N, unsigned int K, std::list<pair>& pairs) {
	int i = 0, j = N - 1, count = 0;
	while (i < j) {
		int sum = A[i] + A[j];
		if (sum > K) j--;
		else if (sum < K) i++;
		else { pairs.push_back({ A[i++], A[j--] }); count++; }
	}
	return count;
}