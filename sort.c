#include<stdio.h>
#include<stdlib.h>

int main()
{ int a,b,c,d,e,min;
  printf("Enter the number of data you want to enter");
  scanf("%d",&a);
   int i[a];
  for(b=0;b<a;b++)
  scanf("%d",&i[b]);
  min=i[0];
  for(e=0;e<a;e++)
 {for(b=0;b<a;b++)
  {if(min>i[b])
   {c=min;
    min=i[b];
   i[b]=c;}}
   d=i[b];
   i[b]=min;
   min=d;}
  for(b=0;b<a;b++)
  printf("%d",i[b]);
  }
   
  
