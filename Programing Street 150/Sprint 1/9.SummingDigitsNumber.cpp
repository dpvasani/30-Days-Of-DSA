#include<bits/stdc++.h>
using namespace std;

int SummingDigits(int n){
    int sum = 0;
    while(n>0){
        // Modulus
        // Divide 
        sum += n%10;
        n = n/10;
    }
    return sum;
}


int main(){
    int n;
    cin>>n;
    int sum = SummingDigits(n);
    cout<<sum<<endl;
}