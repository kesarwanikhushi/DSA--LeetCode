/*Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.*/
#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
	int i = 0, j = (int)s.size() - 1;
	while (i < j) swap(s[i++], s[j--]);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string line;
	if (!getline(cin, line)) return 0;
	// Trim
	size_t a = line.find_first_not_of(" \t\r\n");
	if (a == string::npos) return 0;
	size_t b = line.find_last_not_of(" \t\r\n");
	string input = line.substr(a, b - a + 1);

	vector<char> chars;
	// If input contains spaces, treat as space-separated characters (e.g. "h e l l o")
	if (input.find(' ') != string::npos) {
		stringstream ss(input);
		string tok;
		while (ss >> tok) {
			if (!tok.empty()) chars.push_back(tok[0]);
		}
		reverseString(chars);
		// print space-separated
		for (size_t i = 0; i < chars.size(); ++i) {
			if (i) cout << ' ';
			cout << chars[i];
		}
		cout << '\n';
	} else {
		// treat as a single string
		chars.assign(input.begin(), input.end());
		reverseString(chars);
		for (char c : chars) cout << c;
		cout << '\n';
	}

	return 0;
}

