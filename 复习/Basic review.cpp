#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<assert.h>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>

using namespace std;

// 4.替换空格
/*
void Replace(char* str,int length)
{
	
	int count = 0;
	int l = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			count++;
		}
		i++;
	}
	l = count * 2 + i;
	if (l > length)
	{
		return;
	}
	for (int j = i; j >=0&&j<l;j--)
	{
		if (str[j] == ' ')
		{
			str[l--] = '0';
			str[l--] = '2';
			str[l--] = '%';
		}
		else
		{
			str[l--] = str[j];
		}
	}
}
*/

//  9.斐波那契数列
/*
int fibonacci(int n)
{
	if (n < 1)
	{
		return -1;
	}
	if (n == 1 )
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	int f1 = 0;
	int f2 = 1;
	int fn = 0;
	for (int i = 3; i <= n; i++)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	return fn;
}
*/

// 14.调整数组顺序使奇数位于偶数前面
/*
void Adjustment(int * arr,int len)    
{
	int left = 0;
	int right = len-1;

	for (int i = 0; i < len && left<=right; i++)
	{
		if ((arr[i] % 2) != 0)
		{
			swap(arr[left] ,arr[i]);
			left++;
		}
		else
		{
			swap(arr[right] , arr[i]);
			right--;
			i--;
		}
	}
}
*/

//  11.数值的整数次方
/*
double power(double m, int n)
{
	double result;
	if (m > -0.0000001 && m < 0.0000001)
	{
		return 0.0;
	}
	if (n == 0)
	{
		return 1.0;
	}
	if (n == 1)
	{
		return m;
	}
	if (n == -1)
	{
		return 1.0/m;
	}
	
	result = power(m, n / 2);
	result *= result;

	if (n % 2 != 0)
	{
		if (n > 0)
		{
			result *= m;
		}
		else
		{
			result = result*(1.0 / m);
		}	
	}

	return result;
}


double power1(double m, int n)
{
	double result;
	int a = abs(n);
	if (m > -0.0000001 && m < 0.0000001)
	{
		return 0.0;
	}
	if (a == 0)
	{
		return 1.0;
	}
	if (a == 1)
	{
		return m;
	}

	result = power(m, a / 2);
	result *= result;

	if (a % 2 != 0)
	{
		result *= m;
	}

	if (n < 0)
	{
		result = 1.0 / result;
	}

	return result;
}
*/

// 10.二进制1的个数
/*
int BitCount(unsigned int n)
{
	unsigned int count = 0; // 计数器
	while (n >0)
	{
		if ((n & 1) == 1) // 当前位是1
		{
			count++;// 计数器加1
		}
		n >>= 1; // 移位
	}
	return count;
}
*/

// 13.在O(1)时间删除链表的结点
/*
typedef int ElementType;

class Node
{
public:
	ElementType data;
	Node * next;
};

class Linklist
{
public:
	Linklist()
		:head(NULL), count(0)
	{
		head = new Node;
		head->next = NULL;
	}
	~Linklist()
	{
		Node * s ;
		Node * p = head->next;
		while (p != NULL)
		{
			s = p->next;
			delete p;
			p = s;
		}
		//delete s;
		//s = NULL;
		
		delete head;
		p = NULL;
		count = 0;
	}
	
	void select_sort();
	
	void bubble_sort();
	
	void Insert_head(ElementType data)
	{
		Node *s = new Node;
		s->data = data;
		s->next = head->next;
		head->next = s;
		
		count++;
	}
	
	void insert_tail(ElementType data);
	
	int find(ElementType data)
	{

	}
	//删除结点 
	void Delete_node(int pos)
	{
		if (pos > count)
		{
			return ;
		}
		else
		{
			Node * s;
			s = head;
			while (pos>0)
			{
				s = s->next;
				pos--;
			}
			Node * p;
			p = s->next;
		
			s->next = s->next->next;
			delete p;
			p = NULL;
			 count--;
		}
	}
	//O(1)时间删除结点
	void Delete_node1(Node * p)
	{
		if (p->next == NULL)
		{
			Node*q = head;
			while (q->next != p)
			{
				q = q->next;
			}
			q->next = NULL;
			count--;
			delete q; 
		}

		Node* q = p->next;
		p->data = q->data;
		p->next = q->next;
		count--;
		delete q;

	}
	
	//逆置 
	void reverse();
 
	void Show()
	{
		Node*s = head->next;
		while (s != NULL)
		{
			cout << s->data<<" ";
			s = s->next;
		}
		cout << endl;
	}

	

	//打印提示信息 
	void printhelp();
	//返回长度
	int size();
private:
	
	Node * head;
	int count;
	friend int main();
};

// 5.从尾到头打印链表
vector<int> Rshow(Node* head)  //非递归实现
{
	vector<int>arr;
	stack<Node*>sta;
	Node* p = head->next;

	while (p != NULL) 
	{
		sta.push(p);
		p = p->next;
	}

	while (!sta.empty())
	{
		p = sta.top();
		sta.pop();
		arr.push_back(p->data);
	}

	return arr;
}


void Rshow1(Node * head)  //递归实现(还有一点小问题)
{
	
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			Rshow1(head->next); 
		}
	
		cout<<head->data<<" ";
	}
	
}
*/
// 7.
//  两个队列实现一个栈
/* 
template<typename T>
class MyStack
{
public:
	void clear()
	{
		if (queue1.size() > 0)
		{
			queue1.swap(queue<T>());
		}

		if (queue2.size() > 0)
		{
			queue2.swap(queue<T>());
		}
	}
	T top()
	{
		while (queue1.size() > 1)
		{
			T front = queue1.front();
			queue1.pop();
			queue2.push(front);
		}
		if (queue1.size() == 1)
		{
			T front = queue1.front();

			return front;
		}
		while (queue2.size() > 1)
		{
			T front = queue2.front();
			queue2.pop();
			queue1.push(front);
		}
		if (queue2.size() == 1)
		{
			T front = queue2.front();

			return front;
		}

	}
	void push(T data)
	{
		queue1.push(data);
	}
	T pop()
	{
		while (queue1.size() > 1)
		{
			T front = queue1.front();
			queue1.pop();
			queue2.push(front);
		}
		if (queue1.size() == 1)
		{
			T front = queue1.front();
			queue1.pop();
			return front;

		}
		while (queue2.size() > 1)
		{
			T front = queue2.front();
			queue2.pop();
			queue1.push(front);
		}
		if (queue2.size() == 1)
		{
			T front = queue2.front();
			queue2.pop();
			return front;
		}

	}
private:
	queue<T> queue1;
	queue<T> queue2;
};

int main(int argc, char *argv[])
{
	MyStack<int> stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	int top = stack.top();//3
	cout << "top = " << top << endl;    //3
	int n1 = stack.pop();
	int n2 = stack.pop();
	top = stack.top();
	cout << "top = " << top << endl;    //1
	int n3 = stack.pop();
	cout << n1 << " " << n2 << " " << n3 << endl;        //入栈 1 2 3 ->出栈 3 2 1
	stack.clear();
	stack.push(100);
	stack.push(200);
	stack.push(300);
	n1 = stack.pop();
	n2 = stack.pop();
	n3 = stack.pop();
	cout << n1 << " " << n2 << " " << n3 << endl;       //入栈 100 200 300 ->出栈 300 200 100
	return 0;
}
*/

//两个栈实现一个队列 
/*
template<typename T>
class MyQueue
{
public:
	void clear()
	{
		while (!stack1.empty())
		{
			stack1.pop();

		}

		while (!stack2.empty())
			stack2.pop();
	}

	void push(T data)
	{
		stack1.push(data);
	}

	T pop()
	{
		if (stack2.size() == 0)
		{
			while (stack1.size() > 0)
			{
				T top = stack1.top();
				stack1.pop();
				stack2.push(top);
			}
		}
		if (stack2.size() == 0)
			cout << "queue is empty" << endl;
		T top = stack2.top();
		stack2.pop();
		return top;
	}

	T back()
	{
		if (stack1.size() > 0)
			return stack1.top();

		while (stack2.size() > 0)
		{
			T top = stack2.top();
			stack2.pop();
			stack1.push(top);
		}

		if (stack1.size() == 0)

			return stack1.top();
	}

	T front()
	{
		if (stack2.size() == 0)
		{
			while (stack1.size() > 0)
			{
				T top = stack1.top();
				stack1.pop();
				stack2.push(top);
			}
		}
		if (stack2.size() == 0)

			return stack2.top();
	}
private:
	stack<T> stack1;
	stack<T> stack2;
};

int main()
{
	MyQueue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);
	// 出队<-  1  2  3 <-入队
	cout << que.front() << endl;//1
	cout << que.back() << endl;	//3

	cout << que.pop() << endl;//1
	cout << que.pop() << endl;//2
	cout << que.pop() << endl;//3

	que.clear();

	return 0;
}
*/
//void Myinsertqueue(stack<int> &s1, stack<int> &s2, int m)
//{
//	s1.push(m);
//}
//
//void Mypopqueue(stack<int> &s1, stack<int> &s2, int &m)
//{
//	if (!s2.empty())
//	{
//		int l = s1.size();
//		for (int i = 0; i < l; i++)
//		{
//			s2.push(s1.top());
//			s1.pop();
//		}
//		m = s2.top();
//		cout << m << " ";
//		s2.pop();
//	}
//}
//
//
//void Myinsertstack(queue<int> &q1, queue<int> &q2,int n)
//{
//	q1.push(n);
//}
//
//void Mypopstack(queue<int> &q1, queue<int> &q2, int &n)
//{
//	while (!q1.empty() || !q2.empty())
//	{
//		int p = q1.size();
//		for (int i = 0; i < p; i++)
//		{
//			q2.push(q1.front());
//			q1.pop();
//		}
//		n = q1.front();
//		q1.pop();
//		int l = q2.size();
//		for (int j = 0; j<l; j++)
//		{
//			q1.push(q2.front());
//			q2.pop();
//		}
//	}
//}
/*
int main()
{
	
	/*char  a[100] = "We are happy." ;
	Replace(a, 100);

	printf("%s\n",a);


	int a=fibonacci(2);
	cout << a << endl;

	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	Adjustment(arr,10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	cout << endl;
	

	double a = power(-2, -3);
	double b = power(2, -20);
	cout << a <<endl;
	cout << b << endl;
	
	BitCount(32);
	cout << BitCount(32) << endl;
	
	Linklist a;
	a.Insert_head(1);
	a.Insert_head(2);
	a.Insert_head(3);
	a.Insert_head(4);
	a.Insert_head(5);
	a.Show();
	Node*p = a.head->next->next;
	a.Delete_node1(p);
	a.Show();
	Node*s = a.head;
	Rshow1(s);
	vector<int>ar =Rshow(s);
	int l = ar.size();
	for (int i = 0; i < l; i++)
	{ 
		cout << ar[i]<<" ";
	}
	cout << endl;
	
	return 0;
}*/

// 如何判断合法的IP地址,尽可能考虑各种情况 
/*
static int CountPoint(const char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		if (*str == '.')
			count++;
		str++;
	}
	return count;
}


bool IsIP(const char *str)
{
	const char *p = NULL;
	int num = 0;
	if (str == NULL)
	{
		return false;
	}
	if (CountPoint(str) != 3)
	{  
		return false;
	}
	if (str[0] == '0')
	{
		return false;
	}
	if (str[0] == '.')
	{
		return false;
	}
	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			return false;
		}
		str++;
	}

	for (int i = 0; i < strlen(str) - 2; i++)
	{
		if (str[i] == '.'&&str[i + 1]=='.')
		{
			return false;
		}
	}

	while (*str != '\0')
	{
		if (isdigit(*str))
		{
			num = num * 10 + *str - '0';
		}
		else if (*str != '.' || num>255)
		{
			return false;
		}
		else
		{
			num = 0;
		}
		str++;
	}
	if (num > 255)//处理尾部数据
		return false;

	return true;
}
*/
