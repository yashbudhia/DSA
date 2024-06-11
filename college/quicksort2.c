#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
};

int partition(int arr[],int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j<= high-1; j++)
    {
        if(arr[j]< pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    };
     swap(&arr[i+1], &arr[high]);
        return i+1;
}

void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int loc = partition(arr,low,high);
        quicksort(arr,low,loc-1);
        quicksort(arr,loc+1,high);
    };
};

int printarray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d   ",arr[i]);
    };

}

int main()
{
   int n = 10;
   srand(0);
   int arr[10];
   for(int i = 0; i< n ; i++)
   {
    arr[i]= rand() % 100;
   }
    printf("\n Unsorted Array : \n");
    printarray(arr,n);

     printf("\n Sorted Array : \n");
     quicksort(arr,0,n-1);
     printarray(arr,n);


return 0;
}

