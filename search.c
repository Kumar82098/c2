#include<stdio.h>
void main()
{
	int a[100],n,i,search;
	printf("Enter no of elements:\n");
	scanf("%d",&n);
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the no. to search:\n ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
	  if(a[i]==search)
	  {
		printf("The %d element is present at position %d.",search,i+1);
	    break;
	  }
	}

	if(i!=search)
	printf("The %d element is not found. ",search);
}
	
	
