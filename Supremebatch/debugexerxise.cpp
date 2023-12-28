#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            binarySearch(arr, left, mid - 1, x);
        else
            binarySearch(arr, mid + 1, right, x);
    }
    return -1;
}