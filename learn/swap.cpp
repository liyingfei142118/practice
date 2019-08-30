#include <iostream>
#include <malloc.h>
using namespace std;

void swap(int *p1, int *p2)
{
	//int *p = NULL;//p是一个“野”指针，有可能指向系统区，导致程序运行的崩溃
	int p;	
//	p = (int *)malloc(sizeof(int));
	*p = *p2;
	*p2 = *p1;
	*p1 = *p;
}
int main()
{
	int *p1,*p2;
	int a = 1;
	int b = 2;
	p1 = &a;
	p2 = &b;
	swap(p1, p2);
	cout<<*p1<<" "<<*p2<<endl;
	return 0;
}
