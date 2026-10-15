#include<stdio.h>
void eliminaNegativos(float a[], int n){
    float f;
    for(int i=0; i<n; i++){
        f=2*a[i]-10;
        if(f<0){
            a[i]=0;
        }
    }
}
int main(){
	int t;
	scanf("%d", &t);
	float v[t];
	for(int i=0; i<t; i++){
		scanf("%f", &v[i]);
	}
	eliminaNegativos(v, t);
	for(int i=0; i<t; i++){
		printf("%.2f\n", v[i]);
	}
	return 0;
}
