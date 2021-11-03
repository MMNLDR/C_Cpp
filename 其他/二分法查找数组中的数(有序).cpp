#include <stdio.h>

int sz;
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);// 数组元素个数 = 数组总长度 / 单个元素长度 
	int left = 0;//左下标 
	int right = sz - 1;//右下标 
	//二分查找循环体
	while(left<=right)//防止数组中没有要查找的数而导致左右下标交错 
	{ 
	int mid = (left + right) / 2;//用新的左右下标求出新的中间值 
		if(arr[mid]>k)//当下标中间值大于要查找的数时 
		{
			right = mid - 1;//右下标向左移 
		}
		
		else if(arr[mid]<k)//当下标中间值小于要查找的数时 
		{
			left = mid + 1;//左下标向右移 
		}
		
		else if(arr[mid]==k)//当下标中间值等于要查找的数时 
		{
			printf("找到了，下标是；%d\n", mid); 
			break; 
		}
	} 
	return 0;
} 
