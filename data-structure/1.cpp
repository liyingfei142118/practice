/*
[编程题]子串模糊匹配
时间限制：1秒

空间限制：32768K

从字符串string开始完整匹配子串sub，返回匹配到的字符个数。

sub中如果出现'?'表示可以匹配一到三个除'\0'以外的任意字符。
如果sub还有找不到匹配的字符，则说明不能完整匹配。

如果能完整匹配，返回匹配到的字符个数，如果有多种匹配方式，返回匹配字符数最少的那个，如果不能完整匹配，返回-1
输入描述:
第一行输入字符串string，长度小于10000

第二行输入子串sub，长度小于100

输出描述:
从string开头位置完整匹配sub，匹配到的字符个数。
*/
#include <iostream>
using namespace std;

#define Max 10000
#define Min 100

int key = -1;

int main()
{
	char str[Max],sub[Min];
	cin>>str;
	cin>>sub;
	cout<<str<<endl;
	cout<<sub<<endl;

	

}