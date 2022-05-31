#include<iostream>
#include<numeric>
#include <vector>
using namespace std;

int grow(const vector<int>& nums) {
	return accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
}
int main() {
	vector<int> vec = { 4, 1, 1, 1, 4 };
	cout << grow(vec) << endl;
	return 0;
}