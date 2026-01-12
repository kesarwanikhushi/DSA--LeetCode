/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
Return the answer in an array.*/
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
