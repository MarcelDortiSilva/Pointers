#include <stdio.h>
#include <stdlib.h>
#include <string.h>


   int main() // main function
{
int buffer = 0; //let us define a buffer to allocate memory
//char *string=NULL;

printf ("\nEnter the buffer for the string: ");
scanf("%d", &buffer);
getchar();
char *string=malloc ((buffer)*sizeof(char));

printf ("\nEnter the string: ");
if (fgets(string, buffer, stdin)) // get string from keyboard to buffer
        {
        size_t length = strlen(string); // Use string here
        if (length > 0 && string[length - 1] == '\n')
        {
            string[length - 1] = '\0'; // Modify string, not buffer
        }
    else
        {
            printf("Buffer limit.\n");
        }

        printf("You entered: %s and the buffer is %d\n", string, buffer); // Use string here
    }

    free(string); // Free the allocated memory


return 0;
}
