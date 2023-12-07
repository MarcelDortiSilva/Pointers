#include <stdio.h>
#include <stdlib.h>

void SwapValue ( int *x, int *y)
{
    int temp;

    printf("\n\nAddress in x pointer is %p", (void*)x);
    printf("\nAddress in y pointer is %p", (void*)y);

    temp = *x; /*save the value of x */
    *x = *y; /*puts x in to y*/
    *y = temp; /*puts temp into y*/

return;
}


int main()
{
int a, b;

printf ("\nEnter the value for a: ");
scanf("%d", &a);
printf ("\nEnter the value for b: ");
scanf("%d", &b);

printf("\n\nBefore the Swap Function, value of a is %d", a);
printf("\nBefore the Swap Function, value of b is %d", b);

printf("\n\nBefore the Swap Function, the address pointed to a is %p",(void*)&a);
printf("\n\nBefore the Swap Function, the address pointed to b is %p",(void*)&b);

/*call Swap Function*/

SwapValue(&a, &b);

printf("\n\n---After the Swap Function, value of a is %d", a); // values will always be the same, because it is passing it with value
printf("\n\n---After the Swap Function, value of b is %d", b); // values will always be the same, because it is passing it with value

printf("\n\n---After the Swap Function, the address pointed to a is %p",(void*)&a);
printf("\n\n---After the Swap Function, the address pointed to b is %p",(void*)&b);

    return 0;
}
