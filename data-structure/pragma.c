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

int main()
{
	printf("%d",sizeof(st_cmd_head));
}
