#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
// 将小写字母转化为大写字母，保存到磁盘文件
/*
void Change()
{
	FILE *fpa = fopen("test.txt", "w");
	assert(fpa != NULL);
	char buff[128] =  "aBcDEFghijK!";
	int n = strlen(buff);
	for (int i = 0; i < n; ++i)
	{
		if (islower(buff[i]))
		{
			buff[i] = toupper(buff[i]);
		}
	}
	fwrite(buff, strlen(buff), 1, fpa);
	fclose(fpa);
}
int main()
{
	Change();
	return 0;
}
*/
// 将两个文件信息整合，存放到新文件中
/*
void Fun()
{
	FILE *fpa = fopen("a.txt", "r");
	assert(fpa != NULL);
	FILE *fpb = fopen("b.txt", "r");
	assert(fpb != NULL);
	FILE *fpc = fopen("c.txt", "w");
	assert(fpc != NULL);
	char buff1[128] = "abcljKH";
	char buff2[128] = "xNmUoP";
	char buff3[128] = { 0 };
	fread(buff1, 127, 1, fpa);
	fread(buff2, 127, 1, fpb);
	strcpy(buff3,buff1);
	strcat(buff3, buff2);
	int n = strlen(buff3);
	int i;
	int j;
	char tmp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (buff3[i]>buff3[j])
		      {
			tmp = buff3[j];
			buff3[j] = buff3[i];
			buff3[i] = tmp;
		      }
		}	 
	}
   fwrite(buff3, strlen(buff3), 1, fpc);	
   fclose(fpa);
   fclose(fpb);
   fclose(fpc);
}
int main()
{
	Fun();
	return 0;
}
*/
//把学生成绩存放到磁盘文件中
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
	float a; 
	float arr[5];
	float sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += stu[i].score[j];	
		}
		    a = sum / 3;
			arr[i] = a;
			printf("%f\n", a);
	}
	FILE *fpa = fopen("stud.txt", "w");
		assert(fpa != NULL);	
	for (int i = 0; i < 5; i++)
	{
		fprintf(fpa,"%d\n",arr[i]);
		fprintf(fpa, "%s,%s,%d,%d,%d\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}
	fclose(fpa);
}
int main()
{
	stu stu[5];
	input(stu);
	return 0;
}
*/
// 将上一题的平均分排序处理，把数据存放到新的文件
/*typedef struct student
{
	char num[10];
	char name[20];
	int score[3];
}stu;
void Sort()
{
	stu stu[5];
	stu[0] = { "01", "cao", { 1, 2, 3 } };
	stu[1] = { "02", "wang", { 13, 14, 15 } };
	stu[2] = { "03", "liu", { 10, 11, 12 } };
	stu[3] = { "04", "zhang", { 7, 8, 9 } };
	stu[4] = { "05", "li", { 4, 5, 6 } };
	float a;
	int arr[5];
    int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += stu[i].score[j];
		}
		a = sum / 3;
		arr[i] = a;
		printf("%f\n", a);
	}
	FILE *fpa = fopen("stu.txt", "w");
	assert(fpa != NULL);
	for (int i = 0; i < 5; i++)
	{
		fprintf(fpa, "%d\n", arr[i]);
		fprintf(fpa, "%s,%s,%d,%d,%d\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
	}
	int tmp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = i+1; j < 5 ; j++)
		{
			if (arr[i]>arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n",arr[i]);
	}
	for (int i = 0; i < 5; i++)
	{
			FILE *fpb = fopen("stud_sort.txt", "w");
			assert(fpb != NULL);
			fprintf(fpb, "%d\n", arr[i]);
			fprintf(fpb, "%s,%s,%d,%d,%d\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
		
	}
}
int main()
{
	Sort();
	return 0;
}*/