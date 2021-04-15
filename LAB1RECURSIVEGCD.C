//RECURSIVE  METHOD 
#include <stdio.h>
#include <stdlib.h>


int gcd(int a, int b)
{

    if (a == 0)

        return b;

    return gcd(b%a, a);
}

void  main()
{
 int x,n1,n2;
    printf("THE FIRST NO :");
    scanf("%d",&n1);
printf("THE SECOND NO :",n2);
      scanf("%d",&n2);
     x=gcd(n1,n2);
    printf("RESULT IS :",x);
  
}
