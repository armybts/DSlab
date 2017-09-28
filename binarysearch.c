#include<stdio.h>
#define max 100
int binary_search(int a[],int n,int x)
{
int mid=n/2;
int high=n-1,low=0;
while(high>=low){
if(a[mid]==x)
return 1;
if(x>a[mid])
low=mid+1;
else
high=mid-1;
mid=(low+high)/2;
}
return -1;
}

int main()
{
int a[max],i;
printf("\nEnter the elements of array");
scanf("%d",&n);
printf("\nEnter the elements of array");
for(i=0;i<max;i++)
{
printf("%d",&a[i]);
}
printf("Enter the element to be searched");
scanf("%d",&x);
index=binary_search(a,n,x);
if(index==-1)
{
printf("ELEMENT %d NOT FOUND",&x);
}
else
return 0;
}


