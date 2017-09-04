#include<stdio.h>

int main()
{
   FILE *f1,*f2;
   int i=5,j,k,n;
   char c,d;
   
   f1=fopen("file1","w");
   printf("enter the contents in to the first file\n");
   while((c=getchar())!=EOF)
   putc(c,f1);
   fclose(f1);
   
   f2=fopen("file2","w");
   printf("enter the contents in to the second file\n");
   while((c=getchar())!=EOF)
   putc(c,f2);
   fclose(f2);
   
   f1=fopen("file1","r");
   f2=fopen("file2","r");
   
   while((c=getc(f1))!=EOF)
   {
       d=getc(f2);
       if(c!=d)
       {
          i=0;
          break;
       }
   }
   fclose(f1);
   fclose(f2);
   if(i==0)
   printf("the contents in both the files are different\n");
   else
   printf("the contents in both the files are the same\n");
   
}
