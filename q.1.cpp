#include<stdio.h>
int main()
{
	int n;
	printf("Enter Size:\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	
	int sum=0;
	for(int i=0;i<n;i++)
	{
	 sum+=a[i];
	}
	int avg=sum/2;
	printf("The average is:%d",avg);
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
		 max=a[i];
		 break;
		}
		
	}
	printf("Max is :%d",max);
	return(0);
	
	
}
