# include<stdio.h>
# include<math.h>
//1.����������ֵ�ļ���
/*void Fun(int n )
{ 
	double  p;
	double r=0.09;
  p=pow(1+r,n);
     printf("%f\n",p);
}
int main()
 {
	 Fun(10);
 return 0 ;

}*/
//2.��������ĳ���
/*int main()
{ 
	char c1,c2;
	c1=97;
	c2=98;
	printf("c1=%c,c2=%c\n",c1,c2);
	printf("c1=%d,c2=%d\n",c1,c2);
	return 0;
	���c1=a,c2=b
	c1=97,c2=98
	%c����������ַ���%d�������������
}*/
/*int main()
{ 
	char c1,c2;
	c1=197;
	c2=198;
	printf("c1=%c,c2=%c\n",c1,c2);
	printf("c1=%d,c2=%d\n",c1,c2);
	return 0;
	//���c1=?,c2=?
	c1=-59,c2=-58
	��Ϊcharȡֵ��Χ��-128~127֮�䣬��197��198���ڷ�Χ֮�⣬���Դ������
	��Ϊ197��198�Ķ����Ʊ�ʾ��Ϊ����-59��-58
}*/
/*int main()
{ 
	int c1,c2;
	c1=97;
	c2=98;
	printf("c1=%c,c2=%c\n",c1,c2);
	printf("c1=%d,c2=%d\n",c1,c2);
	return 0;
    ���c1=a,c2=b
	    c1=97,c2=98
		��Ϊ%c����������ַ���%d�������������
}*/
//3.���С��1000��ƽ����
/*int main()
{
	int a,n;
	scanf("%d",&a);
	if(a<1000)
		n=(int) sqrt((double) a);
		printf("%d",n);
	return 0;
}*/
//4.һ����������x�������Ӧ��yֵ
/*void Fx(int x)
{int y;
	if(x<1)
	{y=x;}
	else if (x>=1&&x<10)
	{y=2*x-1;}
	else if (x>=10) 
	{y=3*x-11;}
	printf("%d\n",y);
	
}
int main()
{
	Fx(2);
	return 0;
}*/
//5.
/*void Sco(int n)
{
	char a;
	if(n>=90)
	{	a='A';
	printf("%c",a);}
	else if(n>=80&&n<=89)
	 {	a='B';
   printf("%c",a);}
	else if(n>=70&&n<=79)
	{	a='C';
	printf("%c",a);}
	else if(n>=60&&n<=69)
	{	a='D';
	printf("%c",a);}
	else if(n<60)
	{	a='E';
	printf("%c",a);}
	
}
int main()
{
	Sco(95);
	return 0;
}*/
//6.(1)
/*void Fn1(int a)
{
	int b;
	if(a>9999)
	{	b=5;
	printf("%d��5λ��\n",a);}
	else if(a>999)
	{b=4;printf("%d��4λ��\n",a);}
	else if(a>99)
	{b=3;printf("%d��3λ��\n",a);}
	else if(a>9)
	{b=2;printf("%d��2λ��\n",a);}
	else 
	{b=1;printf("%d��1λ��\n",a);}
	
}
	int main()
	{
		Fn1(545);
return 0;
	}*/
  //(2)
 /*
 void Fn2(int a)
	{int m,n,i,j,k;
	m=a/1000;
	n=(int)(a-m*10000)/1000;
	i=(int)(a-m*10000-n*1000)/100;
	j=(int)(a-m*10000-n*1000-i*100)/10;
	k=(int)(a-m*10000-n*1000-i*100-j*10);
	printf("%d,%d,%d,%d,%d,",m,n,i,j,k);
	}
	int main()
	{ 
	 Fn2(9863);
	Fn2(54);
		 Fn2(545);
		 return 0;
	}*/
	//(3)
	/*void Fn2(int a)
	{int m,n,i,j,k;
	m=a/1000;
	n=(int)(a-m*10000)/1000;
	i=(int)(a-m*10000-n*1000)/100;
	j=(int)(a-m*10000-n*1000-i*100)/10;
	k=(int)(a-m*10000-n*1000-i*100-j*10);
	printf("%d,%d,%d,%d,%d,",k,j,i,n,m);
	}
	int main()
	{ 
	 Fn2(9863);
	Fn2(54);
		 Fn2(545);
		 return 0;
	}*/
	//7.
	/*void bonus(int i)
{
	int n=i/100000;
	switch(n)
	{
	case 0:
	case 1:
		printf("%f\n",i*0.1);break;
	case 2:
		printf("%f\n",100000*0.1+(i-100000)*0.075);break;
	case 3:
	case 4:
		printf("%f\n",100000*0.1+100000*0.075+(i-200000)*0.05);break;
	case 5:
	case 6:
		printf("%f\n",100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03);break;
	case 7:
	case 8:
	case 9:
	case 10:
		printf("%f\n",100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015);break;
	default:
		printf("%f\n",100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01);break;
	}
}

int main()
{
	bonus(80000);
	bonus(150000);
	bonus(380000);
	bonus(570000);
	bonus(890000);
	bonus(1580000);
return 0;
}*/
//(2)
/*void bonus(int i)
{
	if(i<=100000)
	{
		printf("%f\n",i*0.1);
	}
	else if(i>100000&&i<=200000)
	{
		printf("%f\n",100000*0.1+(i-100000)*0.075);
	}
	else if(i>200000&&i<=400000)
	{
		printf("%f\n",100000*0.1+100000*0.075+(i-200000)*0.05);
	}
	else if(i>400000&&i<=600000)
	{
		printf("%f\n",100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03);
	}
	else if(i>600000&&i<=1000000)
	{
		printf("%f\n",100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015);
	}
	else
	{
		printf("%f\n",100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01);
	}

}

int main()
{
	bonus(80000);
	bonus(150000);
	bonus(380000);
	bonus(570000);
	bonus(890000);
	bonus(1580000);
return 0;
}*/

