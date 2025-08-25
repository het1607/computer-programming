#include<stdio.h>
int main()
{
    int i=0,n,count;

    printf("first n even numbers are:\n");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i+=2;
        count++;
    }
    while(i<n);
}

