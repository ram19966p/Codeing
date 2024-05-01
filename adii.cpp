#include <stdio.h>
#include <stdlib.h>3
int main()
{
    int i , n, temp, j , s,arr[10];
    printf(" Enter  the maximum element  you want to store :");
    scanf("%d",&n);
    printf("Enter the element \n");
    for( i=0; i<n;i=i+1)
    {
        scanf("%d",&arr[i]);
    }
    for( i=0;i<n;i=i+1)
    {
        for(j=0;j<n-1;j=j+1)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        
            }
        }
    }
    printf("The arry is stored in accending order is :\n");
    for(i=0;i<n;i=i+1)
    printf("%d\t",arr[i]);
    printf("\n sum of all element is:>",s);
    return 0;
}