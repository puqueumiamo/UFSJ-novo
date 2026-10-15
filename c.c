#include<stdio.h>
double mediaVetor(double v[], int n){
    double s=0, m=0;
    for(int i=0; i<n; i++){
        s+=v[i];
    }
    m=s/n;
    return m;
}
int main(){
	int n;
	scanf("%d", &n);
	double v[n];
	for(int i=0; i<n; i++){
        scanf("%lf", &v[i]);
    }
	double media = mediaVetor(v, n);
	printf("%.2lf\n", media);
	return 0;
}
