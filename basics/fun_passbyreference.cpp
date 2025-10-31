#include <iostream>
using namespace std;

/*
read the no from user and pass the reference of no. to a function
that adds 10 to it using pass by reference
and print the value in main function
*/
void modify(int &a) {
    a = a + 10;
}

int main() {
    int x = 5;
    modify(x);
    cout << x << endl; // Output: 15
    return 0;
}
