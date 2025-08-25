#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a value");
    scanf("%d",&n); i=0;
    do
    {
        ++i;
        printf("%d\n",i);
    }while(i<n);
}
