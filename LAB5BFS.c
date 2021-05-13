 //BFS traversal techy
#include<stdio.h>
#include<conio.h>
#include<time.h>

void insertq(int q[],int node, int *f, int *r)
{
   if((*f==-1) && (*r==-1))
   {
       (*f)++, (*r)++, q[*f]=node;
   }
   else{
	 (*r)++, q[*r]=node;
       }
  }

  int deleteq(int q[],int *f,int *r)
  {
     int temp;
     temp=q[*f];
     if(*f == *r) *f=*r=-1;
     else (*f)++;
     return temp;
   }

   void bfs(int n, int adj[][10],int src, int visited[])
   {
	 int q[20], f=-1,r=-1,v,i;
	 insertq(q,src,&f,&r);
	 while((f <=r ) && (f != -1))
	 {
	     v=deleteq(q,&f,&r);
	     if(visited[v]!=1)
	     {
		      visited[v]=1;
		       printf("%d",v);
	      }
	      for(i=1;i<=n;i++)
		       if((adj[v][i]==1) && (visited[i] !=1))
			insertq(q,i,&f,&r);
	  }
     }


     void main()
     {
	int n,i,j,adj[10][10],src,visited[10];
	clrscr();
    clock_t t;
    t = clock();
	printf("enter number of vertices\n");
	scanf("%d",&n);
	printf("Enter adjacency matrix\n");
	for(i=1;i<=n;i++)
	{
	       visited[i]=0;
	  for(j=1;j<=n;j++)
	     scanf("%d",&adj[i][j]);
	 }
	 printf("enter starting vertex\n");
	 scanf("%d",&src);
	 printf("The nodes reachable from src are\n");
	 bfs(n,adj,src,visited);
	 
             t = clock() - t;
           double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\nfun() took %f seconds to execute.", time_taken);
         getch();
       }
