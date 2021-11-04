#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for(i=0; i<sz-1; i++)
	{
		//每一趟冒泡排序
		int flag = 1;//假设这一趟需要排序的数据已经有序了 
		int j = 0;
		for(j=0; arr[j]>arr[j+1]; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 0;//本趟排序的数组其实不完全有序 
			} 
		} 
		if(flag == 1)
		{
			break;
		}
	}
}
	
//实现冒泡排序函数，将一个整形数组排序 
int main()
{
	int i = 0; 
	//对arr进行排序，排成升序
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	//arr是数组，我们对数组arr进行传参，实际传递的是数组首元素的地址 
	bubble_sort(arr, sz);//冒泡排序函数、
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	} 
	
	return 0;
}
