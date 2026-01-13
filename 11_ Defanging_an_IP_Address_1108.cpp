/*Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".*/
#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(const string &address) {
	string out;
	out.reserve(address.size() + 6); // small reserve
	for (char c : address) {
		if (c == '.') out += "[.]";
		else out += c;
	}
	return out;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	if (!getline(cin, s)) return 0;
	// Trim possible leading/trailing whitespace
	size_t start = s.find_first_not_of(" \t\r\n");
	if (start == string::npos) return 0;
	size_t end = s.find_last_not_of(" \t\r\n");
	string ip = s.substr(start, end - start + 1);

	cout << defangIPaddr(ip) << '\n';
	return 0;
}
