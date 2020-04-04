#include<stdio.h>
#include<conio.h>
int main()
{ int a[20],b[20],n,m,k,i,j,l;
printf("enter the size of  array one:");
 
 scanf("%d",n);
 printf("\nenter the size of  array two:");
 
 scanf("%d",m);
 l=n+m;
 
 printf("enter the srted array one:");
 for(i=0;i<n;i++);
 scanf("%d",a[i]);
 
 printf("enter the sorted array two:");
 for(j=0;i<m;j++);
 scanf("%d",b[j]);
 i=0;
 j=0;
 k=0;
 while(k<l)
 {  while(i<n&&j<m)
	 {
		 if(a[i]<b[j])
	   {
		 c[k]=a[i];
		 i++;
		 
	   }
        else 
		{
		 c[k]=b[j];
			j++;
			
			
		}			
	    k++;
	 }	 
	 if(i==n&&j<m)
	 {
		 
		  c[k]=b[j];
		  j++;
		  k++;
		 
	 }
	  else(i<n&&j==m)
	  {
		  c[k]=a[i];
		  i++;
		  k++;
		  
		  
		  
	  }
	 
 }


return 0;


}