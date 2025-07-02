#include "gmock/gmock.h"
#include "prime-factors.cpp"
#include <vector>

using std::vector;
using namespace testing;

class PrimeFixture : public Test {
public:
	PrimeFactors primeFactor;
};

TEST_F(PrimeFixture, Of1) {
	vector<int> expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	vector<int> expected = {2};
	EXPECT_EQ(expected, primeFactor.of(2));
}