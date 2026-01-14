/*
You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

Examples:

Input: arr[] = [1, 2, 3, 5]
Output: 4
Explanation: All the numbers from 1 to 5 are present except 4.

Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 8 are present except 6.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n - 1];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ex=0,act,i,mis;
    act=((n+1)*(n+2))/2;
    for(i=0;i<n;i++)
    ex+=arr[i];
    mis=act-ex;
    cout<< mis;

}