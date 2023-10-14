#include"main.h"

int main()
{
    int size = getSize("Enter the size of the array : ");

    int *arr = (int *)malloc(size * sizeof(int)); // Memory allocation for the array 

    if(arr == NULL)
    {
        printf("Memory can't be alocated !");
        return -1;
    }

    fillArray(arr,size);

    int option = getOption("Type 1 for Linear search.\nType 2 for Binary search. ");

    int element = getElement("Enter the element you want to search : ");

    
   if(printUsageSearch(arr,size,option,element))
   {
    printf("%d is exist in the array .",element);
   }
   else{
    printf("%d is not found in the array .",element);
   }

    free(arr); // Freeing allocated memory 

    return 0;
}
