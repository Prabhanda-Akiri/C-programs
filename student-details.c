#include<stdio.h>

struct stud
{
    int no;
    char name[20];
    int per;
};

main()
{
    typedef struct stud record;
    record *ptr;
    int n,i,j,k;
    printf("enter the class size\n");
    scanf("%d",&n);
    ptr=(record *)calloc(n,sizeof(record));
    for(i=0;i<n;i++)
    {
        printf("enter the details of the student %d\n",i+1);
        scanf("%d%s%d",&(ptr+i)->no,&(ptr+i)->name,&(ptr+i)->per);
        
    }
    
    for(i=0;i<n;i++)
    {
        printf("the details of the student %d\n",i+1);
        printf("%d   %s  %d\n",(ptr+i)->no,(ptr+i)->name,(ptr+i)->per);
        
    }
}
