#include<stdio.h>
//��ɸѡ����100֮�ڵ�����
/*int  Primenum()
{
    int i,j,arr[101];
    for(i = 1;i <= 100;i++)
    {
        arr[i]= i;
    }
        arr[1]= 0;
    for(i = 2;i<100;i++)
    {
       for(j = i+1;j<=100;j++)
       {
          if(arr[j]!=0 && arr[i]!=0)
          {
             if(arr[j]%arr[i] == 0)
             {
               arr[j]=0;
             }
          }
       }
    }
     for(i=2;i<=100;i++)
     {
         if(arr[i]!=0)
         {
          printf("%d\n",arr[i]);

         }
     }
           return arr[i];
}
int main()
{
    int a=Primenum ();
    printf("%d/n",a);
}*/
//��ѡ�񷨶�10����������
/*int Fun()
{
    int i,n,tmp,arr[10]={10,8,5,1,6,9,7,2,4,3};
    for( i=0;i<10;i++)
    {
        for(n=i+1;n<10;n++)
       {
          if(arr[i]>arr[n])
          {
              tmp=arr[i];
              arr[i]=arr[n];
              arr[n]=tmp;
          }
       }
    }
      for(i=0;i<10;i++)
      {
          printf("%d\n",arr[i]);

      }
          return arr[i];

}
int main()
{
   printf("%d",Fun());
   return 0;
}*/
//��15�������ɴ�С˳�����һ�������У�����һ������Ҫ�����۰���ҷ��ҳ������������еĵڼ���Ԫ�ص�ֵ��
/*void Fun1(int n)
{
   int arr[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
   int m,j,k,l;
   l=15;
   m=0;
   j=l-1;
   while(m<=j)
   {
      k=(m+j)/2;
      if(n>arr[k])
      {
          j=k-1;
      }
      else if(n<arr[k])
      {
          m=k+1;
      }
      else if(n==arr[k])
      {
          printf("%d�ǵ�%d��Ԫ�ص�ֵ\n",n,k+1);
              break;
      }
   }
     if(n!=arr[k])
     {
        printf("�޴���\n");
     }
}
int main()
{
   Fun1(2);
   Fun1(15);
   Fun1(0);
   return 0;
}
*/
//�ж�����
/*void Fun2(int n)
{
for(int i=2;i<n;i++)
{
if(n%i==0)
{
printf("%d\n��������",n);
}
}
printf("%d������\n",n);
}
int main()
{
Fun2(5);
Fun2(8);
return 0;
}*/
//��һ��3*3�����;���Խ���Ԫ��֮��
/*int Sum(int (*arr)[3])
{
	int s=0;
	int i;
	int j;
	for (i= 0; i < 3; i++)
	{
		for (j= 0; j < 3; j++)
		{
			if (i == j || i + j == 2)
			{
				s += arr[i][j];
			}
		}
	}
	return s;
}
int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int a = Sum(arr);
	printf("%d\n", a);
	return 0;
}
*/
//���������
/*void Fun(int (*arr)[10])
{
	int j, i;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
		
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[10][10] = { 0 };
	Fun(arr);
	return 0;
}
*/
//���1~n*n����Ȼ�����ɵ�ħ����
/*
void MagicSquare()         //�˺���ֻ����������ħ����
{
#define ROW 3
#define COL ROW
	int arr[ROW][COL] = { 0 };
	int row = 0;
	int col = ROW / 2;
	arr[row][col] = 1;//1

	for (int i = 2; i <= ROW*COL; i++)
	{
		//���δ���
		if (row == 0)//1
		{
			row = ROW - 1;
		}
		else
		{
			row--;
		}
		//row = (row==0 ? ROW-1 : row-1);//2

		//row = (row+ROW-1)%ROW;//3
		col = (col + 1) % COL;
		if (arr[row][col] != 0)//******,�Ѿ���ֵ
		{
			row = (row + 2) % ROW;
			col = (col - 1 + COL) % COL;
		}
		arr[row][col] = i;
	}

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
#undef ROW
int main()
{
	MagicSquare();
	return 0;
}
*/
//�ҳ���λ�����еİ���
void Saddle(int(*arr)[3])                          /*����*/
{
	int i,j,k,m=0,n=1,l;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]>arr[i][m])
			{
				m=j;
			}
		}
		for(k=0;k<3;k++)
		{
			if(arr[k][m]<arr[i][m])
			{
				n=0;
			}
		}
		if(n!=0)
		{
			printf("%d\n",arr[i][m]);
			l=0;
		}
	}
	if(l)
	{
		printf("û�а���\n");
	}
}

int main()
{
	int arr[3][3] = {7, 2, 1, 9, 4, 5, 10, 6, 3 };
	Saddle(arr);
	return 0;
}