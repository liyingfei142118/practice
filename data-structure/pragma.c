#include<stdio.h>
#include <sys/ioctl.h>



#pragma pack(1)
typedef struct {
        char addr_len;            //address length
	int a;
	long b;
	double c;
} st_cmd_head;
#pragma pack()

struct A
{
	short e;
	char a;
	char b;
	char c;
	int d;
}A1;

struct B
{
	long e;
	char a;
	char d;
	int b;
	char c;
}B1;

struct C
{	
	char a;
	long b;
	double e;
	char c;
}C1;
int main()
{
	printf("%d\n", sizeof(st_cmd_head));
	printf("%d\n", sizeof(A1));
	printf("%d\n", sizeof(B1));
	printf("%d\n", sizeof(C1));
}
