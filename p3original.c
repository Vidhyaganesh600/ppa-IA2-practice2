/*#include<stdio.h>
int input_number()
{
  int a;
  printf("enter any number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  for(int i=2;i<n;i++)
    {
      if((n%i)==0)
      {
        return 0;
        break;
      }
      return 1;
    }
}
void output(int n, int composite)
{
  if(composite==0)
  printf("%d is a composite number\n",n);
  else
    printf("%d is not a composite number\n",n);
}
int main()
{
  int n,cmp;
  n=input_number();
  cmp=is_composite(n);
  output(n,cmp);
  return 0;
}*/
#include<stdio.h>
int input_number()
{
  int n;
  printf("enter any number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{ 
  int cmp=0 ;
  for(int i=1;i<=n;i++)
    {
      if(n%i == 0)
        cmp++;
    }
  return cmp;
    
}
void output(int n, int composite)
{
  if(composite>2)
  {
    printf("%d is a composite number\n",n);
  }
  else
  {
    printf("%d is not a composite number\n",n);
  }
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}