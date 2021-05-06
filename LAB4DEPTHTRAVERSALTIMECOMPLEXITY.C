#include<stdio.h>
#include<time.h>
void DFS(int);
 int G[10][10],visited[10],n;
 void main()
 { 
     int i,j;
          clock_t t;
    t = clock();
     printf("enter the number of vertices\n");
     scanf("%d", &n);
     printf("\n enter the adjacency matrix of the graph");
     for(i=0; i<n; i++)
     for(j=0; j<n; j++)
     scanf("%d", &G[i][j]);
      for(i=0; i<n; i++)
      visited[i]=0;
      DFS(0);
  t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n ALGO took %f seconds to execute \n", time_taken);
 }
 void DFS(int i)
 {
     int j;
     printf("\n%d",i);
     visited
[i]=1;
     for(j=0; j<n; j++)
     if(!visited[j] && G[i][j]==1)
     DFS(j);
 }
