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
	
	int sum=0;
	for(int i=0;i<n;i++)
	{
	 sum+=a[i];
	}
	float avg=sum/n;
	printf("The average is:%f\n",avg);
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
		 max=a[i];
		 
		}
		
	}
	printf("Max is :%d\n",max);
	
	int min=max;
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Min is:%d",min);
	return(0);
	
}
