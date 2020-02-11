#include<stdio.h>
void towerofhanoi(int num,char start,char end,char mid)
{
   if(num==1)
   {
      printf("\nMove the disc 1 from disc %c to %c",start,end);
     
   }
   else
   {
     towerofhanoi(num-1,start,mid,end);
     printf("\nMove the disc %d from %c to %c",num,start,end);
     towerofhanoi(num-1,mid,end,start); 

   }


}
 void main()
 { char s,m,e;
   int n; 
   printf("\nenter the number of disc, start disc,end disc,mid disc respectively :\t");
   scanf("%d\t%c\t%c\t%c",&n,&s,&e,&m);
   towerofhanoi(n,s,e,m);
 }
