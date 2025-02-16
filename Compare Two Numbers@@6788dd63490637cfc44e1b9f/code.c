#include <stdio.h>
int main(){
    int First,Second;
    scanf("%d",&First);
    scanf("%d",&Second);

    if(First==Second){
        printf("Equal");
    }
    else if(First>Second){
        printf("First");
    }
    else{
        printf("Second");
    }
    return 0;
}