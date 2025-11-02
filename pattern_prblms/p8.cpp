#include<bits/stdc++.h>
using namespace std;
/*
print the pattern  *****
                    ***
                     *
                     when n=3 similarly for all n.
*/
int main(){
    int n,i,j,k;
    cout<<"num:";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
        cout<<" ";
        for(k=0;k<2*n-(2*i+1);k++)
        cout<<"*";
        cout<<"\n";
    }
}