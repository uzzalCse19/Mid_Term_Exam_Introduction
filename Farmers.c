#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,m1,m2,din;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&m1,&m2,&din);
        float tem=din-(din*m1/(m1+m2));
        int tem1=din-(din*m1/(m1+m2));
        if(tem !=tem1) printf("%d\n",tem1+1);
        else printf("%d\n",tem1);
    }
    return 0;
}
