#include "gmock/gmock.h"
#include "prime-factors.cpp"
#include <vector>

using std::vector;


TEST(PrimeFactors, PrimeTest) {
	EXPECT_EQ(1, 1);
}

TEST(PrimeFactors, Of1) {
	PrimeFactors primeFactor;
	vector<int> expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
}