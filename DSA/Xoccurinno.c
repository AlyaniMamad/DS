#include <stdio.h>

int main(){

    int no = 897982;
    int x=9,count=0;

    while(no!=0){
        int rem = no%10;
        if(x==rem)
            count++;
        no/=10;
    }
    printf("%d",count);

    return 0;
}