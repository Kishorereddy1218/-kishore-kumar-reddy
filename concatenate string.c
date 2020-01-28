#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int x,y;
    double a,b;
    char f[100];
    scanf("%d",&x);
    scanf("%lf",&a);
    scanf(" %[^\n]s",f);
    y=i+x;
    b=d+a;
    printf("%d \n",y);
    printf("%0.1lf \n",b);
    printf("%s",s);
    printf("%s",f);
    return 0;
}
