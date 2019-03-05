#include<stdio.h>

typedef struct data
{
	int num;
	char name[20];
	int sorce[20];
}data;

void Func(data data[10])
{
    data[0] = { 1, "cao", { 99, 68, 77 } };
	data[1] = { 2, "wang", { 98, 94, 93 } };
	data[2] = { 3, "liu", { 57, 66, 93 } };
	data[3] = { 4, "zhang", { 94, 91, 89 } };
	data[4] = { 5, "li", { 89, 64, 32 } };
	data[5] = { 6, "guo", { 86, 156, 67 } };
	data[6] = { 7, "fu", { 97, 97, 90 } };
	data[7] = { 8, "jiang", { 88, 86, 55 } };
	data[8] = { 9, "du", { 77, 88, 99 } };
	data[9] = { 10, "zhuo", { 34, 77, 99 } };

	int i , j ,sum=0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum += data[i].sorce[j];
		}
	}  
	printf("总平均成绩为%d\n", sum / 30);

	int max = 0,p;
	for (i = 0; i < 10; i++)
	{
		int  tmp=0 ;
		for (j = 0; j < 3; j++)
		{
			tmp+=data[i].sorce[j];
			if (tmp>max)
				max = tmp;
			p = i;
		}
	}
	printf("%d %s %d %d %d\n", data[p].num, data[p].name, data[p].sorce[0], data[p].sorce[1], data[p].sorce[2]);
}

int main()
{
	data data[10];
	Func(data);
	return 0;
}

