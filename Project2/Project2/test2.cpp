
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是:%d\n", num2);
//	return 0;
//}

//{
//	int b = ~0;//~：按二进制的取反：0取1，1取0
//	printf("%d\n", b);
//	return 0;
//}

//{
//	int a = 0;
//	int b = a--;
//	printf("a=%d\n b=%d\n", a, b);
//	return 0;
//}

//{
//	int a = (int)3.14;
//	return 0;
//}

//{
//	//逻辑与：&&
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("c=%d\n", c);
//	return 0;
//}

//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("最大值为：%d\n", max);
//	return 0;
//}
//{
//	typedef unsigned int u_int;//由于前面系统的名字过长，所以在这里进行重命名，
//	//后续可以使用重新定义的名字来直接代替前面的字符。
//	return 0;
//}

//int main()
//{
//	void test()
//	{
//
//	}
//	return 0;
//}

//函数的定义方式
#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//宏的定义方式
//#define MAX(X,Y) (X>Y?X:Y)//用后面括号内的东西替换前面括号内的东西
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//即max = (x>b? a:b)
//	printf("max=%d\n", max);
//	return 0;
//}
//
//int max(int x, int y)
//{
//	return 0;
//}
#include<string.h>
//指针
//int main()
//{
//	int a = 10;
//	&a;//取出a的地址
//	int* p = &a;//p为指针变量，p的类型为int*,p中存储的是a的地址
//	printf("a的地址=%p\n", &a);//  此时的%p\n代表输出地址
//	printf("输出指针变量p=%p\n", p);
//	*p = 20;//*-代表解引用操作符,目的是为了将*p所存储的东西a进行其它的赋值
//	printf("a=%d\n", a);
//	return 0;
//}

//结构体
struct Book//创建一个结构体类型
{
	char name[14];//一个变量
	short price;//另一个，价格变量
};//一定不能少这里的;，此处用于结束结构体的创建

int main()
{
	struct Book b1 = { "程序设计",55 };//利用上面创建的结构体来构建结构体变量
	struct Book* bp = &b1;//指针变量
	printf("书名：《%s》\n", b1.name);//调用b1中的name变量
	printf("价格：%d元\n", b1.price);//调用b1中的pirce变量
	//利用指针来打印书名和价格
	printf("指针书名：《%s》\n", (*bp).name);
	printf("指针书的价格:%d元\n", (*bp).price);
	b1.price = 15;
	strcpy_s(b1.name, "C++");// strcpy是一个库函数, 对应字符串book name我们无法直接修改，而需要通过strcpy来间接修改
	printf("修改后的书名：《%s/n》", b1.name);
	printf("修改后的价格:%d元\n", b1.price);
	return 0;
}

