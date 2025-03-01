#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.length();
    int vowels = 0, consonants = 0;
    for(int i = 0; i < n; i++) {
        // convert to lowercase
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if(ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    return 0;
}