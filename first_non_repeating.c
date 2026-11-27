#include <stdio.h>

void main()
{
    char str[200];
    int count[256] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
        count[(unsigned char)str[i]]++;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n' &&
           count[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character: %c",
                   str[i]);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("No non-repeating character found");
}
