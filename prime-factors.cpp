#include <vector>
using std::vector;

class PrimeFactors {
public:
	vector<int> of(int num) {
		vector<int> result = {};
		if (num > 1) {
			for (int divisor = 2; num > 1; divisor++) {
				while (num % divisor == 0) {
					result.push_back(divisor);
					num /= divisor;
				}
			}
		}
		return result;
	}
};