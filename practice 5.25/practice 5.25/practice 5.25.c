#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void rotate(int* nums, int numsSize, int k) 
{
	for (int i = 0; i < k; i++)
	{
		int a = nums[numsSize-1];
		memmove(&nums[numsSize-1], &nums[numsSize-2], (numsSize - 1) * sizeof(int));
		nums[0] = a;
	}
}
int main()
{
	;
}
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
//{
//	int size = ASize > 5 ? ASize + 1 : 5 + 1;
//	int* ret = calloc(size, sizeof(int));
//
//	int a = size - 1;
//	int count = 0;
//	while (ASize > 0)
//	{
//		K += A[ASize - 1];
//		ret[a--] = K % 10;
//		K /= 10;
//		count++;
//	}
//	while (K > 0)
//	{
//		ret[a--] = K % 10;
//		K /= 10;
//		count++;
//	}
//	memove(ret, ret + (size - count), count * sizeof(int));
//	return ret;
//}