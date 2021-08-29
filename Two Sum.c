
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int *twosum(int* nums, int numsSize, int target)
{
	int i,j;
   
    int *T = (int *)malloc(2*sizeof(int));

    for(i=0;i<numsSize;i++)
    {
        for(j=i;j<numsSize;j++)
        {
			if(nums[i]+nums[j]==target)
			{
				T[0] = i;
				T[1] = j;
			}
		}
    }
    return T;
}


int main()
{
	int i;
	int nums[] = {2,7,11,15};
	int target = 9;
	int numsSize = 3;
	int *T = twosum(nums, numsSize, target);
	for(i=0;i<2;i++)
	{
		printf("%d",T[i]);
	}
	return 0;
}
