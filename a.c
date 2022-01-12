#include<stdio.h>
  2 #include<stdlib.h>
  3 typedef struct st
  4 {
  5 int rollnum;
  6 struct st *next;
  7 }ST;
  8 void add_begin(ST **p)
  9 {
 10   ST *temp;
 11   temp=malloc(sizeof(ST));
 12   printf("Enter the data\n");
 13   scanf("%d",&temp->rollnum);
 14   temp->next=*p;
 15   *p=temp;
 16 }
 17 void display(ST *ptr)
 18 {
 19 while(ptr)
 20 {
 21 printf("%d\n",ptr->rollnum);
 22 ptr=ptr->next;
 23 }
 24 }
 25 void add_end(ST **p)
 26 {
 27  ST *temp,*temp1;
 28  temp=malloc(sizeof(ST));
 29  printf("Enter the data\n");
 30  scanf("%d",&temp->rollnum);
 31  if(*p==0)
 32  {
