#include<bits/stdc++.h>
using namespace std;
void search(string&pat, string&txt){
    int M = (int)pat.size();
    int N = (int)txt.size();
    int i, j;
    for(i = 0; i < N-M; i++) {
        for(j = 0; j < N; j++) {
            if(txt[i + j] != pat[j]){
                break;
            }
        }
        if( j== M){
            cout<<"Pattern found at index : "<<i<<endl;
        }
    }
}
int main(){
    string txt1 = "AABBAAABBAABBA";
    string pat1 = "AABBA";
    search(pat1, txt1);
    return 0;
}