/*
Given an array arr[] containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value target. You need to return the 1-based indices of the leftmost and rightmost elements of this subarray. You need to find the first subarray whose sum is equal to the target.

Note: If no such array is possible then, return [-1].

Examples:

Input: arr[] = [1, 2, 3, 7, 5], target = 12
Output: [2, 4]
Explanation: The sum of elements from 2nd to 4th position is 12.
*/
#include <iostream>
using namespace std;
int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;

    int left = 0, right = 0, current_sum = 0;
    bool found = false;

    while (right < n) {
        current_sum += arr[right];

        while (current_sum > target && left <= right) {
            current_sum -= arr[left];
            left++;
        }

        if (current_sum == target) {
            cout << "Subarray found from index " << left + 1 << " to " << right + 1 << endl;
            found = true;
            break;
        }
        right++;
    }

    if (!found) {
        cout << "-1" << endl;
    }

    return 0;
}