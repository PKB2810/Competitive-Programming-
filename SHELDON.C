#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i ,c, j,k;
  int * a,n,x;
  printf("Enter how many\n"); //total no of numbers
  scanf("%d",&n);

  a=(int * )malloc(sizeof(int)*n);
  printf("Enter size\n"); //sum of nmbers
  scanf("%d",&x);
  printf("Enter no\n"); //all numbers
  for(i=0;i<n;i++)
   scanf("%d",(a+i));
  for(i=0;i<n-2;i++)
  {
   for(j=i+1;j<n-1;j++)
   {
     for(k=j+1;k<n;k++)
     {
      c= a[i]+a[j]+a[k];
      if(c==x)
	   break;
      }
	if(c==x)
	   break;
    }
     if(c==x)
	   break;

  }
   if(i < (n-2) && j < (n-1) && k< n)
     printf("True");
   else
     printf("False");

return 0;
}
