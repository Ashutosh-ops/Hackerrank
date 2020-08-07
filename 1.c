#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int a;
    double b;
    char c[100];

    scanf("%d",&a);
    scanf("%lf\n",&b);
    scanf("%[^\n]s",&c);

    printf("%d\n%0.1lf\n",(i+a),(d+b));
    printf("%s%s\n",s,c);
    return 0;
}
