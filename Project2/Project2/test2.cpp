
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else
//		printf("�ϴ�ֵ��:%d\n", num2);
//	return 0;
//}

//{
//	int b = ~0;//~���������Ƶ�ȡ����0ȡ1��1ȡ0
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
//	//�߼��룺&&
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
//	printf("���ֵΪ��%d\n", max);
//	return 0;
//}
//{
//	typedef unsigned int u_int;//����ǰ��ϵͳ�����ֹ��������������������������
//	//��������ʹ�����¶����������ֱ�Ӵ���ǰ����ַ���
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

//�����Ķ��巽ʽ
#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//��Ķ��巽ʽ
//#define MAX(X,Y) (X>Y?X:Y)//�ú��������ڵĶ����滻ǰ�������ڵĶ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//��max = (x>b? a:b)
//	printf("max=%d\n", max);
//	return 0;
//}
//
//int max(int x, int y)
//{
//	return 0;
//}
#include<string.h>
//ָ��
//int main()
//{
//	int a = 10;
//	&a;//ȡ��a�ĵ�ַ
//	int* p = &a;//pΪָ�������p������Ϊint*,p�д洢����a�ĵ�ַ
//	printf("a�ĵ�ַ=%p\n", &a);//  ��ʱ��%p\n���������ַ
//	printf("���ָ�����p=%p\n", p);
//	*p = 20;//*-��������ò�����,Ŀ����Ϊ�˽�*p���洢�Ķ���a���������ĸ�ֵ
//	printf("a=%d\n", a);
//	return 0;
//}

//�ṹ��
struct Book//����һ���ṹ������
{
	char name[14];//һ������
	short price;//��һ�����۸����
};//һ�������������;���˴����ڽ����ṹ��Ĵ���

int main()
{
	struct Book b1 = { "�������",55 };//�������洴���Ľṹ���������ṹ�����
	struct Book* bp = &b1;//ָ�����
	printf("��������%s��\n", b1.name);//����b1�е�name����
	printf("�۸�%dԪ\n", b1.price);//����b1�е�pirce����
	//����ָ������ӡ�����ͼ۸�
	printf("ָ����������%s��\n", (*bp).name);
	printf("ָ����ļ۸�:%dԪ\n", (*bp).price);
	b1.price = 15;
	strcpy_s(b1.name, "C++");// strcpy��һ���⺯��, ��Ӧ�ַ���book name�����޷�ֱ���޸ģ�����Ҫͨ��strcpy������޸�
	printf("�޸ĺ����������%s/n��", b1.name);
	printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);
	return 0;
}

