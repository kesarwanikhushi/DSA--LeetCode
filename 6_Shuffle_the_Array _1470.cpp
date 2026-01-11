/*Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
	vector<int> result;
	for (int i = 0; i < n; ++i) {
		result.push_back(nums[i]);
		result.push_back(nums[i + n]);
	}
	return result;
}

int main() {
	int n;
	cout << "Enter n (half the size of array): ";
	cin >> n;
	vector<int> nums(2 * n);
	cout << "Enter 2n elements: ";
	for (int i = 0; i < 2 * n; ++i) {
		cin >> nums[i];
	}
	vector<int> result = shuffle(nums, n);
	cout << "Shuffled array: ";
	for (int x : result) {
		cout << x << " ";
	}
	cout << endl;
	return 0;
}
