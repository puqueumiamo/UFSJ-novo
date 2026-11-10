#include<stdio.h>
typedef enum{
    CREDITO, DEBITO
}TipoTransacao;
typedef struct{
    float valor;
    TipoTransacao tipo;
}Transacao;
typedef struct{
    int numero;
    char titular[50];
    Transacao transacoes[100];
    int qt;
}Conta;
float obterSaldo(Conta c){
    float saldo=0;
    for(int i=0; i<c.qt; i++){
        if(c.transacoes[i].tipo==CREDITO){
            saldo+=c.transacoes[i].valor;
        }
        else{
            saldo-=c.transacoes[i].valor;
        }
    }
    return saldo;
}
void printConta(Conta s){
    printf("Nro: %d\n", s.numero);
    printf("Titular: %s\n", s.titular);
    printf("Saldo: %.2f\n", obterSaldo(s));
}
int status(Conta d){
    if(obterSaldo(d)<0){
        return 1;
    }
    else{
        return 0;
    }
}
void devedores(Conta contas[], int n){
    for(int i=0; i<n; i++){
        if(status(contas[i])==1){
            printConta(contas[i]);
        }
    }
}
int main(){
    Conta contas[50];
    for(int i=0; i<50; i++){
        scanf("%d", &contas[i].numero);
        scanf("%s", contas[i].titular);
        scanf("%d", &contas[i].qt);
        for(int j=0; j<contas[i].qt; j++){
            int t;
            scanf("%f", &contas[i].transacoes[j].valor);
            scanf("%d", &t);
            if(t==0){
                contas[i].transacoes[j].tipo=CREDITO;
            }
            else{
                contas[i].transacoes[j].tipo=DEBITO;
            }
        }
    }
    devedores(contas, 50);
    return 0;
}
