/*You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.*/


#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
	int maxWealth = 0;
	for (const auto& customer : accounts) {
		int wealth = 0;
		for (int money : customer) {
			wealth += money;
		}
		if (wealth > maxWealth) maxWealth = wealth;
	}
	return maxWealth;
}

int main() {
	int m, n;
	cout << "Enter number of customers (m): ";
	cin >> m;
	cout << "Enter number of banks (n): ";
	cin >> n;
	vector<vector<int>> accounts(m, vector<int>(n));
	cout << "Enter the account balances (m x n grid):\n";
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> accounts[i][j];
		}
	}
	int result = maximumWealth(accounts);
	cout << "Richest customer wealth: " << result << endl;
	return 0;
}