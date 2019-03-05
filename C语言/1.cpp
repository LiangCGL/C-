#include <stdio.h>
//输入两个正整数m和n，求其最大公约数和最小公倍数  
/*int GreatestComDiv(int m,int n)                  
{
	int r;
	while((r=m%n)!=0)
	{
		m=n;
		n=r;
	}
	return n;
}

int LeastComMul(int m,int n)
{
	int a=m,b=n,r,temp;
	while((r=a%b)!=0)
	{
		a=b;
		b=r;
	}
	temp=(m*n/b);
	return temp;
}

int main()
{
	printf("%d,%d\n",GreatestComDiv(12,3),LeastComMul(12,3));
    return 0;
}*/



//统计各字符的个数
/*int main()                                                    
{
	int letters=0,space=0,number=0,others=0;
	char c;
   
	while(( c=getchar())!='\n')
	{
		if(c>='A'&&c<='Z'||c>='a'&&c<='z')
		{
			letters++;
		}
		else if(c==' ')
		{
			space++;
		}
		else if(c>='0'&&c<='9')
		{
			number++;
		}
		else
		{
			others++;
		}
	}
	printf("字母=%d,空格=%d,数字=%d,其他=%d\n",letters,space,number,others);
	return 0;
}*/


//求s=a+aa+...
/*int Digit(int n,int a)
{
	int b=a,sum=a;
	for(int i=2;i<=n;i++)
	{
		a=a*10+b;
		sum+=a;
	}
	return sum;
}

int main()
{
	printf("%d",Digit(2,3));
	return 0;
}*/

//求1!+2!+....
/*int Sum(int n)
{
   int s=1,sum=0;
    for(int i=1;i<=n;i++)
     {
		 s=s*i;
		 sum+=s;
      }
	return sum;
}

int main()
{
	printf("%d", Sum(3));


}*/

//输出所有的水仙花数
/*int main()
{
   int i,j,k,n;
   for(n=100;n<1000;n++)
   {
	   i=n/100;
	   j=n/10-i*10;
	   k=n%10;
	   if(n=i*i*i+j*j*j+k*k*k)
		   printf("%d\n",n);
   }
}*/

//找出1000内的完数
/*int main()
{
	int n,i,sum; 
	for(n=2;n<=1000;n++)
	{	
		sum=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)	
			sum=sum+i;
		}
			if(sum==n)
			{
				printf(" %d its factors are\n",n);
			}
	}
}*/

//计算2/1+3/2+5/3+8/5+...

/*float Fun()
{
	float a=1,b=2,c,sum=0;
	for(int i=1;i<=20;i++)
	{
	sum+=b/a;
	c=b;
	b+=a;
	a=c;
	}
	return sum;
}

int main()
{
	printf("%f",Fun());
	return 0;
}*/
//一个球从100米高空落下...

/*float Fun2() 
{
	float a=100,s=0.0; 
	float b=a/2;
	for(int i=1;i<10;i++)
	{
		 s+=2*b;
		 b=b/2;
	}
	s+=100;
	return s;
}
	
	
	float Fun3() 
{
	float a=100,s=0.0; 
	float b=a/2;
	for(int i=1;i<10;i++)
	{
		 s+=2*b;
		 b=b/2;
	}
	return b;
}
	
	int main()
	{
		printf("%f\n",Fun2() );
		printf("%f",Fun3() );
	}*/

	//猴子吃桃问题

/*int Fun4()
{
	int sum=1;
	for(int i=10;i>1;i--)
	{
		sum=2*(sum+1);
	}
	return sum;
}
 int main()
 {
	 printf("%d",Fun4());
 }*/

 // 两个乒乓球队进行比赛，找出三队赛手名单。

 /*int main()
{
	char i,j,k;//i是A的对手，j是B的对手，k是C的对手
	for (i = 'x'; i <= 'z'; i++)
	{
		for (j = 'x'; j <= 'z'; j++)
		{
			if (i != j)
			{
				for (k = 'x'; k <= 'z'; k++)
				{
					if (i != k&&j != k)      
					{
						if (i != 'x'&&k != 'x'&&k != 'z')
						{
							printf("A——%c\nB——%c\nC——%c\n", i, j, k);
						}
					}
				}
			}
		}
	}
	return 0;
}*/