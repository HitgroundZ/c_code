#include<stdio.h>
//if���
//int main()
//{
	//if���ĵ�һ�ֱ�﷽ʽ��
	//if(���ʽ)//�˴��ı��ʽΪ���������������
		//��䣻

	//if���ĵڶ��ֱ�﷽ʽ��
	//if(���ʽ)
	   //���1��
	//else
	   //���2��//���ʽΪ����ִ�����1�����ʽΪ����ִ�����2

	//if���ĵ����ֱ�﷽ʽ�����֧�����
	//if (���ʽ1)
	//	���1;
	//else if (���ʽ2)
	//	���2;
	//else
	//	���3;//���ʽ1����������1�����ʽ2����������2��������������������3.
	////�����������ֻ�����һ�����
	//return 0;
//}
//���֧�����
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{	
//		printf("δ����\n");
//	    printf("����̸����\n");
//    }
//	else if ((18 <= age) && (age < 28))
//		printf("����\n");
//	else
//		printf("����");
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

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a=4 ;
//	printf("������һ�����֣�%d\n",a);
//	if (a % 2 == 0)
//		printf("���������ż��\n");
//	if (a % 2 == 1)
//		printf("�������������\n");
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ch;
//
//	printf("����ʲô�� ");
//	scanf_s("%c", &ch);
//
//
//	if (ch  == ���Ｊ��)
//		printf("%c ��̱��", ch);
//	else
//		printf("%d tiger��", ch);
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
//		printf("��ֵ%d��ż��", i);
//	else
//		printf("��ֵ%d������", i);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf_s("������һ�����֣�%d\n", &a);
//	if (a % 2 == 0)
//		printf("%d\n��ż��", a);
//	else
//		printf("%d\n������", a);
//	return 0;
//}

//���ʹ��if�����ж�θ�ֵ����
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	if (day == 1)
//		printf("����һ\n");
//	else if (day == 2)
//		printf("���ڶ�\n");
//	else if (day == 3)
//		printf("������\n");
//	else if (day == 4)
//		printf("������\n");
//
//	return 0;
//}

//switch���
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
//		printf("������");
//		break;
//	case 6:
//
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("������1-7�ڵ�����");
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


//while���
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF:End of file �ļ�������־
	{
		putchar(ch);
	}
	return 0;
}

