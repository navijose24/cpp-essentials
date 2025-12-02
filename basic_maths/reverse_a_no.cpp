#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"number:";
    cin>>n;
    cout<<"reversed no:";
    while(n!=0){
        int x=n%10;
        if(n%10!=0)
        {    
            cout<<x;
            n=n/10;
        }
        else n=n/10;
    }
    return 0;

}