#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
// 1.表示合法，不过它在程序里不起任何作用，计算的结果将不会赋值给任何变
// 7.因为没有用大括号，所以putchar不会在循环里调用，所以putchar不会被打印出来，只打印checknum的值
//int main()
//{
//	/*char ch,checksum=0;
//	while ((ch = getchar()) != EOF)
//		checksum += ch;
//	    putchar(ch);
//	
//		printf("checksum=%d",checksum);
//*/
//}
//1.计算并打印一个数的平方根
/*float Sqart(float s)
{
	float m, n;
	m = 1;
	n = 0;
	if (s <= 0)
	{
		printf("the a is not positive!");
	}
	while (1)
	{
		n = (m + (s / m)) / 2;
		if (m != n)
		{
			m = n;
		}
		else
		{
			break;
		}
	}
	return n;
}
int main()
{
	float s=20.364;	
	printf("%f\n",Sqart(s));
	return 0;
}
*/
//6.从一个字符串中提取一个子字符串
/*int substr(char dst[], char scr[], int start, int len)
{
	int i;
	int l = strlen(scr);
	if (start < 0 || len < 0 || start >= l)
	{
		dst[0] = '\0';
		i = 0;
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			if (i + start < l)
			{
				dst[i] = scr[i + start];
			}
			else
			{
				break;
			}
		}
		dst[i] = '\0';
		//printf("%s:%d\n", dst, i);
	}
	return i;
}
int main()
{
	char des[128];
	char scr[] = "abcdefghijklmn";
	substr(des,scr,5,6);
	printf("%s\n", des);
	return 0;
}
*/
//7.编写一个函数从字符串中去掉多余的空格
/*
void deblank(char string[])
{
	int i,j;
	int n = 0;
	for (i = 0; string[i] != '\0'; i++)
	{
		while (string[i] == ' ' && n == 1)
		{
			for (j = i; string[j] != '\0'; j++)
			{
				string[j] = string[j + 1];
			}
			string[j] = '\0';
		}
		if (string[i] == ' ')
		{
			n = 1;
		}
		else
		{
			n = 0;
		}
	}
}
int main()
{
	char string[] = "abc df   hjk   qwedf        dgh    ";
	deblank(string);
	printf("%s\n",string);
	return 0;
}
*/