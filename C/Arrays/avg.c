#include<stdio.h>
int main()
{
    int arr[10],n,i,sum=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements %d",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("the sum of the array is %d",sum);
    printf("the average of the array is %0.2f",(float)sum/n);
    return 0;
}
    


