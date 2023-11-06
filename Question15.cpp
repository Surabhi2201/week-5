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
	 int count;
	for(int i=0;i<n;i++)
	{
		count=0;
	for(int j=0;j<n;j++)
	{
	 if(a[i]==a[j])
	 {
	 	count++;
	 }
	}
	
	if(count>(n/2))
	{
		printf("%d",a[i]);
		break;
		
	}
	
}
if(count<=n/2)
{
 printf("No Majority Element");
}
	
	return(0);
}
