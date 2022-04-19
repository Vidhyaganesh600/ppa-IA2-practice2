  /*#include<stdio.h>
int input()
{
  int n;
  printf("enter any number\n");
  scanf("%d",&n);
  return n;
}
int gcd(int a, int b)
{
  int h;
  for(int i=1;i<=a && i<=b;i++)
    {
      if(a%i==0 && b%i==0)
        h=i;
    }
  return h;
}
void output(int a, int b, int gcd)
{
  printf("the gcd of the two given numbers is %d",gcd);
}
int main()
{
  int a,b,g;
  a=input();
  b=input();
  g=gcd(a,b);
  output(a,b,g);
  return 0;
}*/

/*int main()
{
  int a,b,gcd;
  printf("enter any two numbers\n");
  scanf("%d %d",&a,&b);
  for(int i=1;i<=a && i<=b;i++)
    {
      if(a%i==0 && b%i==0)
        gcd=i;
    }
  printf("the gcd of %d and %d is %d",a,b,gcd);
  return 0;
}*/
#include<stdio.h>
int input()
{
  int a;
  printf("Enter any number\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a, int b)
{
  int h;
  for(int i=1;i<=a && i<=b;i++)
    {
      if(a%i==0 && b%i==0)
        h=i;
    }
  return h;
}
void output(int a,int b,int gcd)
{
  printf("the gcd of %d and %d is %d\n",a,b,gcd);
}
int main()
{
  int a,b,g;
  a=input();
  b=input();
  g=gcd(a,b);
  output(a,b,g);
  return 0;
}