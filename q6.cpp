#include<stdio.h>
int main()
{
int n;
printf("EnterSize:");
scanf("%d",&n);
int key;
int a[n];
for(int i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(int i=0;i<n-1;i++)
{
 for(int j=0;j<n-1-i;j++)
 {
   if(a[j]<a[j+1])
   {
    int t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
 }	
}
for(int i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
printf("\n");
printf("Enter key:");
scanf("%d",&key);
printf("%dth Largest Number is %d\n",key,a[key-1]);
printf("%dth Smallest Number is %d",key,a[n-key]);
return(0);
}
