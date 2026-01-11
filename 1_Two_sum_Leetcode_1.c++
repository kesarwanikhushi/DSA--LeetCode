
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> num_map;
	for (int i = 0; i < nums.size(); ++i) {
		int complement = target - nums[i];
		if (num_map.find(complement) != num_map.end()) {
			return {num_map[complement], i};
		}
		num_map[nums[i]] = i;
	}
	return {};
}

int main() {
	vector<int> nums = {2, 7, 11, 15};
	int target = 9;
	vector<int> result = twoSum(nums, target);
	if (!result.empty()) {
		cout << "Indices: " << result[0] << ", " << result[1] << endl;
	} else {
		cout << "No solution found." << endl;
	}
	return 0;
}