#include<stdio.h>
#include<conio.h>
int s,su;
void function(char source[],char substring[])
{
    int i=0,j=0,e=0;
    while(source[i]!='\0')
    {
        if(source[i]==substring[j])
        {
            if(j==(su-2))
            {
                e=i;
                j=0;
            }
            else
            j++;
        }
        
        i++;
    }
    printf("%d is starting index and %d is ending index of rightmost substring.",(e-(su-2)),e);

    return;

}

int main()
{
    char ss[]="is this is it";
    char suu[]="is";

    s=sizeof(ss);
    su=sizeof(suu);
    
    function(ss,suu);
    return 0;
}