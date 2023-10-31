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
	
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
		 max=a[i];
		 
		}
		
	}
	printf("Max is :%d\n",max);
	int add=0;
	for(int i=0;i<=max;i++)
	{
	 add+=i;
	}
	int asum=0;
	for(int i=0;i<n;i++)
	{
	 asum+=a[i];
	}
	printf("%d is the missing number",add-asum);
	return(0);
 
}
