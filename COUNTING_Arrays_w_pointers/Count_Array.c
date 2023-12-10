// Write a function to calculate the length of a string
// Function should take as parameter a const char pointer
// Function can only determine the length of the string using pointer arithmetic
// Use a loop while to find the \0 null character
// The function should subtract 2 pointers (one pointing to the end of the string and one to the beginning of the string)
// The function should return an INT that is the value of the string passed into the function.

#include <stdio.h>
#include <stdlib.h>

int StringLength(const char* string) //declares the function to count strings, parameter constant string char reference pointer
{

const char* ptr = string; //references string to the char pointer
//int length =0;
while (*ptr != '\0') //running through the string
{
    ptr++;
}
return ptr - string; // calculating size, memory address from string - memory address from ptr, gives you the elements of array (memory addresses) and therefore characters
}

int main() // main function
{
int stringlen=0, buffer = 256; //let us define a buffer to allocate memory
//char *string=NULL;
char *string=malloc (buffer *sizeof(char)); // allocate a buffer = 256 to string

if (string == NULL ) // memory check
{
 printf ("Error writing memory");
    return 1;
}

printf ("Insert the String:");
//scanf ("%255s", &string); //if you want to do it without pointer
fgets (string, buffer,stdin);

stringlen = StringLength (string);
printf ("\nThe number of characters in the string is: %d", stringlen-1); //let us skip the 0 array element

free (string); //free memory used by malloc;

return 0;
}

