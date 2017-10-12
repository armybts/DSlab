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
int a[max],i,n,e;
printf("\nEnter the size of array");
scanf("%d",&n);
printf("\nEnter the elements of array");
for(i=0;i<n;i++)
{
printf("%d",&a[i]);
}
printf("Enter the element to be searched");
scanf("%d",&e);
if(binary_search(a,e,n)!=-1)
printf("element cfound at %d\n",binary_search(ane));
else 
printf("element not found");
return 0;
}	




