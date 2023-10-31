#include<stdio.h>
int main()
{
 int n;
 printf("Enter The Size:");
 scanf("%d",&n);
 printf("\n");
 int a[n];
 for(int i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 int key;
 printf("Enter Key:");
 scanf("%d",&key);
 printf("\n");
 int count=0;
 for(int i=0;i<n;i++)
 {
 	if(a[i]==key)
 	{
 	count+=1;	
	 }
	
 }
 
 if(count==0)
 {
 	printf("Element does not exist");
 }
 else
 {
 	printf("Number %d is present %d times",key,count);
 }
 return(0);
}
