#include<bits/stdc++.h>
using namespace std;
/*
print the pattern Diamond Star Pattern
                   *
                  ***
                 *****
                 *****
                  ***
                   *
                 when n=3 similarly for all n.
*/
int main(){
    int n,i,j;
    cout<<"num:";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)
        cout<<" ";
        for(j=0;j<2*i+1;j++)
        cout<<"*";
        cout<<"\n";
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
        cout<<" ";
        for(j=0;j<2*n-(2*i+1);j++)
        cout<<"*";
        cout<<"\n";
    }

}