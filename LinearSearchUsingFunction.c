#include<stdio.h>
#include <stdlib.h>
void linearfun(int a[100],int n,int key);
int main()
{
   int a[100],key,n,i,j;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   printf("\nEnter %d elements\n", n);
   for(i=0;i<n;i++)
   {
	scanf("%d",&a[i]);
   }
   printf("\nEnter the key element\n");
   scanf("%d",&key);
   linearfun(a,n,key);
return 0;
}
void linearfun(int a[100],int n,int key)
{
   int i;
   for(i=0;i<n;i++)
   {
	if(key==a[i])
	{
	printf("\nElement %d found at %d position\n",key, i+1);
   	exit(0);
   	}
   }
printf("\nElement not found\n");
}
