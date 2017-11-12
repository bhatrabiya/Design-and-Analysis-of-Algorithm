#include<stdio.h>

void hanoi(char,char,char,int);

void main()
{

  int num;

  printf("Enter the number of disks");
  scanf("%d",&num);
  printf("Tower of hanoi for %d number of disks",num);
  hanoi('A','B','C',num);
}

void hanoi(char from,char to,char other,int n)
{
  if(n<=0)
    {
      printf("Illehal no of disks");
      if(n==1)
	printf("move disks from %c to %c",from,other);
      if(n>1)
	{
	  hanoi(from,other,to,n-1);
	  hanoi(from,to,other,1);
	  hanoi(to,from,other,n-1);
	  
	}
    }
}
	
