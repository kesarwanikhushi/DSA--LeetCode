/*There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.*/
#include <iostream>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
	int maxCandies = 0;
	for (int c : candies) {
		if (c > maxCandies) maxCandies = c;
	}
	vector<bool> result;
	for (int c : candies) {
		result.push_back(c + extraCandies >= maxCandies);
	}
	return result;
}

int main() {
	int n, extraCandies;
	cout << "Enter number of kids: ";
	cin >> n;
	vector<int> candies(n);
	cout << "Enter candies for each kid: ";
	for (int i = 0; i < n; ++i) {
		cin >> candies[i];
	}
	cout << "Enter extra candies: ";
	cin >> extraCandies;
	vector<bool> result = kidsWithCandies(candies, extraCandies);
	cout << "Result: ";
	for (bool b : result) {
		cout << (b ? "true " : "false ");
	}
	cout << endl;
	return 0;
}
