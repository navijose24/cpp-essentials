#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,rev;
    rev=0;
    cout<<"number:";
    cin>>n;
    while(n>0){
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    cout<<"reversed no:"<<rev;
    return 0;
}