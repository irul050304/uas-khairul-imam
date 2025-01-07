#include <iostream>
using namespace std;

// Binary Search
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Not found
}

// Linear Search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1; // Not found
}

int main() {
    cout <<"Nama: Khairul imam"<<endl;
    cout <<"NIM:231011403300"<<endl;
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    // Binary Search
    int binaryIndex = binarySearch(arr, size, key);
    cout << "Binary Search Index: " << binaryIndex << endl;

    // Linear Search
    int linearIndex = linearSearch(arr, size, key);
    cout << "Linear Search Index: " << linearIndex << endl;

    return 0;
}