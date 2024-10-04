/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];  // To store the input string
    char rev[100];  // To store the reversed string
    char *sentence = str;
    char *revs = rev;

    // Input a string
    printf("Input a string: ");
    scanf("%s", str);  // Only reads up to the first space

    int length = strlen(sentence);  // Get the length of the string
    sentence += length - 1;  // Set the pointer to the last character of the input string

    // Reverse the string
    for (int i = 0; i < length; i++)
    {
        *revs = *sentence;  // Copy characters from the end of str to rev
        sentence--;         // Move sentence pointer backwards
        revs++;             // Move revs pointer forwards
    }

    *revs = '\0';  // Null-terminate the reversed string

    // Print the reversed string
    printf("Reverse of the string is: %s\n", rev);
    return 0;
}
*/
