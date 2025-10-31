#include <iostream>
using namespace std;
/*
read the no from user and pass the cpy of no. to a function
that adds 10 to it using pass by value
and print the value in main function
*/
void modify(int a) {
    a = a + 10;
}

int main() {
    int x = 5;
    modify(x);
    cout << x << endl; // Output: 5
    return 0;
}
