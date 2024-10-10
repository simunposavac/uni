#include <stdio.h>

int main(){
    int a = 0;
    short b = 1;
    char c = 65;
    float d = 0.2;

    printf("%d %d %c %f\n",a,b,c,d);
    printf("%d %d %d %d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));

    return 0;
}