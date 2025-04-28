// binary search of c language 

#include <stdio.h>
int binarySearch(int arr[], int left, int right, int key) {

    while (left <= right) {
        int mid = (left + right) / 2;  // Find middle

        if (arr[mid] == key) return mid;  // Element found
        else if (arr[mid] < key) left = mid + 1;  // Search right
        else right = mid - 1;  // Search left
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;

    int index = binarySearch(arr, 0, 4, key);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found!\n");

    return 0;
}
