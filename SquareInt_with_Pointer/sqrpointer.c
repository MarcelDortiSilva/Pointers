#include <stdio.h>
#include <stdlib.h>

void*SqrtInt(int *x)
{
 //int sqrt;

 printf ("\nThe value of the memory address pointed to x is %p", (void*)x); //shows the real memory RAM address

 *x = (*x) * (*x); //runs faster by multiplying the referenced pointers than creating variables
//sqrt = *x; // the variable sqrt is carries now the value stored in *x (nomenclature for address referenced for x, not the value);
//*x=sqrt*sqrt; //the value of the address pointed to x is equal to the value stored in the memory register of *x times itself; the memory address equal to a squared value.

return x;
}

int main()
{
int a;

printf("\nNumber to be squared - int: ");
scanf("%d", &a); //saved in the memory address referenced in RAM to place a;
printf ("The memory address assigned to a is %p", (void*)&a); // shows the memory address referenced to a.

SqrtInt(&a);

printf ("\nThe output of SqrtInt Function is %d",a);
printf ("\nThe address assigned to a is %p",(void*)&a);


 return 0;
}

