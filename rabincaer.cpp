
// #include <iostream>
// #include <string>
// using namespace std;

// #define b 10
// #define MOD 1000000007 // A large prime number to take modulus

// void search(string txt, string pat, int t, int p) {
//     int pat_hash = 0;
//     int txt_hash = 0;
//     int h = 1; // The value of b^(p-1)
    
//     // Precompute h = pow(b, p-1) % MOD
//     for (int i = 0; i < p - 1; i++)
//         h = (h * b) % MOD;

//     // Compute the hash value of the pattern and first window of text
//     for (int i = 0; i < p; i++) {
//         pat_hash = (b * pat_hash + pat[i]) % MOD;
//         txt_hash = (b * txt_hash + txt[i]) % MOD;
//     }

//     // Slide the pattern over text one by one
//     for (int i = 0; i <= t - p; i++) {
//         // Check the hash values of current window of text and pattern
//         if (pat_hash == txt_hash) {
//             // Check for characters one by one
//             int j;
//             for (j = 0; j < p; j++) {
//                 if (txt[i + j] != pat[j])
//                     break;
//             }
//             // If all characters match, print the position
//             if (j == p)
//                 cout << "Pattern found at index " << i << endl;
//         }

//         // Calculate hash value for the next window of text: Remove leading digit, add trailing digit
//         if (i < t - p) {
//             txt_hash = (b * (txt_hash - txt[i] * h) + txt[i + p]) % MOD;

//             // We might get negative value of txt_hash, convert it to positive
//             if (txt_hash < 0)
//                 txt_hash = (txt_hash + MOD);
//         }
//     }
// }


#include<iostream>
#include<string>
#define b 10
#define MOD 1000000000007

using namespace std;

void search(string txt, string pat, int t, int p) {
    int txt_hash = 0;
    int pat_hash = 0;
    int h = 1;
    for(int i =0; i <p -1;   i++) {
        h =  (h * b) % MOD;
        for(int i =0; i < p; i++) {
            pat_hash = (b* pat_hash + pat[i] %MOD );
            txt_hash = (b* txt_hash + txt[i] %MOD);
        }
        for(int i = 0; i <= t - p; i++) {
            if(pat_hash == txt_hash){
                int j;
                for(j =0; j<p; j++){
                    if(txt[i+j] != pat[j]){
                        break;
                    }
                }
                if(j==p){
                    cout<<"Pattern found at index" << i << endl;
                }
            }
            if( i < t - p){
                txt_hash = (b*(txt_hash - txt[i] *h) + txt [i + p] %MOD);
                if(txt_hash < 0){
                    txt_hash = (txt_hash + MOD);
                }
            }
        }
    }
}
int main() {
    string txt = "BAABABABA";
    string pat = "BAA";
    int t = (int)txt.length();
    int p = (int)pat.length();
    search(txt, pat, t, p);
}

