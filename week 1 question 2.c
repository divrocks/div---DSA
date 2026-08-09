#include<stdio.h>
#include<stdlib.h>
int main() {

	int a[100],n,i,c,b;
	int temp=-1,temp1=-1;
	int mindiff=100000,dist;

	printf("enter size of array\n");
	scanf("%d",&n);

	printf("enter array elements\n");
	for (i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}

	printf("array is \n");
	for (i=0; i<n; i++) {
		printf("%d ",a[i]);
	}

	printf("\nenter two numbers to find minimum difference between theie indices\n");
	scanf("%d%d",&b,&c);

	for(i=0; i<n; i++) {
		if(b==a[i]) {
			temp=i;
			if(temp!=-1 && abs(temp-temp1)<mindiff) {
				mindiff=abs(temp-temp1);
			}
		}
		if(c==a[i]) {
			temp1=i;
			if(temp1!=-1 && abs(temp-temp1)<mindiff) {
				mindiff=abs(temp-temp1);
			}
		}

	}

	if(temp==-1 || temp1==-1) {
		printf("one or both elements are absent\n");
	}
	else {
		printf("min. distance between numbers is %d\n",mindiff);
	}

	return 0;
}