#include<bits/stdc++.h>
using namespace std;

int Gcd(int a, int b){
    while(b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}


int main(){
    int a, b;
    cin>>a>>b;
    int gcd=Gcd(a,b);
    cout<<gcd<<endl;
}