#include"main.h"

bool binarySearch(int *arr,int size,int element)
{
    int min = 0, max = size - 1;
    
    while (min <= max) {
        int mid = min + (max - min) / 2; // To avoid integer overflow

        if (arr[mid] == element) {
            return true;
        } else if (arr[mid] < element) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }

    return false;
                
}