#include<stdio.h>
int main()
{
 /*
   ----1     - space        
   ---22
   --333
   -4444
   55555     
   
   ----          
 */
  for(int i=1; i<=5; i++)
  {
	  for(int j=5; j>i; j--)
	  {
		  printf("-");
	  }
	  for(int k=1; k<=i; k++)  
	  {
		  printf("%d",i);
		  //1
		  //22
		  //333
	  }
	  printf("\n");
	  
  }	  
  
  return 0;
}

