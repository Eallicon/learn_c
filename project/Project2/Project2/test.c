#define _CRT_SECURE_NOWARNINGS 
#include <stdio.h>
// str������ͷ�ļ�  ֻҪʹ��srt��������Ҫ����
#include <string.h>




//�ַ�������

///strlen ����ԭ��
/// ��һ���ַ��� �н�����ʶ ��ʱ�� ����ľ��ǽ�����ʶǰ�� ����
/// ��û�н�����ʶ��ʱ�� ����һֱ����ֱ�� �ҵ� ������ʶ(\0) �Ż�ȥֹͣ����
/// ���Ӧ�����ֹ��ɵģ�������

int main() {
	char arr1[] = "ABCd";
	char arr2[] = { 'a','b','c','d'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}


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