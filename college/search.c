#include<stdio.h>
#include<stdlib.h>

int LinearSearchRecursive(int arr[],int size,int target){

    if(size == 0)
    return -1;

    if(arr[size-1]== target)
    return size-1;

    return LinearSearchRecursive(arr,size-1,target); 


}

int LinearSearchIterative(int arr[],int size,int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == target){
            return i;
        }
       
    }
     return -1;
}

int BinarySearchIterative(int arr[],int size, int key)
{
    int low = 0;
    int high = size-1;
    int mid = low + high/2;
    while(low<=high){
        if(arr[mid]== key)
        return mid;
        else if(arr[mid]>key)
        high = mid -1;

        else if(arr[mid< key])
        low = mid+1;
    };
    return -1;
}

int BinarySearchRecursive(int arr[],int low, int high, int key){
    int mid = high-1;

    if(arr[mid]== key)
    return mid;

    if(arr[mid]< key)
    return BinarySearchIterative(arr,mid + 1,high,key)
}