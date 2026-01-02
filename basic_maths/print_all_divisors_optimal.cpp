#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"number:";
    cin>>n;
    cout<<"divisors are:";
    for(i=1;i<sqrt(n);i++){
        if(n%i==0)
            cout<<" "<<i<<" "<<n/i;
    }
    cout<<" "<<sqrt(n);
}