//一级指针传参
/*
当你要将一个一级指针传参给函数时，用一个一级指针接受就好了
值得思考的是当一个函数的参数部分为一级指针时，函数能接受什么参数
1 void test(int* p)
当参数为一级指针时，可以接受一个变量的地址或者指针变量
int a = 10;
test（&a）
int* p = &a
test(p)

2 void test2(char* p)
类型char*也是同理
char ch = 'w'
test(&w)
char *pc = &ch
test(pc)
可以直接存变量地址，也可以存字符指针 
  */ 
  
//二级指针传参
/*
二级指针也十分简单。与一级类似
int n = 10
int *p = &a
int **pp = &p
test(pp)
test(&p)
直接传一级指针变量的地址或者传二级指针即可
接受 void test(int** ptr) 

当参数为二级指针时除了可以传上面两种还有第三种
int* arr[10]
test(arr)//指针数组也可以 
3 void test(int **p)
将类型为int*的首元素地址传参，可以用二级指针接受 
//总结 可以存放一级指针的变量地址，二级指针，以及可以存
//放一级指针数组的数组名也就是一级指针的地址，恰好可以用二级指针接受 
*/ 
