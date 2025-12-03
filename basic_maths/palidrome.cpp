#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rev=0,temp;
    cout<<"number:";
    cin>>n;
    temp=n;
    while(n!=0){
        int x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    if(temp==rev)
        cout<<"palidrome";
    else
        cout<<"not a palidrome number";
    return 0;
}