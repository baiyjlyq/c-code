/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    printf("hello world!\n");
    printf("hello hit!\n");
    printf("hello everyone!\n");
    return 0;
}
*/
/*
#include <stdio.h>
#define PI 3.14159
#define r 5.3
int main()
{
    printf("Area=%.5f\n",PI*r*r/2);
    printf("circumference=%.5f\n",2*PI*r/2);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    const double c=1.2;
    const double k=4.3;
    const double g=6.4;
    printf("volume=%.3f\n",c*k*g);
    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    x = fabs(x);
    if(100<= x && x <=999)
    {
        int a,b,c;
        a = x / 100;
        b = x / 10 %10;
        c = x % 10;
        y = c * 100 + b * 10 + a;
    }
    printf ("Input x:\n");
    printf ("y=%d\n",y);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float midtermEnglish = 86,midtermChinese = 74,midtermMath = 93,midtermHistory = 77,midtermMusic = 82;
    float termendEnglish = 81,termendChinese = 87,termendMath = 90,termendHistory = 62,termendMusic = 88;
    float total,average;
    total = (midtermEnglish + midtermChinese + midtermMath + midtermHistory + midtermMusic ) * 0.3 + (termendEnglish + termendChinese + termendMath + termendHistory + termendMusic ) * 0.7;
    average = total / 5;
    printf("total=%.2f\n",total);
    printf("average=%.2f\n",average);
    printf("average=%d\n",(int)average);
    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>

int main()
{
    double capital,rate,deposit;
    int year;
    printf ("please enter rate, year, capital:\n");
    scanf ("%lf,%d,%lf",&rate,&year,&capital);
    for (; year > 0; year--)
    {
        capital = capital + (capital * rate);
    }
    deposit = capital;
    printf ("deposit=%.3f\n",deposit);
    return 0;
}
*/
/*
#include <stdio.h>

int main ()
{
    int num = 4321;
    int a,b;
    int num1,num2,num3,num4;
    num4 = num /1000;
    num3 = (num / 100) % 10;
    num2 = (num % 100) / 10;
    num1 = num % 10;
    a = num4 * 10 + num3;
    b = num2 * 10 + num1;
    printf ("a=%d,b=%d\n",a,b);
    printf ("a+b=%d\n",a+b);
    printf ("a-b=%d\n",a-b);
    printf ("a*b=%d\n",a*b);
    printf ("a/b=%.2f\n",(float)a/b);
    printf ("a%%b=%d\n",a%b);
    return 0;
}
*/
/*
#include <stdio.h>

 int main ()
 {
     int x,y;
     x = -11;
     y = 5;
     printf ("negative: %d\n",x % y);
     printf ("positive: %d\n",x % y + y);
     return 0;
 }
*/
/*
#include <stdio.h>

int main()
{
    int man = (175 + 162) * 0.54;
    int woman = (169 *0.923 + 153) / 2;
    printf ("Height of xiao ming: %d\n",man);
    printf ("Height of xiao hong: %d\n",woman);
    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>

int main ()
{
    float x1,x2;
    x1 = (-3 + sqrt(-3 * -3-4 * 2 * 1)) / (float)(2 * 2);
    x2 = (-3 - sqrt(-3 * -3-4 * 2 * 1)) / (float)(2 * 2);
    printf ("x1 = %.4f\n",x1);
    printf ("x2 = %.4f\n",x2);
    return 0;
}
*/
/*
#include <stdio.h>   //统计用户输入
#include <stdlib.h>

int main()
{
    int space = 0,newline = 0,others = 0;
    char ch;
    printf ("Please input a string end by #:\n");
    while ((ch = getchar())!='#')
    {
        if (ch==' ')
            space++;
        else if (ch=='\n')
            newline++;
        else others++;
    }
    getchar();
    printf ("space: %d,newline: %d,others: %d\n",space,newline,others);
    return 0;
}
*/
/*
#include <stdio.h>   //统计正整数中指定数字的个数

int CountDigit(int number,int digit)
{
    int count = 0;
    char ch;
    for(;number>0;number/=10)
    {
        if (number % 10 == digit)
            count++;
    }
    printf ("%d\n",count);
    return 0;
}
main ()
{
    int m,n;
    printf ("Input m,n:\n");
    scanf ("%d,%d",&m,&n);
    CountDigit (m,n);
    return 0;
}
*/
/*
#include <stdio.h>
#define  M  40
#define  N  11
int main()
{
    int  i, j, grade, feedback[M], count[N] = {0};
    printf("Input the feedbacks of 40 students:\n");

    for (i=0; i<M; i++)
    {
        scanf("%d", &feedback[i]);
    }

    for (i=0; i<M; i++)
    {
        feedback[i]++;
    }

    printf("Feedback\tCount\tHistogram\n");

    for (grade=1; grade<=N-1; grade++)
    {
        printf("%8d\t%5d\t", grade, count[grade]);
        for (j=0; j<N-1; j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main()
{
    int  face, roll, frequency[7] = {0};
    srand(time (NULL));

    for (roll=1; roll<=6000; roll++)
    {
        face = rand()%6+1;
        frequency[face]++;
    }

    printf("%4s%17s\n", "Face", "Frequency");

    for (face=1; face<=6; face++)
    {
        printf("%4d%17d\n", face, frequency[face]);
    }

    return 0;
}
*/
/*
#include <stdio.h>
Fun(int b[],int m,int n)
{
    int  i,s=0;
    for( i=m;i<=n;i++)
        s=s+b[i];
    return i;
}

int main()
{
    int  x,a[]={1,2,3,4,5,6,7,8,9};
    x=Fun(a,3,7);
    printf("%d\n",x);
    return 0;
}
*/
/*
#include <stdio.h>
void Sort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
}

int main()
{
    int aa[10]={1,2,30,4,5,6,7,8,9,10},i;
    Sort(aa,10);

    for(i=0;i<10;i++)
        printf("%d,",aa[i]);
    printf("\n");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int n,k;
    float score ,sum,ave;
    sum=0.0;
    for(n=1;n<=10;n++)
    {
        for(k=1;k<=4;k++)
        {
            scanf("%f",&score);
            sum+=score;
        }

        ave=sum/4.0;
        printf("NO%d:%f\n",n,ave);

    }

    return 0;
}
*/
/*
#include <stdio.h>
#define  N   10
void InputMatrix(int a[N][N], int n);
int AddDiagonal(int a[N][N], int n);
int main()
{
    int a[N][N], n, sum;
    printf("Input n:");
    scanf("%d", &n);
    InputMatrix(a, n);
    sum = AddDiagonal(a, n);
    printf("sum = %d\n", sum);
    return 0;
}

/*  函数功能： 输入n×n矩阵的元素值，存于数组a中 */
/*    void InputMatrix(int a[N][N], int n)
{
    int i, j;
    printf("Input %d*%d matrix:\n", n, n);
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
              scanf("%d",&a[i][j]);
        }
    }
}
*/
/*  函数功能： 计算n×n矩阵中两条对角线上的元素之和 */
/*   int AddDiagonal(int a[N][N], int n)
{
    int i, j, sum = 0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i=j || i+j==n-1)
                sum = sum + a[i][j];
        }
    }
    return sum;
}
*/
/*
void swap1(int c[])
{
    int t;
    t=c[0];
    c[0]=c[1];
    c[1]=t;
}

void swap2(int c0,int c1)
{
    int t;
    t=c0;
    c0=c1;
    c1=t;
}

int main( )
{
    int a[2]={3,5},b[2]={3,5};
    swap1(a);
    swap2(b[0],b[1]);
    printf("%d %d %d %d\n",a[0],a[1],b[0],b[1]);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
     int b[3][3]={0,1,2,0,1,2,0,1,2},i,j,t=0;

     for(i=0;i<3;i++)
         for(j=i;j<=i;j++)
           {
                t=t+b[t][j];
                printf("%d\n",t);
           }

     return 0;
}
*/
/*
#include <stdio.h>   //日期显示

int main ()
{
    int year,mouth,day;
    printf("Enter a date(mm/dd/yy):");
    scanf("%d/%d/%d",&mouth,&day,&year);
    printf("%04d.%02d.%02d",year,mouth,day);
    return 0;
}
*/
/*
#include <stdio.h>   //产品信息格式化

int main ()
{
    int item,year,month,day;
    float unit;
    printf("Enter item number:\n");
    scanf("%d",&item);
    printf("Enter unit price:\n");
    scanf("%f",&unit);
    printf("Enter purchase date (yy mm dd):\n");
    scanf("%d%d%d",&year,&month,&day);
    printf("Item, Unit Purchase\n");
    printf("%-9d$%-9.2f%02d/%02d/%02d\n",item,unit,month,day,year);
    return 0;
}
*/
/*
#include <stdio.h>   //计算两个数的平方和
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y;
    printf("Please input x and y:");
    scanf("%f,%f",&x,&y);
    printf("Result = %.2f\n",pow(x,2) + pow(y,2));
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int x,x1,x2,x3,x4,x12,x34;
    printf("Input x:\n");
    scanf(stdio"%d",&x);
    x = abs(x);
    x1 = x % 10;
    x2 = (x - x1) / 10 % 10;
    x3 = (x - x1 - 10 * x2) / 100 % 10;
    x4 = (x - x1 - 10 * x2 - 100 * x3) / 1000 % 10;
    printf("y = %d\n",x1 * 1000 + x2 * 100 + x3 * 10 + x4);
    x34 = x2 + x1 * 10;
    x12 = x4 + x3 * 10;
    printf("a = %d,b = %d\n",x34,x12);
    printf("result = %d\n",(int) (pow(x34,2) + pow(x12,2)));
    return 0;
}
*/
/*
#include <stdio.h>  //计算s=1-1/3+1/5-1/7+……+1/(2n+1)
void fun(float*sn, int n);
void main()
{
    int n;
    float s1;
    printf("Please input:");
    scanf("%d", &n);
    fun (&s1,n);
    printf("s1 = %f\n", s1);
}

void fun (float*sn,int n)
{
    float s = 0.0, w, f =-1.0;
    int i = 0;
    for (i = 0;i<=n;i++)
    {
        f = (-1)*f;
        w = f/(2*i+1);
        s+=w;
    }
    *sn = s;
}
*/
/*
#include <stdio.h>   //输出任意两整数之间得素数
#include <math.h>

int prime(int a)
{
    int b = 2,flag = 1;
    while (b<=sqrt(a))
    {
        if (a%b==0)
        {
            flag = 0;
        }
        b++;
    }
    if (a==1)
    {
        flag = 1;
    }
    return flag;
}
int main()
{
    int m,n;
    scanf ("%d %d", &m, &n);
    for (;m<=n;m++)
    {
        if (prime(m))
        {
            printf ("%d ", m);
        }
    }
    return 0;
}
*/
/*
#include <stdio.h>   //拆分英文名
#include <math.h>

int main ()
{
    char name[3];
    printf ("intput your English name:\n");
    scanf("%c%c%c",&name[0],&name[1],&name[2]);
    printf("%c%c%c\n",name[0]-32,name[1],name[2]);
    printf("%c:%d\n",name[0],name[0]-96);
    printf("%c:%d\n",name[1],name[1]-96);
    printf("%c:%d\n",name[2],name[2]-96);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int a,b,c,d;
    char op1,op2,op3;
    int sum;
    printf("please input:a+b+c+d\n");
    scanf("%d%c%d%c%d%c%d",&a,&op1,&b,&op2,&c,&op3,&d);
    sum=a+b+c+d;
    printf("sum=%d",sum);
    return 0;
}
*/
/*
#include <stdio.h>   //计算体指数
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Input weight,height:\n");
    int w,h;
    float x;
    scanf("%d,%d",&w,&h);
    printf("weight=%d\n",w*2);
    x=h/100.0;
    printf("height=%.2f\n",x);
    printf("t=%.2f\n",w/x/x);
    return 0;
}
*/
/*
#include <stdio.h>   //检测用户错误输入
#include <stdlib.h>

int main()
{
    int a,b,c;
    c=scanf("%d %d",&a,&b);
    if (c==2)
    {
        printf("a=%d,b=%d\n",a,b);
    }
    else
    {
        printf("Input error!\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main(void)
{
    char ch;
    printf("Press a key and then press Enter:");
    ch = getchar();
    printf("You pressed ");
    putchar(ch);
    putchar('\n');
    return 0;
}
*/
/*
#include <stdio.h>   //判断一个整型数据有几位v2.0
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,x,count = 0,a[10],i;
    printf("Please enter the number:\n");
    scanf("%d",&n);
    x = fabs(n);
    for (i=0;i<=9;i++)
        a[i]=0;
    while(x!=0)
    {
        for(i=0;i<=9;i++)
        {
            if (x%10==i)
                a[i]++;
        }
        x/=10;
        count++;
    }
    printf("%d: %d bits\n",n,count);
    for(i=0;i<=9;i++)
    {
        if (a[i] !=0)
            printf("%d: %d\n",i,a[i]);
    }
    system("pause");
    return 0;
}
*/
/*
#include <stdio.h>   //字符'\"'是转义序列

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a = \"%d\",b = \"%d\"\n",a,b);
    return 0;
}
*/
/*
#include <stdio.h>   //一千以内的回文素数
#include <stdlib.h>

int main()
{
    int flag;
    int n;
    int i;
    for (n = 10; n < 1000; n++)
    {
        for (i = 2; i < n; i++)
        {
            flag = 1;
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            if (n / 100 == 0)
            {
                if (n / 10 == n % 10)
                {
                    printf("%4d", n);
                }
            }
            else
            {
                if (n / 100 == n % 10)
                {
                    printf("%4d", n);
                }
            }
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
*/
/*
#include <stdio.h>   //数字字符串转换为整型数
#include <string.h>
int Myatoi(char str[]);
int main()
{
    char str[8];
    printf("Input a string:");
    scanf("%7s",&str);
    Myatoi(str);
    printf("\n");
    return 0;
}
int Myatoi(char str[])
{
    char *p=str;
    int i=0;
    for(;*p!='\0';*p++)
    {
        if('0'>=*p||*p<='9')
        {
           printf("%d",*p-48);
            i++;
        }
    }
   if(i==0)
    printf("%d",i);
}
*/
/*
#include <stdio.h>   //统计重复数字
int CountRepeatStr(char str[],int *tag);
int main()
{
    char str[80];
    int pos,tag;
    printf("Iuput a string:\n");
    gets(str);
    pos=CountRepeatStr(str,&tag);
    printf("%c:%d\n",str[tag],pos);
}
int CountRepeatStr(char str[],int *tag)
{
    int count = 1,max = 1;
    for(int i = 0;str[i]!= '\0';i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
            if(count>+max)
            {
                max=count;
                *tag=i+1;
            }
        }
        else
        {
            count=1;
        }
    }
    return max;
}
*/
/*
#include <stdio.h>   //星期查找
#include <string.h>

int main()
{
    char str[20];
    char Str[][10] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    printf("Please enter a string:\n");
    gets(str);
    int len = strlen(str);
    for(int i=0;i<7;i++)
    {
        if(str[0]==Str[i][0])
        {
            int count = 0;
            for(int j=0;j<len;j++)
            {
                if(str[j] == Str[i][j])
                {
                    count++;
                }
            }
            if(count == len)
            {
                printf("%s is %d\n",str,i);
                return 0;
            }
        }
    }
    printf("Not found!\n");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    union
    {
        int i[2];
        int k;
        int c;
    }t,*s = &t;

    s->i[0] = 10;
    s->i[1] = 20;
    s->k=30;
    printf("%d\n", s->k);
    printf("%d\n", s->i[0]);
    printf("%d\n", s->c);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    FILE *fp;
    int i,k=0,n=0;
    fp=fopen("d1.dat","w");

    if (fp == NULL)
    {
        printf("cannot open the file.\n");
        exit(0);
    }

    for(i=1;i<4;i++)
    {
        fprintf(fp,"%d",i);
    }
    fclose(fp);

    fp=fopen("d1.dat","r");
    if (fp == NULL)
    {
        printf("cannot open infile.\n");
        exit(0);
    }

    fscanf(fp,"%d%d",&k,&n);
    printf("%d %d\n",k,n);
    fclose(fp);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int a;
    for(a=100;a<=200;a++)
    {
        if(a%4==2&&a%7==3&&a%9==5)
           {
               printf("%d\n",a);
           }
    }
    return 0;
}
*/
/*
#include <stdio.h>   //闰年判断
#include <math.h>

int main()
{
    int year;
    int n;
    printf("input year:");
    n=scanf("%d",&year);
    if(n==1)
    {
        if(((year%4==0)&&(year%100!=0))||(year%400==0))
           {
               printf("Yes\n");
           }
           else
           {
               printf("No\n");
           }
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>   //日期显示

int main()
{
    int a,b,c;
    printf("Enter a date(mm/dd/yy):\n");
    scanf("%d/%d/%d",&a,&b,&c);
    printf("You entered the date:%04d.%02d.%02d\n",c,a,b);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    float a;
    int b;
    scanf("%f %d",&a,&b);
    if(b==1)
    {
        printf("%.2f",a=-a);
    }
    if(b==2)
    {
        printf("%.2f",a=a*a);
    }
    if(b==3)
    {
        printf("%d",(int)a);
    }
    if(b==4)
    {
        printf("EXIT");
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main()
    {
        int i,n=0;
        float num[9],sum=0;

        for(i=1;i<=9;i++)
        {

           scanf("%d",&num[i]);
            sum+=num[i];
        }

        for(n=0;num[9]<sum/9;n++)

        printf("%d",n);
        return 0;
    }
*/
/*
#include <stdio.h>

int main()
{
    int arr[8];
    int sum=0,count;
    for(int i=0;i<=8;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float avg=sum/9.0;
    for(int i=0;i<8;i++)
    {
        if (avg>arr[i])
        count++;
    }
    printf("%d",count);
    return 0;
}
*/
/*
#include <stdio.h>   //计算一组数据的平均数和小于平均数的元素的个数并输出

int getBelowAvg(int *p, int N);

int main()
{
    int A[]={11,20,44,35,77,54,12,69,21};
    printf("%d\n",getBelowAvg(A, 9));
    return 0;
}

int getBelowAvg(int A[], int N)
{
    float avg=0.0;
    int i;
    int sum=0;
    int *p=A;
    int count=0;
    int *temp=p;
    for(i=0;i<N;i++)
    {
        sum+=*temp;
        temp++;
    }
    avg=1.0*sum/N;
    printf("%f\n",avg);
    for(i=0;i<N;i++)
    {
        if(p[i],avg)
            count++;
    }
    return count;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
  int i ,j;
  int count = 0;
  for(i = 101;i<1000;i+=2)
  {
    for(j = 2;j<sqrt(i);j++)
    {
      if(i%j==0)
      {
        break;
      }
    }
    if(j>sqrt(i))
    {
      count++ ;
    }
  }
  printf("%d",count);
  return 0;
}
*/
/*
#include <stdio.h>   //猜数游戏
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#define MAX_NUMBER 100
#define MIN_NUMBER 1
#define MAX_TIMES 7
int MakeNumber(void);
void GuessNumber(int number);

int main(void)
{
    int number;
    int count;
    srand (time(NULL));
    do{
        number = MakeNumber();
        GuessNumber(number);
        printf("Continue?(Y/N):");
        count = getchar();
        while (getchar() != '\n')
        {
            ;
        }
    }while(count != 'N' && count != '\n');
    return 0;
}

int MakeNumber(void)
{
    int number;
    number = (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;
    assert(number >= MIN_NUMBER && number <= MAX_NUMBER);
    return number;
}

void GuessNumber(int number)
{
    int guess;
    int times = 0;
    assert(number >= MIN_NUMBER && number <= MAX_NUMBER);
    do{
        times++;
        printf("Round %d:", times);
        scanf("%d", &guess);
        while (getchar() != '\n')
        {
            ;
        }
        if (guess > number)
        {
            printf("Wrong! Too high.\n");
        }
        else if(guess < number)
        {
            printf("Wrong! Too low\n");
        }
    }while (guess != number && times < MAX_TIMES);
    if (guess == number)
    {
        printf("Congratulations! You're so cool!\n");
    }
    else
    {
        printf("Mission failed after %d attempts.\n", MAX_TIMES);
    }
}
*/
/*
#ifndef YESNO_H_INCLUDED
#define YESNO_H_INCLUDED
extern char UserInput;
int YesOrNo(void);
#endif
#include <ctype.h>
#include <stdio.h>
char UserInput;
static void CleanStdin(void)
{
    while (getchar() != '\n')
    {
        ;
    }
}
int YesOrNo(void)
{
    char answer;
    int result = -1;
    do
    {
        printf("(Y/N)");
        UserInput = getchar();
        answer = toupper(UserInput);
        if (answer == 'Y')
        {
            result = 1;
        }
        else if (answer == 'N')
        {
            result = 0;
        }
        else
        {
            printf("Input error.Please type 'Y' or 'N'\n");
        }
        CleanStdin();
    } while (result != 1 && result != 0);
    return result;
}
#include <stdio.h>
#include "yesno.h"
int main(void)
{
    printf("Do you love Lady Gaga?");
    if (YesOrNo())
    {
        printf("oh yes, we love her too!\n");
    }
    else
    {
        printf("Exactly! we love Michael Jackson forever!\n");
    }
    printf("Your input is '%c')\n",UserInput);
    return 0;
}
*/
/*
#include <stdio.h>    //迭代法计算阶乘

int main (void)
{
    int n,i;
    long result = 1;
    printf("Input n:");
    scanf("%d", &n);
    for (i = 1;i <= n; i++)
    {
        result *= i;
    }
    if (n >= 0)
    {
        printf("%d! = %ld\n", n, result);
    }
    return 0;
}
*/
/*
#include <stdio.h>   //递归法计算阶乘
long fact(long n);

int main(void)
{
    int n;
    long result;
    printf("Input n:");
    scanf("%d", &n);
    result = fact(n);
    if (result != 0)
    {
        printf("%d! = %ld\n", n, result);
    }
}

long fact(long n)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}
*/
/*
#include <stdio.h>   //斐波那契数列（兔子繁殖问题）
#define YEAR 12

int main(void)
{
    int f[YEAR+1] = {0,1,2};
    int month;
    for (month=3; month<=YEAR; month++)
    {
        f[month] = f[month-1] + f[month-2];
    }
    for (month=1; month<=YEAR; month++)
    {
        printf("%d\t", f[month]);
    }
    printf("\nsum = %d\n", f[YEAR]);
    return 0;
}
*/
/*
#include <stdio.h>   //描述斐波那契数列

int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;

    while(n>2)
    {
        c = a+b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d",&n);
    ret = Fib(n);
    printf("ret = %d\n",ret);
    return 0;
}
*/
/*
#include <stdio.h>   //二分查找

int binary_search(int arr[], int k)
{
    int sz = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = sz-1;

    while(left<=right);
    {
        int mid = (left+right)/2;
        if(arr[mid] < k)
        {
            left = mid+1;
        }
        else if(arr[mid] > k)
        {
            right = mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int ret = binary_search(arr,k);
    if(ret == -1)
    {
        printf("找不到指定的数字\n");
    }
    else
    {
        printf("找到了，下标是：%d\n",ret);
    }
    return 0;
}
*/
/*
#include <stdio.h>


int Max(int x,int y)
{
    int result = (x>y) ? x : y;
    return result;
}

int main(void)
{
    int a = 30;
    int b = 20;
    int larger = Max(a,b);
    printf("%d is larger.\n", larger);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a;
    float b;
    scanf("%d",&a);
    if(a<=5000&&a>0)
    {
        b=0;
        printf("%.2f",b);
    }
     else if(a>5000&&a<=8000)
    {
        b=(a-5000)*0.03;
        printf("%.2f",b);
    }
    else if(a>8000&&a<=12000)
    {
        b=3000*0.03+(a-8000)*0.1;
        printf("%.2f",b);
    }
    else if(a>12000&&a<=25000)
    {
        b=3000*0.03+4000*0.1+(a-12000)*0.2;
        printf("%.2f",b);
    }
    else if(a>25000)
    {
        b=3000*0.03+4000*0.1+13000*0.2+(a-25000)*0.25;
        printf("%.2f",b);
    }
    return 0;
}
*/
/*
#include <stdio.h>

void Swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int main()
{
    int x;
    int y;
    scanf("%d %d",&x,&y);
    Swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

#define MAXN 10

struct student{
    int num;
    char name [20];
    int score;
    char grade;
};





int main()
{
    struct student stu[MAXN]={{31001,"annie",85,'B'},{31002,"boony",75,'C'},{31003,"caarol",70,'C'},{31004,"dan",84,'B'},{31005,"susan",90,'A'},{31006,"paul",69,'D'},{31007,"pam",60,'D'},{31008,"apple",50,'E'},{31009,"nancy",100,'A'},{31010,"bob",78,'C'}};
    int n,i,cnt=0;
    for(i=0;i<n;i++)
    {
        if(stu[i].score<60)
        {
            cnt++;
        }
        printf("The count:%d",cnt);
        printf("The grade:\n");
        printf("%d",stu[i].num);
        printf("%s",stu[i].name);
        printf("%s\n",stu[i].grade);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char n=0;
    scanf("%c",&n);

    int i=0;
    int j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c",n);
        }
        printf("\n");
    }
        return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d%d%d%d",a%10,a/10%10,a/100%10,a/1000);
    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    for (i = 10000; i <= 99999; i++)
    {
        int a = (i / 10000) * (i % 10000);
        int b = (i % 1000) * (i / 1000);
        int c = (i % 100) * (i / 100);
        int d = (i % 10) * (i / 10);
        if (a + b + c + d == i)
            printf("%d ", i);
    }
    return 0;
}
*/

