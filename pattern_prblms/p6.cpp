#include<bits/stdc++.h>
using namespace std;
/*
print the pattern   1 2 3
                    1 2
                    1
                  when n=3 similarly n=10 and so on
*/
int main(){
    int i,n,j;
    cout<<"num:";
    cin>>n;
    for (i=n;i>0;i--)
    {
        for (j=0;j<i;j++)
        cout<<j+1<<" ";
        cout<<"\n";
    }
}