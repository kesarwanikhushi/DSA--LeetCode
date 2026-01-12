// Leetcode 2114: Maximum Number of Words Found in Sentences
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int mostWordsFound(const vector<string>& sentences) {
	int maxWords = 0;
	for (const string& sentence : sentences) {
		int words = 1; // At least one word
		for (char c : sentence) {
			if (c == ' ') ++words;
		}
		if (words > maxWords) maxWords = words;
	}
	return maxWords;
}

int main() {
	int n;
	cout << "Enter number of sentences: ";
	cin >> n;
	cin.ignore();
	vector<string> sentences(n);
	cout << "Enter each sentence on a new line:\n";
	for (int i = 0; i < n; ++i) {
		getline(cin, sentences[i]);
	}
	cout << "Maximum number of words in a sentence: " << mostWordsFound(sentences) << endl;
	return 0;
}
/*A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
You are given an array of strings sentences, where each sentences[i] represents a single sentence.
Return the maximum number of words that appear in a single sentence.*/