#define _CRT_SECURE_NO_WARNINGS // 忽略非安全保护 例如 scanf_s  
#include <stdio.h>
// str函数的头文件  只要使用srt函数就需要导入
#include <string.h>



int main() {

	int a = 10; 
	int* p = &a; //指针变量  指针变量P存放的是 变量 a 所在地址
	printf("%d\n", a);
	printf("%p\n", p);  // 输出指针变量使用 %p 去输出
	*p = 30; // * 表示的是解引用 把指针变量p 所对应地址的值替换为 30 
	printf("%d\n", a);

	return 0;
}


////声明全局函数 引入全局函数 
//extern int add(int, int);
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("sum  = %d\n", c);
//	return 0;
//}

//
//int main() {
//	extern int all_val;
//	printf("all_val = %d\n", all_val);
//	//全局静态变量  改变了全局变量的作用 让静态的全局变量只能在自己所在源文件可以使用    
//	//extern int all_val_static;
//	//printf("all_val_static = %d\n", all_val_static);
//	return 0;
//}



//void test() {
//	//静态局部变量 
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main() {
//	int i = 0;
//	
//	while (i < 5) {
//		test();
//		i++;
//	}
//
//	return 0;
//}




////位移操作符
//
//int main() {
//	//<< 左移
//	//>> 右移
//	int a = 1;
//	int left = a << 1;
//	int right =  a>>2 ;
//	printf("%d\n", a);
//	printf("%d\n", right);
//
//	return 0;
//}


//数组

//int main() {
//
//	int arr[10] = {1,2,34,5,6,7,8,9,0,1};
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	printf("%d", arr[0]);
//
//
//	return 0;
//
//}


//循环语句

//int main() {
//	int line = 0;
//	while (line<20000)
//	{
//		line++;
//		printf("敲代码\n %d",line);
//	}
//	if (line >= 20000)
//		printf("成功");
//	return 0;
//}


//条件语句
//
//int main() {
//	int input = 0;
//	printf("你要好好学习吗？\n");
//	printf("你要好好学习1/0\n");
//	int asd = scanf("%d", &input);
//	if(input == 1)
//		printf("要好好学习");
//	else
//		printf("我要卖地瓜");
//
//	return 0;
//}


//字符串长度

///strlen 工作原理
/// 当一个字符串 有结束标识 的时候 计算的就是结束标识前的 长度
/// 当没有结束标识的时候 他会一直计算直到 找到 结束标识(\0) 才会去停止计算
/// 这个应该是又规律的！！！！

//int main() {
//	char arr1[] = "ABCd";
//	char arr2[] = { 'a','b','c','d'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2)); 
//	return 0;
//}


//// 字符串
//int main() {
//	// 字符串存储  
//	//字符串存储到 数组中
//	/// 使用 字符串数组存储 
//	/// 方式 一  'a' 'b' 'c' '\0'  
//	/// \0 表示的是 字符串的结束字符！！！！ \0 === 0
//	/// \0 不计算字符串长度 只是结束标识 ！！！
//	char arr1[] = "abc"; //数组
//	printf("%s\n", arr1);
//	/// 方式 二
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n", arr2);
//
// 
//	return 0;
//}


// 常量与变量

//#define MAX 10; // 标识符常量
//// 枚举关键字  enum  枚举常量可以改    但是根据枚举常量创建的变量是可以改的
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main(){
//	10;// 字面常量
//	const int max = 1; // 常变量
//	// 枚举常量
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}