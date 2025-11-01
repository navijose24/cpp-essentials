#include<bits/stdc++.h>
using namespace std;
/*
print the pattern 1
                  1 2
                  1 2 3
                  1 2 3 4
                  when n=4 similarly n=10and so on
*/
int main(){
    int i,n,j;
    cout<<"num:";
    cin>>n;
    for (i=0;i<n;i++)
    {
        for (j=0;j<=i;j++)
        cout<<j+1<<" ";
        cout<<"\n";
    }
}