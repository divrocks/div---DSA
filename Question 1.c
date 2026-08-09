/*Given an array of integers, write an algoritm and a program to left rotate array by specific number of elements*/

#include <stdio.h>

int main()
{
	int a[100],i,j,n,temp,rotate;

	printf("enter size of array : \n");
	scanf("%d",&n);
    

	printf("enter elements of array : \n");
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}

	printf("elements of array : \n");
	for(i=0; i<n; i++) {
		printf("%d ",a[i]);
	}

	printf("\nenter no of rotations : \n");
	scanf("%d",&rotate);

	for(j=0; j<rotate; j++) {
		temp=a[0];
		for(i=0; i<n-1; i++) {
			a[i]=a[i+1];
		}
		a[n-1]=temp;
	}

	printf("rotated elements of array are : \n");
	for(i=0; i<n; i++) {
		printf("%d ",a[i]);
	}

	return 0;
}
