/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.*/
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(const string &s, const string &t) {
	if (s.size() != t.size()) return false;
	array<int, 256> freq{};
	for (unsigned char c : s) ++freq[c];
	for (unsigned char c : t) {
		if (--freq[c] < 0) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s, t;
	// Read two strings (whitespace-separated) from stdin.
	if (!(cin >> s >> t)) return 0;

	cout << (isAnagram(s, t) ? "true" : "false") << '\n';
	return 0;
}
