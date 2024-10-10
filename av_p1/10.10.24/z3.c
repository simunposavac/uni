#include <stdio.h>

int main(){
    char a,b;
    scanf("%c %c",&a,&b);
    printf("%c %c\n",a,b);
    printf("%d %d\n",a,b);  //decimal
    printf("%o %o\n",a,b);  //octal
    printf("%x %x\n",a,b);  //hex
    return 0;
}