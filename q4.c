#include<stdio.h>

int main()
{
  int p,c,b,m,com;
  float per;
  printf("enter marks of physics: \n");
  scanf("%d",&p);
  printf("\n enter marks of chemistry:\n");
  scanf("%d",&c);
  printf("\n enter marks of mathematics:\n");
  scanf("%d",&m);
  printf("\n enter marks of biology:\n");
  scanf("%d",&b);
  printf("\n enter marks of computer:\n");
  scanf("%d",&com);
  per=(p+c+m+b+com)/5.0;
  printf("percentage= %f \n",per);
  if(per>=90)
  {
      printf("GRADE A");
  }
  else if(per>=80)
  {
      printf("GRADE B");
  }
  else if(per>=70)
  {
      printf("GRADE C");
  }
  else if(per>=60)
  {
      printf("GRADE D");
  }
  else if(per>=40)
  {
      printf("GRADE E");
  }
  else
  {
      printf("GRADE F");
  }
  

  return 0;
}
