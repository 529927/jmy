#include<stdio.h>

int MaxSubArray(int* A, int n)
{
int maxSum = A[0];
int currSum = 0;
 for (int i = 0; i < n; i++)
{
for (int j = i; j < n; j++)
{
for (int k = i; k <= j; k++)
{
currSum += A[k];
 }
 if (currSum > maxSum)
 maxSum = currSum;

currSum = 0; 
}
}
return maxSum;
}

int main()
{
int a[20],n;
 scanf("%d",&n);
 for(int i = 0; i < n; i++)
{
 scanf("%d",&a[i]);
}
printf("最大字串和为:%d",MaxSubArray(a,n));
return 0;
}