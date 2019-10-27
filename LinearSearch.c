#include <stdio.h>
#include<stdlib.h>
int main()
{
   int a[100],key,n,i,j;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   printf("Enter %d elements\n", n);
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
   printf("Enter the key element\n");
   scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	if(key==a[i])
	{
	   printf("Element %d found at %d position\n",key, i+1);
	   exit(0);
	}
	}
   printf("Element not found\n");
}
