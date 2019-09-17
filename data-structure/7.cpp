#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count = 0;
	cout<<s<<endl;
	cout<<s.size()<<endl;
    for(int  i = s.size() - 1; i >= 0; i--)
    {
	cout<<s[i]<<endl;
        if(s[i] == ' ')
        {
            break;
        }
        else
        {
            count++;
        }
    }
        cout<<count<<endl;
}
