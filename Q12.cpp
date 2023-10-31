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
		int count=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				
				count++;
			}
		 	
			
			
		}
		if(count==0)
		 	{
		 	 printf("%d is first non repeating element",a[i]);
		 	 return(0);
	        }
    } 
	return(0);
}

