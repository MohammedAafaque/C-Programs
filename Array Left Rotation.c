#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL,*last=NULL;

int rotLeft(int a_count, int* a, int d) {
    int j=0,i,x;
    while(j<d)
    {
		x = a[0];
		for(i=0;i<a_count-1;i++)
		{
			a[i] = a[i+1];
		}
		a[a_count-1] = x;
		j++;
	}
	for(i=0;i<a_count;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

int main()
{
	int a_count=5,a[] = {1,2,3,4,5},d=4;
	
	rotLeft(a_count, a, d);
}
