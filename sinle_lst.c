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
	  temp->next=*p;
 34   *p=temp;
 35  }
 36  else
 37  {
 38    temp1=*p;
 39    while(temp1->next)
 40     temp1=temp1->next;
 41  temp1->next=temp;
 42  temp->next=0;
 43  }
 44
 45 }
 46 void delete_node(ST **ptr)
 47 {
 48  int num;
 49  ST *temp,*temp1;
 50  printf("enter rollno\n");
 51  scanf("%d",&num);
 52  temp=*ptr;
 53  while(temp)
 54  {
 55    if(temp->rollnum==num)
 56    {
 57      if(temp==*ptr)
 58        *ptr=temp->next;
 59      else
 60       temp1->next=temp->next;
 61      free(temp);
 62      break;
          }
 64    temp1=temp;
 65    temp=temp->next;
 66  }
 67  if(temp==0)
 68   printf("node is not present\n");
 69 }
 70 int main()
 71 {
 72 int ch;
 73 ST *hp=0;
 74   do
 75   {
 76     printf("1.add begin\n2.add end\n3.delete_begin\n4.delete_end\n5.display\n6.exit\nEnter your choice\n");
 77      scanf("%d",&ch);
 78      switch(ch)
 79      {
 80       case 1:add_begin(&hp);break;
 81       case 2:add_end(&hp);break;
 82       case 3:delete_node(&hp);break;
 83       case 4:delete_node(&hp);break;
 84       case 5:display(hp);break;
 85       case 6:exit(0);
 86       default:printf("Invalid choic\n");
 87      }
 88   }while(1);
 89 }
