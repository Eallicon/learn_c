//  让编译器忽略 标准C语言提供的方法 进而达到程序正常运行
// 永远放在 源文件的第一行
#define _CRT_SECURE_NO_WARNINGS
// # 指令形式  include 是包含  stdio.h这个文件 
//  stdio.h  标准输入输出的文件
#include <stdio.h>

int mun2 = 20;

int main() { // 有且只有一个
	// 在C语言中 变量需要在代码块顶部输出 
	int mun1 = 0;
	int num2 = 0;
	scanf("%d%d", &mun1,&num2);  // 需要使用取地址符  & 取地址符  也就是需要把 输入的值 放到内存中 的屋子里面去
	int sum = num2 + mun1;
	printf("mun1 = %d \n", mun1);
	printf("num2 = %d \n", num2);
	printf("sum = %d \n", sum);






	// int num1 = 10; // 局部变量
	// int num2 = 30; 
	// printf("%d \n", num2);
	// printf("%d\n", sizeof(char));  // 1
	// printf("%d\n", sizeof(int));   // 4
	// printf("%d\n", sizeof(short)); // 2
	// printf("%d\n", sizeof(long));  // 8 或者 4
	// printf("%d\n", sizeof(long long));  // 8 
	// printf("%d\n", sizeof(float)); // 4
	// printf("%d\n", sizeof(double)); // 8

	return 0;
}