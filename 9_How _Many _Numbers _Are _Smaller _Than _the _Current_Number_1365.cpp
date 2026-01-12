#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(const vector<int>& nums) {
	int n = nums.size();
	vector<int> result(n, 0);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (nums[j] < nums[i]) {
				result[i]++;
			}
		}
	}
	return result;
}

int main() {
	int n;
	cout << "Enter number of elements: ";
	cin >> n;
	vector<int> nums(n);
	cout << "Enter elements: ";
	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}
	vector<int> result = smallerNumbersThanCurrent(nums);
	cout << "Result: ";
	for (int x : result) {
		cout << x << " ";
	}
	cout << endl;
	return 0;
}
