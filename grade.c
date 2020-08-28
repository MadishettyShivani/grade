#include<stdio.h>
main()
{
	float marks;
	printf("enter the marks between 0 to 100\n");
	scanf("%f",&marks);
	if(marks<=100 && marks>=85 )
	{  
	printf("GRADE A");
	}
	else if(marks<=84 && marks>=70)
	{
	printf("GRADE B");	
	}
	else if(marks<=69 && marks>=55)
	{
	printf("GRADE C");
  }
	else if(marks<=54 && marks>=40)
	{
	printf("GRADE D");	  
  }
  else if(marks<40)
  {
  printf("GRADE F");
  }
  else
  { 
  printf("please enter valid number");
	}
}
