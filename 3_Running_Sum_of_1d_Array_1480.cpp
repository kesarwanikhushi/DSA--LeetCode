/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
	for (int i = 1; i < nums.size(); ++i) {
		nums[i] += nums[i - 1];
	}
	return nums;
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
	vector<int> result = runningSum(nums);
	cout << "Running sum: ";
	for (int x : result) {
		cout << x << " ";
	}
	cout << endl;
	return 0;
}
