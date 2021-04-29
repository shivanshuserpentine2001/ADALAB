#include <stdio.h>
#include <time.h>
 #include  <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
   
// A function that terminates when enter key is pressed
void fun(int arr[], int n)
{
    int i, j, min_idx;
  
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
  
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
  
// The main program calls fun() and measures time taken by fun()
int main()
{  int nume;
     printf("ENTER ELEMTTS OF ARRAY TO BE GENERATED");
    scanf("%d",&nume);// Calculate the time taken by fun()
    clock_t t;
    t = clock();
    int arr[nume],i;
    srand(time(0));
   
    for(i=0;i<nume;i++)
    {arr[i]=rand() ;}
    int n = sizeof(arr)/sizeof(arr[0]);
    fun(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("fun() took %f seconds to execute \n", time_taken);
    return 0;
}
