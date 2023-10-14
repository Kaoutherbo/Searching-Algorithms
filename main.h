#ifndef MAIN_H
#define MAIN_H
// Include necessary header files here
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>


int getSize(char *s);
int getElement(char *s);
void fillArray(int *arr,int size);
int getOption(char *s);
bool printUsageSearch(int *arr, int size, int option,int element);

bool linearSearch(int *arr,int size,int element);

bool binarySearch(int *arr,int size,int element);

#endif