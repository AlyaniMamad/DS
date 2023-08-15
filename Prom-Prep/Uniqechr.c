#include <stdio.h>
#include <string.h>

int main(){

    char str[100],unq[100];
    int i,j;

    printf("\nEnter String : ");
    gets(str);

    int len = strlen(str);

    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i==j){
                continue;
            }else{
                if(str[i]==str[j]){
                    break;
                }
            }
        }
        
    }
    

    printf("%s",str);
    printf("\n%s",unq);


    return 0;
}