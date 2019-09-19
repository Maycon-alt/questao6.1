#include <stdio.h>
#include <iostream>
#include <cstdio>

typedef struct pilha{
    int* vetor;
    int tam;
    int topopilha1;
    int topopilha2;
}pilha;

int main()
{
    pilha p;
    bool a;
    int tamv, aux;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &tamv);
    
    // criar pilha.
    p.vetor =new int[tamv];
    p.tam = tamv;
    p.topopilha1 = -1;
    p.topopilha2 = tamv;
    
    do{
        printf("digite 1 para inserir\n");
        printf("digite 2 para remover\n");
        printf("digite 0 para sair\n");
        scanf("%d", &aux);
        
        if(aux==1){
            int num;
            printf("digite o numero que sera adicionado\n");
            scanf("%d", &num);
            a = push(&p, num);
            if(a==true)printf("adicionado\n");
            else printf("erro ao adicionar\n");
        }
        else if(aux==2){
            a = pop(&p);
            if(a==true) printf("removido\n");
            else printf("erro ao remover\n");
        }
        
    }while(aux!=0);
    

    return 0;
}

bool pilha_cheia(pilha* p){
    if(p->topopilha2==topopilha1+1)return true;
    else return false;
}
bool pilha_vazia(pilha* p){
    if(p->topopilha2==tamv && p->topopilha1==-1)return true;
    else return false;
}

bool push(pilha*p, int num){
    int aux;
    printf("digite o numero da pilha: (1 ou 2)\n");
    scanf("%d", &aux);
    if(aux==1){
        if(pilha_cheia(p)==true)return false;
        p->topopilha1++;
        p->vetor[p->topopilha1] = num;
        return true;
    }
    if(aux==2){
        if(pilha_cheia(p)==true)return false;
        p->topopilha2--;
        p->vetor[p->topopilha2] = num;
        return true;
    }
}

bool pop(pilha*p){
    int aux;
    printf("digite o numero da pilha: (1 ou 2)\n");
    scanf("%d", &aux);
    
    if(aux==1){
        if()
    }
}











