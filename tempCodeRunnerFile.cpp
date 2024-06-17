#include <iostream>
#include <string>
using namespace std;

#define d 10 // Base for the hash function

// Function to perform Rabin-Karp Pattern Matching
void rabinKarpSearch(string txt, string pat, int q) {
    int t = txt.length();
    int p = pat.length();
    int i, j;
    int pat_hash = 0; // Hash value for pattern
    int txt_hash = 0; // Hash value for text
    int h = 1;

    // The value of h would be "pow(d, p-1)%q"
    for (i = 0; i < p - 1; i++)
        h = (h * d) % q;

    // Calculate the hash value of pattern and first window of text
    for (i = 0; i < p; i++) {
        pat_hash = (d * pat_hash + pat[i]) % q;
        txt_hash = (d * txt_hash + txt[i]) % q;
    }

    // Slide the pattern over text one by one
    for (i = 0; i <= t - p; i++) {
        // Check the hash values of current window of text and pattern.
        // If the hash values match then only check for characters one by one
        if (pat_hash == txt_hash) {
            /* Check for characters one by one */
            for (j = 0; j < p; j++) {
                if (txt[i + j] != pat[j])
                    break;
            }

            // if pat_hash == txt_hash and pat[0...p-1] = txt[i, i+1, ...i+p-1]
            if (j == p)
                cout << "Pattern found at index " << i << endl;
        }

        // Calculate hash value for next window of text: Remove leading digit, add trailing digit
        if (i < t - p) {
            txt_hash = (d * (txt_hash - txt[i] * h) + txt[i + p]) % q;

            // We might get negative value of txt_hash, converting it to positive
            if (txt_hash < 0)
                txt_hash = (txt_hash + q);
        }
    }
}

int main() {
    string txt = "3141592653589793";
    string pat = "26535";
    int q = 101; // A prime number

    rabinKarpSearch(txt, pat, q);

    return 0;
}