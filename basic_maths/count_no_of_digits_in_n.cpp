#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cout<<"num:";
    cin>>n;
    if(n==0) return 1;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<"count:"<<count;
    return count;
}