#include<stdio.h>
#include<string.h>
main()

{
    char s[30];
    char ch;
    int n,count=0,i,j=0,a[30];
    printf("enter the text\n");
    scanf("%[^\n]",s);
    printf("enter the character to be searched\n");
    scanf(" %c",&ch);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==ch)
        {
            count++;
            a[j]=i+1;
            j++;
        }
    }
    if(count>0)
    printf("the character has occured %d times\nfirst occured in position %d",count,a[0]);
    else
    printf("the character has not occured\n");
    
}

