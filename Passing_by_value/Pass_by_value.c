#include <stdio.h>
#include <stdlib.h>

void SwapValue ( int x, int y)
{
    int temp;

    temp = x; /*save the value of x */
    x = y; /*puts x in to y*/
    y = temp; /*puts temp into y*/

return;
}


int main()
{
int a, b;

printf ("\nEnter the value for a: ");
scanf("%d", &a);
printf ("\nEnter the value for b: ");
scanf("%d", &b);

printf("\nBefore the Swap Function, value of a is %d", a);
printf("\nBefore the Swap Function, value of b is %d", b);

/*call Swap Function*/

SwapValue(a, b);

printf("\nAfter the Swap Function, value of a is %d", a); // values will always be the same, because it is passing it with value
printf("\nAfter the Swap Function, value of b is %d", b); // values will always be the same, because it is passing it with value

    return 0;
}

