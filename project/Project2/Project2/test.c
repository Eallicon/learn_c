#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
// str������ͷ�ļ�  ֻҪʹ��srt��������Ҫ����
#include <string.h>



 




////λ�Ʋ�����
//
//int main() {
//	//<< ����
//	//>> ����
//	int a = 1;
//	int left = a << 1;
//	int right =  a>>2 ;
//	printf("%d\n", a);
//	printf("%d\n", right);
//
//	return 0;
//}


//����

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


//ѭ�����

//int main() {
//	int line = 0;
//	while (line<20000)
//	{
//		line++;
//		printf("�ô���\n %d",line);
//	}
//	if (line >= 20000)
//		printf("�ɹ�");
//	return 0;
//}


//�������
//
//int main() {
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ��\n");
//	printf("��Ҫ�ú�ѧϰ1/0\n");
//	int asd = scanf("%d", &input);
//	if(input == 1)
//		printf("Ҫ�ú�ѧϰ");
//	else
//		printf("��Ҫ���ع�");
//
//	return 0;
//}


//�ַ�������

///strlen ����ԭ��
/// ��һ���ַ��� �н�����ʶ ��ʱ�� ����ľ��ǽ�����ʶǰ�� ����
/// ��û�н�����ʶ��ʱ�� ����һֱ����ֱ�� �ҵ� ������ʶ(\0) �Ż�ȥֹͣ����
/// ���Ӧ�����ֹ��ɵģ�������

//int main() {
//	char arr1[] = "ABCd";
//	char arr2[] = { 'a','b','c','d'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2)); 
//	return 0;
//}


//// �ַ���
//int main() {
//	// �ַ����洢  
//	//�ַ����洢�� ������
//	/// ʹ�� �ַ�������洢 
//	/// ��ʽ һ  'a' 'b' 'c' '\0'  
//	/// \0 ��ʾ���� �ַ����Ľ����ַ��������� \0 === 0
//	/// \0 �������ַ������� ֻ�ǽ�����ʶ ������
//	char arr1[] = "abc"; //����
//	printf("%s\n", arr1);
//	/// ��ʽ ��
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n", arr2);
//
// 
//	return 0;
//}


// ���������

//#define MAX 10; // ��ʶ������
//// ö�ٹؼ���  enum  ö�ٳ������Ը�    ���Ǹ���ö�ٳ��������ı����ǿ��Ըĵ�
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main(){
//	10;// ���泣��
//	const int max = 1; // ������
//	// ö�ٳ���
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}