
int all_val = 10;
static all_val_static = 20;

int add(int a , int b) {
	int x = a + b;
	return x;
}
//当一个函数添加私有以后只能在当前文件使用 不可以在其他文件使用了
static int Add_static(int a , int b) {
	int x = a + b;
	return x;
}