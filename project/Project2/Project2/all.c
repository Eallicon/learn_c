
int all_val = 10;
static all_val_static = 20;

int add(int a , int b) {
	int x = a + b;
	return x;
}
//��һ���������˽���Ժ�ֻ���ڵ�ǰ�ļ�ʹ�� �������������ļ�ʹ����
static int Add_static(int a , int b) {
	int x = a + b;
	return x;
}