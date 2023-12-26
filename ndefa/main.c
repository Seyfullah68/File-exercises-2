#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya =fopen("bilgi.txt","w");
    char cumle[10];
    int n;
    if(dosya!=NULL)
    {
        printf("cumleyi giriniz\n");
        gets(cumle);
        printf("kac defa yazilacak\n");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            fprintf(dosya,"%d : %s\n",i+1,cumle);
        }
        printf("basari ile yazildi");
        fclose(dosya);
    }
    else
    {
        printf("dosya bulunamadi");
    }
    return 0;
}
