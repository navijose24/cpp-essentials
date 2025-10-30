#include<bits/stdc++.h>
using namespace std;
int main() {
    /*
    read a no. b/w 1-7 then print the coressponding day ,using switch
    reading no as integer from user
    switch(no)
        case 1 : print "monday"
        case 2 : print "tuesday"
        case 3 : print "wednesday"
        case 4 : print "thursday"
        case 5 : print "friday"
        case 6 : print "saturday"
        case 7 : print "sunday"
        default : print "invalid input" 
    */
    int day;
    cout<<"enter day no (1-7):";
    cin>>day;
    switch (day)
    {
        case 1:
            cout<<"monday";
            break;
        case 2:
            cout<<"tuesday";
            break;
        case 3:
            cout<<"wednesday"; 
            break;
        case 4:
            cout<<"thursday";
            break;
        case 5:
            cout<<"friday";
            break;
        case 6:
            cout<<"saturday";
            break;
        case 7:
            cout<<"sunday";
            break;
            
        default:
            cout<<"invalid i/t";
            break;
    }
    return 0;
}