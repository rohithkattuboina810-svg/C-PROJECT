#include<stdio.h>
struct student
{
  char name[50];
  int rollno;
  float mark;
  char city[50];
  char dream[50];
  };
  void read(struct  student s[],int n)
  {
   int i;
   for(i=0;i<n;i++)
   {
      printf("\nEnter student %d details\n",i+1);
      printf("Name:");
      scanf("%s",s[i].name);
      printf("Roll Number:");
      scanf("%d",&s[i].rollno);
      printf("Mark:");
      scanf("%f",&s[i].mark);
      printf("Dream:");
      scanf("%s",s[i].dream);
      }
      }
      void write(struct student s[],int n)
      {
       int i;
       for (i=0;i<n;i++)
       {
       printf("\nStudent %d Details\n",i+1);
       printf("Name: %s\n",s[i].name);
       printf("Roll Number:%d\n",s[i].rollno);
       printf("Mark:%.2f\n",s[i].mark);
       printf("City: %s\n",s[i].city);
       printf("Dream: %s\n",s[i].dream);
       }
      }
      int main()
      {
       struct student s[100];
       int n;
       printf("Enter number of students:");
       scanf("%d",&n);
       if (n<1||n>100)
       {printf("invalid number of students!\n");
       return 1;
       }
       read(s,n);
       write(s,n);
       return 0;
       }