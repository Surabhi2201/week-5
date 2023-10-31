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
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d",a[i]);
			}
			printf("\n");
		}
	}
	return(0);
}
