// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i = 1 ; i<=num ; i++){
        for(int j = num ; j<=i;j++){
            printf("A ");
        }
        printf("\n");
    }
}