#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    Read mark from user
    if mark is greater than or equal to 90
        :print A grade
    otherwise if mark is greater than or equal to 75
        :print B grade
    otherwise if mark is greater than or equal to 60
        :print C grade
    otherwise if mark is greater than or equal to 50
        :print D grade 
    otherwise
        :print F grade
    */
    int mark;
    cout<<"mark:";
    cin>>mark;
    if(mark>=90)
    cout<<"A grade\n";
    else if(mark>=75)
    cout<<"B grade\n";
    else if(mark>=60)
    cout<<"C grade\n";
    else if(mark>=50)
    cout<<"D grade\n";
    else
    cout<<"F grade\n";
    return 0;
}