#include<bits/stdc++.h>
using namespace std;
/*
print the pattern 1
                  2 2
                  3 3 3
                  4 4 4 4
                  when n=4 similarly n=10and so on
*/
int main(){
    int i,n,j;
    cout<<"num:";
    cin>>n;
    for (i=0;i<n;i++)
    {
        for (j=0;j<=i;j++)
        cout<<i+1<<" ";
        cout<<"\n";
    }
}