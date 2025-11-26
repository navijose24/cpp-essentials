#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr[] = {4,2,1};
    sort(arr, arr+3, greater<int>());  //Sort from arr to arr+3 elements only
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}
