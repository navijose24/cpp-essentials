#include<bits/stdc++.h>
using namespace std;
int main() {
    /*
    read age of the person
    if age is graterthan 18 
        :print adult 
    otherwise :print child
    */
   int age;
   cout<<"age:";
   cin>>age;
   if (age>18){
       cout<<"adult\n";
    } else {
         cout<<"child\n";
     }
    return 0;
} 