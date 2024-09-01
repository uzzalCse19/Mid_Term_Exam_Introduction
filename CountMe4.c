#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char str[10001];
    int cnt[26]={0},i=0;
    scanf("%s",&str);
    while(str[i]!='\0')
    {
        cnt[str[i]-'a']++;
            i++;
    }
    for(int i=0;i<26;i++){
   if(cnt[i]>0) printf("%c - %d\n",i+'a',cnt[i]);
    }
    return 0;
}