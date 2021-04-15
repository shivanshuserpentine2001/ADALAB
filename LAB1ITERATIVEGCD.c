#include <stdio.h>
// Iterative function to calculate gcd of two numbers
int euclid(int a, int b)
{
    // do until the two numbers become equal
    while (a != b)
    {
        // replace the larger number by its difference with the smaller number
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
 
    return a;        // or `b` (since both are equal)
}
 
int main()
{
    int a ;
    int b ;
 printf("ENTER A & B resp");
    scanf("%d %d",&a ,&b);
    printf("Euclid(%d, %d) = %d", a, b, euclid(a, b));
 
    return 0;
}
