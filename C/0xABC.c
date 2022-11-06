#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0; i < 26; i++)
    {
        for(int a=0; a < 26; a++)
        { 
            for(int x=0; x<26; x++)
            {
                fprintf(stdout,"%s%c%c%c\n","0x",i+97,x+97,a+97);
            }
        }
    }

    return 0;
}