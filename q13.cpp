#include<stdio.h>
int main()
{
	int n;
	printf("Enter Size:");
	scanf("%d",&n);
	int reqsum;
	printf("Enter the sum:");
	scanf("%d",&reqsum);
	int a[n];
	for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	for(int i=0;i<n;i++)
	{
	 for(int j=i;j<n;j++)
	 {
	 if((a[i]+a[j])==reqsum)
	 {
	 	printf("%d,%d ",a[i],a[j]);
	 }
	 }
	}
	return(0);
}
