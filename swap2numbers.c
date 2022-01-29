#include <stdio.h>
void main()
{
    int a=10,b=20,temp;

    printf("Before Swaping a=%d, b=%d\n", a, b);

   temp=a;
   a=b;
   b=temp;

   printf("Number after Swaping a=%d, b=%d \n", a,b);

}
