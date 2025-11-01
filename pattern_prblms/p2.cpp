#include<bits/stdc++.h>
using namespace std;
/*
print the pattern *
                  **
                  ***
                  when n=3 similarly n=10and so on
*/
int main(){
    int i,n,j;
    cout<<"num:";
    cin>>n;
    for (i=0;i<n;i++)
    {
        for (j=0;j<=i;j++)
        cout<<"* ";
        cout<<"\n";
    }
}