#include<stdio.h>
int main(){
    int A[10], b;
    for(int i=0; i<10; i++){
        scanf("%d", &A[i]);
    }
    for(int i=0; i<10; i++){
        if(i==0 || i==1 || i==8){
            b+=A[i];
        }
        if(A[i]%2!=0){
            A[i]=0;
        }

    }
    printf("%d\n", b);
    for(int i=0; i<10; i++){
        printf("%d\n", A[i]);
    }
    return 0;
}
