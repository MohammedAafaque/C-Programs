// Take an array as an input and display the numbers in decreasing order
//of their frequency. Ex: Input - [1,3,4,3,4,4] Output - [4,3,1]

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	int data;
	int index;
}C[100];
int count=0;

int findmax(int n,int* A)
{
	int max = 0;
	for(int i=0;i<n;i++)
	{
		if(A[i]>max)
		{
			max = A[i];
		}
	}
	return max;
}

void create(int i,int x)
{
	static int j=0;
	C[j].index = i;
	C[j].data = x;
	j++;
}

int check(int n,int* A)
{
	int max,*B,i;
	max = findmax(n,A);
	B = (int *)malloc(max*sizeof(int));
	for(i=0;i<n;i++)
	{
		B[i]=0;
	}
	for(i=0;i<n;i++)
	{
		B[A[i]]++;
	}
	for(i=0;i<=max;i++)
	{
		if(B[i]!=0)
		{	count++;
			create(i,B[i]);
		}
	}
	return count;
	
}

void sort()
{
	int i,j,t1,t2;
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			if(C[j].data<C[j+1].data)
			{
				t1 = C[j].data;
				C[j].data = C[j+1].data;
				C[j+1].data = t1;
				t2 = C[j].index;
				C[j].index= C[j+1].index;
				C[j+1].index = t2;
			}
		}
	}
}

void display()
{	int i;
	for(i=0;i<count;i++)
	{
		printf("%d\t",C[i].index);
	}
}

	
int main()
{	
	int n,A[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	check(n,A);
	sort();
	display();
}
