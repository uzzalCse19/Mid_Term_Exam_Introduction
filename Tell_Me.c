#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,test=0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        scanf("%d",&x);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x){
             printf("YES\n");
             test=1;
             break;
            }
            
        }
        if(test==0) printf("NO\n");
    }
    return 0;
}