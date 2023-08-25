
// C program to demonstrate
// example of toupper() function.
#include <ctype.h>
#include <stdio.h>

int main(){

    char str[100];

    printf("\nEnter String : ");
    gets(str);

    int res=0;

    for(int i=0;str[i]!='\0';i++){
        str[i]=toupper(str[i]);
        res+=(str[i]-64);
    }
    printf("%d",res);

    return 0;
}