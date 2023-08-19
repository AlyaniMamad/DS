#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    gets(str);

    int st =0;
    int end =strlen(str) - 1;

    for(int st=0;st<end;st++){
        char temp = str[st];
        str[st] = str[end];
        str[end] = temp;
        end--;
    }
    printf("%s",str);

    return 0;
}