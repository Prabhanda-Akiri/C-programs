
#include<stdio.h>
#include<string.h>

main()

{
    int n,i;
    char s[30];
    
    printf("enter the contents\n");
    scanf("%[^\n]",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        s[i]=s[i]-32;
    }
    printf("%s",s);
    
}
