#include<stdio.h>
// 用结构体计算该日在本年中是第几天
/*
typedef struct days
{
	int year;
	int month;
	int day;
}days;
int Fun(days day1)
{
	int a, b, c;
	a = day1.year;
	b = day1.month;
	c = day1.day;
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int s = 0;
	if (b == 1)
	{
		s = c;
	}
	if (b == 2)
	{
		s = month[0] + c;
	}
	if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0)
	{
		for (int i = 0; i < b-1 ; i++)
		{
			s += month[i];
		}
		s = s + c + 1;
	}
	else
	{
		for (int i = 0; i < b-1 ; i++)
		{
			s += month[i];
		}
		s += c;
	}		
	       return s;
}
int main()
{
	days day1;
	day1.year = 2004;
	day1.month = 4;
	day1.day = 10;
	int n = Fun(day1);
	printf("这是本年第%d天\n", n);
}
*/
// 编写函数print input
/*
typedef struct student
{
	char num[10];
	char name[20];
	int score[3];
}stu;
void input(stu *stu)
{
	stu[0] = { "01", "cao", { 1, 2, 3 } };
	stu[1] = { "02", "wang", { 4, 5, 6 } };
	stu[2] = { "03", "liu", { 7, 8, 9 } };
	stu[3] = { "04", "zhang", { 10, 11, 12 } };
	stu[4] = { "05", "li", { 13, 14, 15 } };
}
void print(stu *stu)
{
	
	for (int i = 0; i < 5; i++)
	{
		printf("%s  ",stu[i].num);
		printf("%s  ", stu[i].name);
	   for (int j = 0; j < 3; j++)
	   {  
            printf("%d ", stu[i].score[j]);
	   }
	   printf("\n");
	}	
}
int main()
{
	stu stu[5];
	input(stu);
	print(stu);
	return 0;
}
*/
/*
typedef struct student
{
	char num[10];
	char name[20];
	int score[3];
}stud;
void  Show(stud *stu)
{
	stu[0] = { "01", "cao", { 1, 2, 3 } };
	stu[1] = { "02", "wang", { 4, 5, 6 } };
	stu[2] = { "03", "liu", { 7, 8, 9 } };
	stu[3] = { "04", "zhang", { 10, 11, 12 } };
	stu[4] = { "05", "li", { 13, 14, 15 } };
	stu[5] = { "01", "guo", { 16, 17,18 } };
	stu[6] = { "02", "fu", { 19, 20, 21 } };
	stu[7] = { "03", "jiang", { 22, 23, 24 } };
	stu[8] = { "04", "du", { 25, 26, 27 } };
	stu[9] = { "05", "zhuo", { 28, 29, 30 } };
	float a ;
	int sum=0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += stu[i].score[j];
		}
	}
	a = sum / 30;
	printf("%f\n", a);
	int m= 0,p;
	for (int i = 0; i < 10; i++)
	{
		int  s=0 ;
		for (int j = 0; j < 3; j++)
		{
			s += stu[i].score[j];
			if (s>m)
			{
				m = s;
				p = i;
			}
		}
	}
	printf("%d %s %d %d %d\n", stu[p].num, stu[p].name, stu[p].score[0], stu[p].score[1], stu[p].score[2]);
}
int main()
{
	stud stu[10];
	Show(stu);
	return 0;
}
*/
