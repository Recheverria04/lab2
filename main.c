#include <stdio.h>
int main()
{
  int n[10], count =0;
  float ave = 0, sum = 0, realave = 0;
 printf("Enter Data: ");
 for(int i=0;i<10;i++)
   {
     scanf("%d", &n[i]);
     if(n[i]<0)
       {break;}
     count = count + 1;
     ave  = ave + n[i];
   }
 ave = ave/count;
 printf("The initial average is: %f\n", ave);
 for(int i=0;i<count;i++)
   {
     if(n[i]>ave)
       {
	 realave = realave + n[i];
	 sum = sum + 1;
       }
   }
 printf("The real average is: %f\n", realave/sum);
 return 0;
}
# lab2
