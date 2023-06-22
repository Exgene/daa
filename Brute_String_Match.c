#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100], pattern[10];
    printf("Enter the String: ");
    scanf("%s", string);
    printf("Enter the Pattern: ");
    scanf("%s", pattern);

    int i;
    for (i = 0; i <= strlen(string) - strlen(pattern); i++) // Adjusted loop condition
    {
        int j;
        for (j = 0; j < strlen(pattern); j++) // Changed to a for loop
        {
            if (pattern[j] != string[i + j])
                break;
        }
        if (j == strlen(pattern)) // Match found
        {
            printf("Pattern found at location: %d\n", i);
            exit(0);
        }
    }
    printf("Pattern not found.\n");
    return 0;
}
