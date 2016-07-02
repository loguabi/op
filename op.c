#include<stdio.h>
int main()
{
int arr[]={-3,-3,-5,-5,-7,-4,-9,-6,-4};
int i,j,max;
int sum=0;
for(i=0;i<9;i++);
{
sum=sum+arr[i];
if(sum<0)
sum=0;
else if(sum>max)
{
max=sum;
}
}
printf("%d",max);

return 0;
}
