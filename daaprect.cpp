#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to create the longest prefix suffix (LPS) array
vector<int> computeLPSArray(const string& pattern) {
    int m = pattern.size();
    vector<int> lps(m, 0);
    int length = 0;  // Length of the previous longest prefix suffix
    int i = 1;

    while (i < m) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

// Function to implement the KMP algorithm and count pattern occurrences
int KMPSearch(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();
    int count = 0;

    vector<int> lps = computeLPSArray(pattern);

    int i = 0;  // Index for text[]
    int j = 0;  // Index for pattern[]

    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == m) {
            count++;
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }

    return count;
}

int main() {
    string text;
    string pattern;

    // Read the input strings
    getline(cin, text);
    getline(cin, pattern);

    // Count the occurrences of the pattern in the text
    int result = KMPSearch(text, pattern);

    // Print the result
    cout << result << endl;

    return 0;
}