#include<stdio.h>

#define TRUE 1
#define FALSE 0
//1.     ���ʽ            ֵ                 ���ʽ              ֵ
//       nts              100                   ip               112
//       ints[4]          50                    ip[4]            80
//       ints + 4         116                   ip + 4           128
//       * ints + 4       14                    * ip + 4         44
//       *(ints + 4)      50                    * (ip + 4)       80
//       ints[-2]         illegal               ip[-2]           20  
//       & ints           100                   &ip              illegal
//       &ints[4]         116                   &ip[4]           128
//       &ints + 4    ��  116                   &ip + 4          illegal
//       &ints[-2]        illegal               &ip[-2]          104
//2.����ȣ���Ϊ�ڶ����൱��array[j]+i,���ڲ�������������
//8.�ڵ�һ����ֵ����У���������Ϊa��һ��ָ���������������ȡ�洢�������ָ��ֵ��������12��3�����ͳ��ȣ���
//Ȼ���������ִ�м�ӷ��ʲ�������aʵ�����������������ʼλ�ã�������Ϊ��ָ�롱��õ����ֵʵ����������ĵ�һ������Ԫ�أ�
//����12��ӣ���������Ϊһ����ַ��Ȼ�����ִ�м�ӷ��ʣ���Ϊ�����������ȡһЩ�����ڴ�λ�õ����ݣ���������ĳ�ֵ�ַ��������³���ʧ�ܡ�
//�ڶ�����ֵ�У���������Ϊb�Ǹ�����������������12��3�ĵ���������ӵ�b�Ĵ洢��ַ��Ȼ���ӷ��ʲ�����������ֵ����ʵ��b��һ��ָ�������
//���Դ��ڴ�����ȡ�ĺ���������ʵ�����Ǵ���������������ȡ�õģ��������˵����ָ���������Ȼ���ڹ��������ǲ�����ͬ�ġ�
//10.  ���ʽ                        ֵ
//     array                        1000
//     array[3]                     1012
//     array[2] - 1                 1006
//     & array[1][2]                1008
//     & array[2][0]                1008
//11.���ʽ  ��������������������ֵ��������������           ��X������
//     array�������������������� ��1000                       int(*x)[2][3][6]
//     array + 2                   1288                       int(*x)[2][3][6]
//     array[3]                    1432                       int(*x)[3][6]
//     array[2] - 1                1216                       int(*x)[3][6]
//     array[2][1]                 1360                       int(*x)[6]
//     array[1][0] + 1             1168                       int(*x)[6]
//     array[1][0][2]              1192                       int *x;
//     array[0][1][0] + 2          1080                       int *x;
//     array[3][1][2][5]                                      int x;
//     &array[3][1][2][5]          1572                       int *x;
//13.     ���ʽ                                               ֵ
//         *array                                                array[0]
//         * (array + 2)                                         array[2]
//         * (array + 1) + 4                                     array[1] + 4
//         * (*(array + 1) + 4)                                  array[1][4]
//         * (*(*(array + 3) + 1) + 3)                           array[3][1][3]
//         * (*(*array + 1) + 2)                                 array[0][1][2]
//         * (**array + 2)                                       array[0][0][2]
//         * *(*array + 1)                                       array[0][1][0]
//         * **array                                             array[0][0][0]
//14. ���д������i��һ��ָ�����͵�ָ�룬��û�д���
//15.�ڶ��������������which�Ѿ��������鷶Χ�ˣ�����Ϊ�±꽫��ʹ�������������Խ��������
//18.void function(a[][2][5]);



//1.
//unsigned char char_value[3][6][4][5] = {
//	{
//		0
//	},
//	{
//		{
//			0
//		},
//		{
//			{ 0 },
//			{ 0, ' ' },
//		},
//		{
//			{ 0 },
//			{ 0 },
//			{ 0, 0, 0, 'A' },
//			{ 0, 0, 0, 0, 'x' }
//		},
//		{
//			{ 0 },
//			{ 0 },
//			{ 0, 0, 0xf3 },
//		},
//		{
//			{ 0 },
//			{ 0 },
//			{ 0, 0, 0, '\n' }
//		},
//		{
//			0
//		}
//	},
//	{
//		{ 0 },
//		{
//			{ 0 },
//			{ 0, 0, 0320 },
//		},
//		{
//			{ 0 },
//			{ 0, '0' },
//			{ 0, 0, '\'' },
//			{ 0, '\121' }
//		},
//		{
//			0
//		},
//		{
//			{ 0 },
//			{ 0 },
//			{ 0 },
//			{ 0, 0, '3', 3 }
//		},
//		{
//			{ 0 },
//			{ 0 },
//			{ 0 },
//			{ 0, 0, 0, 0, 125 }
//		}
//	}
//};
//
//int main()
//{
//	printf("%c ", char_value[1][2][2][3]);
//	printf("%d ", char_value[1][1][1][1]);
//	printf("%x\n", char_value[1][3][2][2]);
//	printf("%c ", char_value[2][4][3][2]);
//	printf("%d ", char_value[1][4][2][3]);
//	printf("%x\n", char_value[2][2][3][1]);
//	printf("%d ", char_value[2][4][3][3]);
//	printf("%d ", char_value[2][5][3][4]);
//	printf("%c\n", char_value[1][2][3][4]);
//	printf("%o ", char_value[2][1][1][2]);
//	printf("%c ", char_value[2][2][2][2]);
//	printf("%c\n", char_value[2][2][1][1]);
//}

//3.
//bool identity_matrix(int matrix[][10])
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (i == j)
//			{
//				if (matrix[i][j] != 1)
//
//					return false;
//			}
//			else
//			{
//				if (matrix[i][j] != 0)
//
//					return false;
//			}
//		}
//	}
//	printf("matrix�ǵ�λ����\n");
//
//	return true;
//
//}
//int main()
//{
//	int matrix[10][10] = {0};
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (i == j)
//			{
//				matrix[i][j] = 1;
//			}
//			else
//			{
//				matrix[i][j] = 0;
//			}
//		}
//	}
//
//	identity_matrix(matrix);
//
//	return 0;
//}

//4..
//int identity_matrix(int matrix[], int n)
//{
//	int i;
//	int j;
//	for (i = 0; i< n; i++)
//	{
//		for (j = 0; j < n; j++)	
//		{
//			if (��matrix)++ != (i == j))
//				return FALSE;
//		}
//	}
//	return TRUE;
//}
//int main()
//{
//	int matrix[10][10];
//	printf("%d\n", identity_matrix(matrix, 5));
//
//	return 0;
//}


//5.
/*void matrix_multiply(int *m1, int *m2, int *r,int x, int y, int z)
{
	int i, j;
	for (i = 0; i < x; i++){
		for (j = 0; j < z; j++){
			int k;
			int *p1 = m1 + i * y;
			int *p2 = m2 + j;
			for (k = 0; k < y; k++){
				*r += *p1 * *p2;
				p1++;
				p2 += z;
			}
			r++;
		}
	}
}

int main()
{
	int m1[3][2] = { { 2, -6 }, { 3, 5 }, { 1, -1 } };
	int m2[2][4] = { { 4, -2, -4, -5 }, { -7, -3, 6, 7 } };
	int r[3][4] = { 0 };
	matrix_multiply((int *)m1,(int *) m2,(int *)r, 3, 2, 4);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d ", r[i][j]);
		printf("\n");
	}

	return 0;
}

*/
//8.
/*
int board[8][8];
void print_board()
{
	int row;
	int column;
	static int n_solutions;

	n_solutions += 1;
	printf("Solution #%d:\n", n_solutions);

	for (row = 0; row < 8; row++){
		for (column = 0; column < 8; column++){
			if (board[row][column])
				printf("Q");
			else
				printf("+");
		}
		putchar('\n');
	}
	putchar('\n');
}

int conflicts(int row, int column)
{
	int i;
	for (i = 1; i < 8; i++){
		if (row - i >= 0 && board[row - i][column])
			return 1;
		if (column - i >= 0 && board[row][column - i])
			return 1;
		if (column + i < 8 && board[row][column + i])
			return 1;

		if (row - i >= 0 && column - i >= 0 && board[row - i][column - i])
			return 1;
		if (row - i >= 0 && column + i < 8 && board[row - i][column + i])
			return 1;
	}
	return 0;
}
void place_queen(int row)
{
	int column;
	for (column = 0; column < 8; column++){
		board[row][column] = 1;
		if (row == 0 || !conflicts(row, column))
		if (row < 7)
			place_queen(row + 1);
		else
			print_board();
		board[row][column] = 0;
	}
}

int main()
{
	place_queen(0);
	return 0;
}
*/