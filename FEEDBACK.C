#include<stdio.h>
int main()
{
  FILE *fp;
  int ch;
  fp=fopen("feedback.txt","w");//WRITE MODE
  if(fp==NULL)
  {
    printf("File cannot open");
    return 0;
  }
  fprintf(fp,"Feedback on C programming:\n");
  fprintf(fp,"1.C is a bit tough for me.\n");
  fprintf(fp,"2.But C programming training makes it easy.\n");
  fprintf(fp,"3.It is useful for beginners.\n");
  fprintf(fp,"4.It helps in problem solving.\n");
  fprintf(fp,"5.I like learning C programming.\n");
  fclose(fp);

  fp=fopen("feedback.txt","a");  //APPEND MODE
  if(fp==NULL)
  {
    printf("File cannot open");
    return 0;
  }
  fprintf(fp,"Feedback about C program trainer:\n");
  fprintf(fp,"1.The trainer explains clearly.\n");
  fprintf(fp,"2.The trainer teaches with examples.\n");
  fprintf(fp,"3.The trainer is very helpful.\n");
  fprintf(fp,"4.The trainer clears our doubts.\n");
  fclose(fp);

  fp=fopen("feedback.txt","r");
  if (fp==NULL)
  {
    printf("File cannot open");
    return 0;
  }
  printf("feedback details:\n");
  while((ch=fgetc(fp))!=EOF)
  {
    printf("%c",ch);
  }
  fclose(fp);
  return 0;
}
