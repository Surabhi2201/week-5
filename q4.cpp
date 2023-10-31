#include<stdio.h>
int main()
{
 int n;
 printf("Enter Size:");
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 for(int i=0;i<n;i++)
 {
 	if(i%2==0)
 	{
 	int temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;	
	}
 }
 for(int i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
 return(0);
}
