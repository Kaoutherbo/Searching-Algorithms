#include"main.h"

bool printUsageSearch(int *arr, int size, int option,int element)
{
    
    // Check if the option is 1
    if (option == 1) {
        return linearSearch(arr,size,element);
    }
    // Check if the option is 2
    else
    {
        return binarySearch(arr,size,element);
    }
    
}