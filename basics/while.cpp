#include<bits/stdc++.h>
using namespace std;
/*
find the sum of first n natural numbers using while loop
1. read n from user
2. for i=1 to n
    do set sum=0
       sum=sum+i
3. print sum
*/
int main(){
    int x,sum=0,i=1;
    cout<<"num:";
    cin>>x;
    while(i<=x){
        sum=sum+i;
        i++;
    }
    cout<<"sum:"<<sum;

}