#include <stdio.h>
int function(char s[], char p[])
{
     int i = 0, j = 0;
    while (s[i] != '\0')
    {
        if (s[i] == p[j])
        {
            j++;
            if (p[j] == '\0')
            {
                printf("%d\n", i);
                break;
            }
        }
        else
        {
            i++;
            j = 0;
        }
    }
}

void main()
{
    char source[100], substring[100];
    scanf("%s", &source);
    scanf("%s", &substring); 
    function(source,substring);
    return;
}