#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    for(int i=1;i<num;i++){
        for(int j=0;j<=i;j++){
            printf("%d\n",i );
        }
        printf("\n");
    }
    return 0;
}