#include <math.h>
#include <stdio.h>
#include<time.h>
 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
/* Driver program to test insertion sort */
int main()
    
{  int NUM;
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY ");
    scanf("%d",&NUM);
        int i,arr[NUM];
 clock_t t;
    t = clock();
 for(i=0;i<NUM;i++)
    {scanf("%d",&arr[i]);}
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
 printf("\nSORTED INSERTION:");
    printArray(arr, n);
  t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\nfun() took %f seconds to execute \n", time_taken);
   
