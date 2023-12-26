#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("bilgi.txt","r");
    char x;
    if(dosya!=NULL)
    {
        do
        {
            x=fgetc(dosya);
            if(x!=EOF)
            {
                putchar(x);
            }
        }
        while(x!=EOF);
    }
    else
    {
        printf("dosya bulunamadi");
    }
    fclose(dosya);
    return 0;
}
