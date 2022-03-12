#include<stdio.h>

int arr_size();
void input_arr();
int sum();
void output();

int main()
{
  int n = arr_size();
  int a[n];
  void input_arr(n,a);
  int sum = sum(n,a);
  output(sum);
  return 0;
}

 int arr_size()
{
  int n;
  printf("Enter thr number of elements: ");
  scanf("%d",&n);
  return n;
}

void input_arr(int n, int a[n])
{
  printf("Enter the array elements: ");
  for(int i = 0; i  < n; i++ )
    {
      scanf("%d",&a[i]);
    }
}

int sum(int n, int a[n])
{
  int sum = 0;
  for(int i = 0; i < n; i++)
    {
      for(int j = 2; j < a[i]; j++)
        {
          if(a[i]%j==0)
          {
            sum = sum + a[i];
            break;
          }
        }
    }
  return sum;
}

void output(int sum)
{
  printf("The summ of all the composite numbers enetere is %d ",sum);
}