#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,small,capital,digit;
    char str[10001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&str);
        int i=0;;
        small=0,capital=0,digit=0;
        while(str[i] !='\0')
        {
            if(str[i]>='a' && str[i]<='z') small++;
            else if(str[i]>='A' && str[i]<='Z') capital++;
            else digit++;
            i++;
        }
        printf("%d %d %d\n",capital,small,digit);
    }
    return 0;
}
