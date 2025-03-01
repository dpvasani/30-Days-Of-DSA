#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<< "Multiplication Table of " << n << endl;
    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}