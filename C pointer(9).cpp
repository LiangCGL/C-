#include<stdio.h>
#include<string.h>
#include<assert.h>
//7.
/*
char * my_strrchr(char * str, int ch)
{
	char *p = str;
	assert(str!=NULL);
	while (*str++)
	{
		;
	}
	while (str-- != p && *str != ch)
	{
		;
	}
	if (*str == ch) 
	{
		return str;
	}
	return NULL;
}

int main()
{
	char *arr = "123452";
	char *p;
	char a = '2';
	p = (my_strrchr(arr, a));
	if (NULL == p)
	{
		printf("不能找到 %c !\n", a);
	}
	else
	{
		printf("找到 %c !\n", *p);
		printf("%p\n", p);
	}
	return 0;
}
*/

//8.
/*
char * my_strnchr(char  *str, int ch, int which)
{
	int count = 0;
	assert(str);
	while (*str)
	{
		if (ch == *str)
		{
			count++;
			if (count == which)
			{
				return str;
			}
		}
		*str++;
	}
	return NULL;
}

int main()
{
	char *arr = "45642884";
	int a = '2';
	int count = 1;
	if (NULL == my_strnchr(arr, a, count))
	{
		printf("没有找到 %c !\n", a);
	}
	else
	{
		printf("找到 %c !\n", a);
		printf("%p\n", my_strnchr(arr, a, count));
	}
	return 0;
}
*/

//9.
/*
int count_chars(char const *str, char const *chars)
{
	int count = 0;
	int i, j;
	assert(str!=NULL);
	assert(chars!=NULL);
	for (i = 0; i < strlen(str); i++)
	{
		for (j = 0; j < strlen(chars); j++)
		{
			if (str[i] == chars[j])
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
	char *arr = "012345";
	char *brr = "20354";
	printf("%d\n", count_chars(arr, brr));
	return 0;
}
*/

//进制的转换
/*
void Myiota(char *str, int num, int radix)
{
	int t = num / radix;
	int r = num%radix;
	char *p = str;
	char *q = str;
	while (t != 0)
	{
		*str++ = r + '0';
		r = t%radix;
		t /= radix;
	}
	*str = r + '0';
	while (*q!='\0')
	{
		if (*q > '9')
		{
			*q += 39;
		}
		q++;
	}
	while (p++ < str--)
	{
		char tmp = *p;
		*p = *str;
		*str = tmp;
	}
}
int main()
{
	char arr[128] = { 0 };
	int num = 10;
	Myiota(arr, num, 6);
	printf("%s\n", arr);
}
*/