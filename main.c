#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("Enter the numbers: ");
   scanf("%d",&a);
   scanf("%d",&b);
   c=a+b;
   printf("Sum= %d\n",c);
   c=a-b;
   printf("Diff of a and b: %d\n",c);
   c=a*b;
   printf("Multi of a and b:%d\n",c);
   c=a/b;
   printf("Division of a and b :%d\n",c);
   c=a%b;
   printf("Modulo of a and b: %d\n",c);
    return 0;
}
