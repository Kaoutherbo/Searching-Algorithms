#include"main.h"


bool linearSearch(int *arr,int size,int element)
{
    bool isFound = false;
    for (size_t i = 0; i < size; i++)
    {
        if(arr[i] == element){
            isFound = true ;
        }
    }
    return isFound;
}