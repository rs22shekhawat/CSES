#include<bits/stdc++.h>

using namespace std;


int binarySearch(int arr[], int left, int right, int x) {
    int mid = (left + right) / 2;
    while ( left <=right ) {
        
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            right=mid-1;
        else
            left=mid+1;

        mid = (left + right) / 2;
    }
    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(int);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        cout << "Element not found.";
    else
        cout << "Element found at index " << result << endl;
        
    return 0;
}