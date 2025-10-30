#include<bits/stdc++.h>
using namespace std;
int main() {
    /*
    Read x and y from user
    if x=1
       then look y=1 : print "x is one and y is one"
         : print "x is one and y is not" 
    otherwise if x!=1
        then print x is not equal to one

    */
    int x,y;
    cout<<"enter x and y:";
    cin>>x>>y;
    switch(x){
        case 1:
            switch(y){
                case 1:
                    cout<<"x is one and y is one\n";
                    break;
                default:
                    cout<<"x is one and y is not\n";
                    break;
            }
            break;
        default:
            cout<<"x is not equal to one\n";
            break;
    }
    return 0;
}