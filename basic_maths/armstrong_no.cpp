#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,c=0,j,s=0,n1,p;
    int a[10]; //vector<int> a;
    cout<<"number:";
    cin>>n;
    n1=n;
    while(n!=0){
        a[c]=n%10;//a.push_back(n % 10);
        cout<<" " <<c<<a[c];
        c++;
        n=n/10;
    }
    cout<<" "<<c;
    for(j = 0; j < c; j++){
        int p = 1;
        for(int k = 0; k < c; k++)
            p *= a[j];
        s += p;
    }
    cout<<" "<<s;
    if(s==n1)
    cout<<" armstrong no";
    else
    cout<<" not armstrong";
}