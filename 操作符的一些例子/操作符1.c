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
	printf("%d\n", sizeof(int[10]));//数组类型
	return 0;
}


//求一个整数存储在内存中的二进制中1的个数--补码中二进制位1的个数
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
//		if (1 == ((num >> i) & 1))//每次右移i位
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
//	//统计num的补码中有几个1   负数则出错
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
//	//不能使用中间变量来交换两数
//	int a = 3;
//	int b = 10;
//	//printf("交换前:a=%d,b=%d\n", a, b);
//
//	////加减法-若a，b很大时可能会溢出(有缺陷)
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("交换后:a=%d,b=%d\n", a, b);
//
//	//异或法(执行效率不高)
//	printf("交换前:a=%d,b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("交换后:a=%d,b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = -16;
//	int b = a >> 1;//不要移动负数位，未定义
//	printf("%d\n", b);
//	return 0;
//	//右移:
//	//算术右移:右边丢弃，左边用原值符号位填充
//	//逻辑右移:右边丢弃左边补0
//
//	//左移:左边抛弃右边补0
//
//}
