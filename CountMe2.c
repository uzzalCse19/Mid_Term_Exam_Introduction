#include<stdio.h>
int main()
{
    char str[100001];
    scanf("%s",&str);
    int i=0,cons=0;
    while(str[i]!='\0')
    {
     if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' ) cons++;
     i++;
    }
    printf("%d\n",cons);
    return 0;
}