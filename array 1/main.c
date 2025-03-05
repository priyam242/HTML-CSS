#include<stdio.h>
void main()
{
    int a[1000],size,i,j;
    printf("\nenter the size of an array=");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("\nenter the elements of array in a[%d]",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++)
    {
        printf("\nthis the elements of you are entered= %d",a[i]);
    }
}
