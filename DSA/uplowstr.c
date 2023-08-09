#include <stdio.h>
#include <string.h>

int main(){

    char str[100],up[100],low[100];

    printf("\nEnter String : ");
    gets(str);

    int n=strlen(str);

    int j=0,k=0;
    for(int i=0;i<n;i++){
        if((str[i]>='A' && str[i]<='Z')||str[i]==' '){
            up[j]=str[i];
            j++;
        }else if(str[i]>='a' && str[i]<='z'){
            up[j] = str[i]-32;
            j++;
        }
        

        if((str[i]>='a' && str[i]<='z')||str[i]==' '){
            low[k] = str[i];
            k++;
        }else if(str[i]>='A' && str[i]<='Z'){
            low[k] = str[i]+32;
            k++;
        }
    }
    up[j] = '\0';
    low[k] = '\0';

    printf("UPPER : %s",up);
    printf("\nlower : %s",low);

    return 0;
}