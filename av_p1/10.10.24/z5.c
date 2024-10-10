#include <stdio.h>

int main(){
    int a = 0;
    short b = 1;
    char c = 65;

    printf("%e %e %e\n",a,b,c);
    printf("%d %d %d\n",sizeof(a),sizeof(b),sizeof(c));

    return 0;
}