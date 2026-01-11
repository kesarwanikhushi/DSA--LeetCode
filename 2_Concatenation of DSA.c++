/*Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
Specifically, ans is the concatenation of two nums arrays.
Return the array ans.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(const vector<int>& nums) {
	int n = nums.size();
	vector<int> ans(2 * n);
	for (int i = 0; i < n; ++i) {
		ans[i] = nums[i];
		ans[i + n] = nums[i];
	}
	return ans;
}

int main() {
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	vector<int> nums(n);
	cout << "Enter the elements: ";
	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}
	vector<int> ans = getConcatenation(nums);
	cout << "Concatenated array: ";
	for (int x : ans) {
		cout << x << " ";
	}
	cout << endl;
	return 0;
}