#include<bits/stdc++.h>
using namespace std;
/*
print the pattern  *
                  ***
                 *****
                  when n=3 similarly n=10and so on
*/
int main(){
    int i,n,j,k;
    cout<<"num:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n-i-1;j>0;j--)
        cout<<" ";
        for(k=0;k<2*i+1;k++)
        cout<<"*";
        cout<<"\n";
    }
}