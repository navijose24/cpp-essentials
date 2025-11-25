#include<bits/stdc++.h>
using namespace std;

//The problem of counting set bits in an integer means finding the number of 1’s in its binary representation. 
//For example, the binary form of 7 is 111, which has 3 set bits.
//basic logic without builtin function
/* 
int count_setbits(int N) { 
    int cnt = 0;

    while (N > 0) {
        cnt += (N & 1);  // check last bit
        N = N >> 1;      // right shift
    }

    return cnt;
}
*/

//function call
int main() {
    int n = 7;
    cout << __builtin_popcount(n);
    return 0;
}