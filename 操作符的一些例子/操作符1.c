#include<stdio.h>

int main()
{
	int a = 10;
	char c = 'cx';
	char* p = &c;
	int arr[10] = { 0 };

	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(char*));

	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int[10]));//��������
	return 0;
}


//��һ�������洢���ڴ��еĶ�������1�ĸ���--�����ж�����λ1�ĸ���
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//
//		if (1 == ((num >> i) & 1))//ÿ������iλ
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	//ͳ��num�Ĳ������м���1   ���������
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("count=%d\n", num);
//	return 0;
//}


//int main()
//{
//	//����ʹ���м��������������
//	int a = 3;
//	int b = 10;
//	//printf("����ǰ:a=%d,b=%d\n", a, b);
//
//	////�Ӽ���-��a��b�ܴ�ʱ���ܻ����(��ȱ��)
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("������:a=%d,b=%d\n", a, b);
//
//	//���(ִ��Ч�ʲ���)
//	printf("����ǰ:a=%d,b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������:a=%d,b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = -16;
//	int b = a >> 1;//��Ҫ�ƶ�����λ��δ����
//	printf("%d\n", b);
//	return 0;
//	//����:
//	//��������:�ұ߶����������ԭֵ����λ���
//	//�߼�����:�ұ߶�����߲�0
//
//	//����:��������ұ߲�0
//
//}
