#include<stdio.h>
int MaxSum(int array[],int len)
{
    if(array ==NULL || len<=0)
    {
        return;
    }
    int curSum=0,maxSum=0;
    int i=0;
    for(i=0;i<len;i++)
    {
        curSum +=array[i];
        if(curSum<0)
        {
            curSum=0;
        }
        if(curSum>maxSum)
        {
            maxSum=curSum;
        }
    }
    if(maxSum==0)
    {
        maxSum=array[0];
        for(i=1;i<len;i++)
        {
            if(array[i]>maxSum)
            {
                maxSum=array[i];
            }
        }
    }
    return maxSum;
}
int main()
{
    int N;
    printf("请输入个数\n");
    scanf("%d",&N);
    int array[N],maxSum;
    printf("请输入数组中的数\n");
    for(int i=0;i<N;i++)
    scanf("%d",&array[i]);
    maxSum=MaxSum(array,N);
	printf("maxSum:%d",maxSum);
}
