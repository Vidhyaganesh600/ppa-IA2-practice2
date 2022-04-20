/*#include<stdio.h>
void input_string(char *a)
{
  char i;
  printf("enter any string\n");
  scanf("%s",a[i]);
}
char str_reverse(char *a)
{
  int i,m=0;
  for(i=0;a[i]!='\0';i++)
    m++;
  return m;
}
void output(char *a,char *reversea)
{
  printf("the reverse of the string is:\n");
  int i;
  for(i=reversea-1;a[i]!='\0';i--)
    printf('%c',a[i]);
}
int main()
{
  char a[100];
  input_string(a);
  int reverse_a;
  reverse_a=str_reverse(a);
  output(a,reverse_a);
  return 0;
}



/*#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("enter the number of triangles\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("enter the base and height\n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
     t[i]= input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5 * t->base * t->altitude;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
     find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle smallest;
  smallest=t[0];
  for(int i=1;i<n;i++)
    {
      if(smallest.area > t[i].area)
      {
        smallest=t[i];
      }
    }
  return smallest;
}

void output(int n, Triangle t[n], Triangle smallest)
{
  for(int i=0;i<n;i++)
    {
      printf("%0.1f,%0.1f\n",t[i].base,t[i].altitude);
    }
printf("the smallest triangle is base=%0.1f and altitude =%0.1f and having area =%0.1f\n",smallest.base,smallest.altitude,smallest.area);
}
int main()
{
  int n=input_n();
  Triangle t[n];
  input_n_triangles(n,t);
  find_areas_n(n,t);
  Triangle smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}*/

#include<stdio.h>
void input(char *a)
{
printf("Enter any string \n");
scanf("%s",a);
}
int reverse(char *a)
{
int p;
for(int i=0;a[i]!='\0';i++)
{
p=i;
}
return p;
} 
void output(char *a, int reverse)
{
 for(int i=reverse;i>=0;i--)
printf("%c",a[i]);
}
int main()
{
char s[50];
int result;
input(s);
result=reverse(s);
output(s, result);
return 0;
}