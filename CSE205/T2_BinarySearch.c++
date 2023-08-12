#include <iostream>


int binarySearch(int arr[], int target, int strt, int end) {
    while (strt <= end) {
        int mid = strt + (end - strt) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            strt = mid + 1;
        else
            end = mid - 1;
    }

    return -1; // Element is not available
}

int main() {
    int arr[] = {5,9,17,23,25,45,59,63,71,89};
    int target = 17;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, target, 0, size - 1);

    if (result != -1)
        std::cout << "Element found at index " << result << std::endl;
    else
        std::cout << "Element not found" << std::endl;

    return 0;
}