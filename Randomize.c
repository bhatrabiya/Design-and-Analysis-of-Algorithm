#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int repeated(int [],int);
main()
{ 
  int n,i;
  int *num;
  printf("enter the number of elements in the array\n");
  scanf("%d",&n);
  num=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
  {
     printf("enter the number\n");
     scanf("%d",num+i);
  }
  printf("the repeated element is %d\n",repeated(num,n));
  getch();
 }
 int repeated(int num[],int n)
 { 
    int i,j;
    while(1)
   {
     i=rand()%n;
     j=rand()%n; 
     if((i!=j)&&(num[i]==num[j])) return num[i];
   }
 }