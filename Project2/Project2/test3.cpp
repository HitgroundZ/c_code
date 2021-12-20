#include<stdio.h>
//if语句
//int main()
//{
	//if语句的第一种表达方式：
	//if(表达式)//此处的表达式为真则输出下面的语句
		//语句；

	//if语句的第二种表达方式：
	//if(表达式)
	   //语句1；
	//else
	   //语句2；//表达式为真则执行语句1，表达式为假则执行语句2

	//if语句的第三种表达方式：多分支的情况
	//if (表达式1)
	//	语句1;
	//else if (表达式2)
	//	语句2;
	//else
	//	语句3;//表达式1成立输出语句1，表达式2成立输出语句2，两个都不成立输出语句3.
	////三个语句里面只能输出一种语句
	//return 0;
//}
//多分支的情况
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{	
//		printf("未成年\n");
//	    printf("不能谈恋爱\n");
//    }
//	else if ((18 <= age) && (age < 28))
//		printf("青年\n");
//	else
//		printf("成年");
//
//	return 0;
//}

//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	    else
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (num == 5)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int a=4 ;
//	printf("请输入一个数字：%d\n",a);
//	if (a % 2 == 0)
//		printf("这个数字是偶数\n");
//	if (a % 2 == 1)
//		printf("这个数字是奇数\n");
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ch;
//
//	printf("这是什么？ ");
//	scanf_s("%c", &ch);
//
//
//	if (ch  == 布里吉塔)
//		printf("%c 脑瘫。", ch);
//	else
//		printf("%d tiger。", ch);
//
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 5;
//	if (i % 2 == 0)
//		printf("该值%d是偶数", i);
//	else
//		printf("该值%d是奇数", i);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf_s("请输入一个数字：%d\n", &a);
//	if (a % 2 == 0)
//		printf("%d\n是偶数", a);
//	else
//		printf("%d\n是奇数", a);
//	return 0;
//}

//如果使用if语句进行多次赋值计算
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	if (day == 1)
//		printf("星期一\n");
//	else if (day == 2)
//		printf("星期二\n");
//	else if (day == 3)
//		printf("星期三\n");
//	else if (day == 4)
//		printf("星期四\n");
//
//	return 0;
//}

//switch语句
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//
//	case 3:
//
//	case 4:
//		printf("工作日");
//		break;
//	case 6:
//
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("请输入1-7内的数字");
//		break;
//
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}


//while语句
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF:End of file 文件结束标志
	{
		putchar(ch);
	}
	return 0;
}

