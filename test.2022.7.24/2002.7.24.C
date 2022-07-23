#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//unsigned int  无符号整形
//void print(unsigned int n)
//{
//	if (n > 9)		//	重点1
//	{
//		print(n / 10);		// 重点2
//	}
//	printf("%d ",n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归-函数自己调用自己
//	print(num);		//print函数可以打印参数部分的每一位
//
//	return 0;
//}

// 递归的两个必要条件
// 存在限制条件,当满足这个限制条件的时候,递归便不再继续.
// 每次递归调用之后越来越接近这个限制条件.

//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//
//}											err		挂
//
//int main()
//{
//
//	test(1);
//	return 0;
//}


#include<string.h>
//int main()
//{
//	char arr[] = "abc";
//	printf("%d", strlen(arr));
//	return 0;
//}



//			剖析strlen函数内部的过程

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
////								递归不建议使用++或者--等不管前置和后置
//int main()
//{
//	char arr[] = "abc";
//
//	printf("%d",my_strlen(arr));
//
//	return 0;
//}




//	n的阶乘	n!=1*2*3*4*n...
//		初始化;	条件判断
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d ", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//																err
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}