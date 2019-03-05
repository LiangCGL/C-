#include<stdio.h>
#include<string.h>
#include<ctype.h>
//字符串反放
/*void Zfan(char *arr,int n)
{
	int tmp;
	for (int i = 0; i <n /2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] =tmp ;
	}
}
int main()
{
	char arr[] = "abcde";
	int n=strlen(arr);
	Zfan(arr,n);
	printf("%s\n", arr);
	return 0;
}
*/
//字符串元音字母复制
/*void Fun(char *arr,char*brr)
{
	int i;
	int n = strlen(brr);
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
		{
			brr[n] = arr[i];
			n++;
		}
	}
}
int main()
{
	char arr[] = "adfdgio";
	char brr[20] = "abc";
	Fun(arr, brr);
	printf("%s\n", brr);
}
*/
//统计字母、数字、字符、空格
/*void Tlj(char *lrr)
{
	int a=0, b=0, c=0, d=0;
	for (int i = 0;lrr[i] != '\0'; i++)
	{
		if (isalpha(lrr[i]))
		{
			a++;
		}
		else if (isdigit(lrr[i]))
		{
			b++;
		}
		else if (lrr[i] == ' ')
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	printf("%d,%d,%d,%d\n", a, b, c, d);
}
int main()
{
	char lrr[] = "s fd s564 dg -+*";
	Tlj(lrr);
   return 0;
}
*/
//输出字符串中最长单词
/*void Show(char *arr,char *brr)
{
	int i;
	int sum = 0;
	int p = 0;
	int m = 0;
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (!isalpha(arr[i]))
			{
			if (m < sum)
				{
				 m = sum;
				 p = i;
				}
				 sum = 0;
			}
			else
			{
			    sum++;
			}
	}
	if (m < sum)
	  {
		m = sum;
		p = i;
	  }
		for ( p = p - m; m > 0; p++)
			{
				m--;
				*brr++ = arr[p];
			}
			*brr = '\0';
}
int main()
{
	char arr[] = "thanks  ok you  ture   ";
	char brr[100];
	Show(arr, brr);
	printf("%s\n", brr);
	return 0;
}
*/
// 字符起泡法排序
/*void Paixu(char *arr)
{
	char tmp;
	int i,j;
	for (i = 0; arr[i]!='\0'; i++)
	{
		for (j = i + 1; arr[j] != '\0'; j++)
		{
			if (arr[i]>arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
       
}
int main()
{
	char arr[] = "9876543210";
	Paixu(arr);
	printf("%s\n", arr);	
	return 0;
}
*/
//十六进制转化为二进制
/*void Zhhua(char *arr)
{
	int a,sum = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (isdigit(arr[i]))
		{
			a = arr[i] - '0';
		}
		else
		{
			a = arr[i] - 'a' + 10;
		}
		sum = sum* 16 + a;
		
	}
	printf("%d\n", sum);
}
int main()
{
	char arr[10] = "1a2b3";
	Zhhua(arr);
	return 0;
}*/