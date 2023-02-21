#include<stdio.h>
void toggle_case(char* input1)
{
    while(*input1)
    {
        if(*input1>='a' && *input1<='z')
        {
            *input1=*input1-32;
        }
        else if(*input1>='A' && *input1<='Z')
        {
            *input1=*input1+32;
        }
        printf(*input);
        input++;
    }
}
int main()
{
    char* arr=(char*) malloc(10 * sizeof(char));
    for(int i=0;i<10;i++)
    {
        arr[0]='a'+i;
    }
    toggle_case(arr);
    return 0;
}