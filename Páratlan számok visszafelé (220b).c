#include <stdio.h>

int main()
{
    int szam;
    int osszeg;
    printf("n1: ");
    scanf("%d",&szam);
    
    while(szam>0){
       if (szam%2==1){
        printf("%d\n",szam);
        szam=szam-2;
        }
        else
        szam--;
    }
    return 0;
}