#include<stdio.h>
void main()
{
    int bin,dec=0,weight=1,rem;
    printf("enter the binary number\n");
    scanf("%d",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        dec=dec+rem * weight;
        bin=bin/10;
        weight=weight*2;
        }
        printf("%d\n",dec);
}