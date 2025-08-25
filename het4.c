#include<stdio.h>
int main()
{
    int i=1,n,count;

    printf("first n odd numbers are:\n");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i+=2;
        count++;
    }
    while(i<n);
}
