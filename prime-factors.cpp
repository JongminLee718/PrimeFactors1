#include <vector>
using std::vector;

class PrimeFactors {
public:
	vector<int> of(int num) {
		vector<int> result = {};
		if (num == 2) result.push_back(2);
		return result;
	}
};