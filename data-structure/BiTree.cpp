#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <cstdlib>
#include <iostream>
using namespace std;

#define MAXTSIXZE 1000

typedef struct BiTNode
{
	char data;
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

void CreateBiTree(BiTree T)
{
	char ch;
	cin>>ch;

	if(ch == '#')
	{
		T = NULL;
	}
	else
	{
		T = (BiTNode *)malloc(sizeof(BiTNode));
		T->data = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}

void travel1(BiTree T)
{
	if(T)
	{
		cout<<T->data<<" ";
		travel1(T->lchild);
		travel1(T->rchild);
	}
}

void travel2(BiTree T)
{
	if(T)
	{
		travel2(T->lchild);
		cout<<T->data<<" ";
		travel2(T->rchild);
	}
}

void travel3(BiTree T)
{
	if(T)
	{
		travel3(T->lchild);
		travel3(T->rchild);
		cout<<T->data<<" ";
	}
}

int count(BiTree T)
{
	if(T == NULL) return 0;

	int cnt = 0;

	if((!T->lchild) && (!T->rchild))
	{
		cnt++;
	}

	int leftcnt = count(T->lchild);
	int rightcnt = count(T->rchild);

	cnt += (leftcnt + rightcnt);

	return cnt;
}

int Depth(BiTree T)
{
	if(T == NULL)
	{
		return 0;
	}

	else
	{
		int m = Depth(T->lchild);
		int n = Depth(T->rchild);

		return m > n ? (m + 1) : (n + 1);
	}
}

void exchange(BiTree T, BiTree NewT)
{
	if(T == NULL) return ;

	else
	{
		NewT = (BiTNode *)malloc(sizeof(BiTNode));
		exchange(T->lchild, NewT->rchild);
		exchange(T->rchild, NewT->lchild);
	}
}

int main()
{
    puts("**************************");
    puts("1. 建立二叉树"); 
    puts("2. 先序遍历二叉树");
    puts("3. 中序遍历二叉树");
    puts("4. 后序遍历二叉树");
    puts("5. 计算叶子结点个数"); 
    puts("6. 计算二叉树的深度"); 
    puts("7. 交换二叉树的左右子树"); 
    puts("0. 退出");
    puts("**************************");
        BiTree Tree,NewTree;
    int choose;
    while(~scanf("%d",&choose),choose)
    {
        switch(choose)
        {
            case 1:
                puts("温馨提醒：输入请以 '#' 为左/右子树空的标志!"); 
                CreateBiTree(Tree);
                break;
            case 2:
                printf("先序遍历结果为："); 
                travel1(Tree);
                puts("");
                break;
            case 3:
                printf("中序遍历结果为："); 
                travel2(Tree);
                puts("");
                break;
            case 4:
                printf("后序遍历结果为："); 
                travel3(Tree);
                puts("");
                break;
            case 5:
                printf("叶子结点个数为：%d\n",count(Tree));
                break;
            case 6:
                printf("二叉树的深度为：%d\n",Depth(Tree));
                break;
            case 7:
                exchange(Tree,NewTree);
                Tree=NewTree;
                puts("交换成功！\n"); 
                break;
        }
    }
    system("pause");
    return 0;
}
