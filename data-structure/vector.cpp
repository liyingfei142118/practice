#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> obj;
	for(int i = 0; i < 10; i++)
	{
		obj.push_back(i);
		cout<<obj[i]<<" ";
	}
	for(int i = 0; i < 5; i++)
	{
		obj.pop_back();
	}
	cout<<"\n"<<endl;

	for(int i = 0; i < obj.size(); i++)
		cout<<obj[i] <<" ";
	cout<<endl;
	
	cout<<"*****************************"<<endl;
	vector<vector<int> > A;
 
	vector<int> B;
	B.push_back(0);
	B.push_back(1);
	B.push_back(2);
 
	A.push_back(B);
 
	B.clear();
	B.push_back(3);
	B.push_back(4);
 
	A.push_back(B);
	//vector<vector<int> >A中的vector元素的个数
	int len = A.size();
	cout<<len<<endl;

	//vector<vector<int> >A中第i个vector元素的长度
	len = A[0].size();
	cout<<len<<endl;
	return 0;
}
