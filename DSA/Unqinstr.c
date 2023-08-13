#include <stdio.h>
#include <string.h>


int main(){

    char str[100];
    int freq[256]={0};

    printf("\nEnter Str : ");
    gets(str);

    int n = strlen(str);

    for(int i=0;i<n;i++){
        freq[str[i]]++;
    }

    printf("\nNon - repeating Chars Are : ");

    for(int i=0;i<256;i++){
        if(freq[i]==1){
            printf(" %c ",i);
        }
    }

    return 0;
}