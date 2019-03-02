#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//把三个字符串由小到大输出
/*
void Cpy(char *des, char *src)                
{
	while (*des++ = *src++);
}
void Show(char *arr,char *brr,char *crr)
{
	char str[100];
		if (strcmp(arr, brr)>0)
		{
		    Cpy(str, arr);
		    Cpy(arr,brr);
		    Cpy(brr,str);
		}
		if (strcmp(arr, crr)>0)
		{
		    Cpy(str, arr);
		    Cpy(arr, crr);
		    Cpy(crr, str);
		}
		if (strcmp(brr, crr)>0)
		{
			Cpy(str, brr);
			Cpy(brr, crr);
			Cpy(crr, str);
		}
		printf("%s\n%s\n%s\n",arr,brr,crr);
}
int main()
{
	char arr[20] = "abcde";
	char brr[20] = "abcd";
	char crr[20] = "abcfg";
	Show(arr, brr, crr);
	return 0;
}
*/
//把后面的m和个数变成最前的的m个数
/*void Fun(char *arr,int n,int m)
{
	int l = strlen(arr); 
	int i;
	int *p = (int *)malloc(n*sizeof(char));
	for ( i= 0;i < l ; i++)
	{
		if (i < l - m )
		{
           p[i + m] = arr[i];
		}
		else
		{
		 p[i + m - l] = arr[i];
		}
	}
	p[i] = '\0';
	for (i = 0; i < l; i++)
	{
		arr[i] = p[i];
	}
	printf("%s\n",arr);
	free (p);
}
int main()
{	
	char arr[] = "123456789";
    Fun(arr,10,4);
	return 0;
}
*/	
// n个人围成一圈，顺序排号  约瑟夫圈问题
/*
void Fun1(int n)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int *p = (int *)malloc(n*sizeof(int));
	for (i = 0; i < n; i++)
	{
		p[i] = i + 1;
	}
	i = 0;
	while (b < n - 1)
	{
		if (*(p + i) != 0)
			a++;
		if (a == 3)
		{
			*(p + i) = 0;
			a = 0;
			b++;
		}
		i++; 
		if (i == n)
			i = 0;
	}
	while (*p == 0)
		p++;
	printf("%d\n", *p);
}	
int main()
{
	Fun1(100);
	return 0;
}
*/
// 将一个字符串m个字符复制成另一个字符串
/*
void Fun2(char *arr, int m)
{
	int i = 0;
	int l = strlen(arr);
		char *p = (char *)malloc((l - m)*sizeof(char));
		for (i = m - 1; i < l; i++)
		{
			p[i+1-m] = arr[i];
		}
		p[i] = '\0';
		printf("%s\n",p);
}
int main()
{
	
	char arr[] = "abcdefghijkl";
	Fun3(arr,8);
	return 0;
}
*/