#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);

    if(number%number==0){
        printf("Prime");

    }
    else{
        printf("Not prime");
    }
    return 0;
}