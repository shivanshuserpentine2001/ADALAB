#include <stdio.h>
#include <time.h>
  
// A function that terminates when enter key is pressed
void fun(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
  
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
  

  
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
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
    
{   int nume;
        printf("ENTER ELEMTTS TO BE GENERATED ARRAY");
 scanf("%d",&nume);
    clock_t t;
    t = clock();
 
    int arr[nume],i;
     
      srand(time(0));
    for(i=0;i<nume;i++)
    {arr[i]=rand();}
    int n = sizeof(arr)/sizeof(arr[0]);
    fun(arr, n);
    printf("Sorted array(BUBBLE): \n");
    printArray(arr, n);
;
    // Calculate the time taken by fun()
    

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("fun() took %f seconds to execute \n", time_taken);
    return 0;
}
