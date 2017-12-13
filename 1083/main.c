#include <stdio.h>
#include <stdlib.h>

typedef struct No no;
struct No{
    char c;
    no *prox;
};

typedef  struct pilha Pilha;
struct pilha{
  no *topo;
};

Pilha *cria_pilha(){
    Pilha *novo = (Pilha *)malloc(sizeof(Pilha));
    novo->topo = NULL;
    return novo;
}

no *cria_parentese(char c){
    no *novo = (no *)malloc(sizeof(no));
    novo->prox = NULL;
    novo->c = c;
    return novo;
}

void push(Pilha *plh, char c){
    no *novo = cria_parentese(c);
    if(plh->topo == NULL){
        plh->topo = novo;
    }
    else{
        novo->prox = plh->topo;
        plh->topo = novo;
    }
}

char pop(Pilha *plh){
    no *aux;
    char c;

    if(plh->topo == NULL){
        return 0;
    }
    else{
        c = plh->topo->c;
        aux = plh->topo;
        plh->topo = plh->topo->prox;
        free(aux);
        return c;
    }
}

void libera_pilha(Pilha *plh){
    no *aux;

    if(plh == NULL)
        return;

    while(plh->topo != NULL){
        aux = plh->topo;
        plh->topo = plh->topo->prox;
        free(aux);
    }

    free(plh);
}

int operadores(char c){
    return (c == '+' || c == '-' || c == '/' || c == '*' || c == '^' || c == '<' || c == '>' || c == '#' || c == '=' || c == '.' || c == '|');
}

int operandos(char c){
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

int precedencia(char c){
    if(c == '^')
        return 6;
    if(c == '*' || c == '/')
        return 5;
    if(c == '-' || c == '+')
        return 4;
    if(c == '>' || c == '<' || c == '=' || c == '#')
        return 3;
    if(c == '.')
        return 2;
    if(c == '|')
        return 1;
    return 0;
}

void imprime_posfixa(char exp[]){
    Pilha *plh = cria_pilha();
    char posfix[1001];
    int i=0, j=0;

    while(exp[i] != '\0'){
        if(!operadores(exp[i]) && exp[i] != '(' && exp[i] != ')'){
            posfix[j] = exp[i];
            i++;
            j++;
        }
        else if(exp[i] != '(' && exp[i] != ')'){
            if(plh->topo == NULL || precedencia(exp[i]) > precedencia(plh->topo->c)){
                push(plh, exp[i]);
                i++;
            }
            else if(precedencia(exp[i]) < precedencia(plh->topo->c)){
                while(plh->topo != NULL && plh->topo->c != '('){
                    posfix[j] = pop(plh);
                    j++;
                }
                push(plh, exp[i]);
                i++;
            }
            else{
                posfix[j] = pop(plh);
                push(plh, exp[i]);
                j++;
                i++;
            }
        }
        else if(exp[i] == '('){
            push(plh, exp[i]);
            i++;
        }
        else{
            while(plh->topo != NULL && plh->topo->c != '('){
                posfix[j] = pop(plh);
                j++;
            }
            pop(plh);
            i++;
        }
    }
    while(plh->topo != NULL){
        posfix[j] = pop(plh);
        j++;
    }
    posfix[j] = '\0';
    printf("%s\n", posfix);
    libera_pilha(plh);

}

int verifica_expressao(char exp[]){
    Pilha *plh = cria_pilha();
    int i, erro = 0;

    for(i=0; exp[i]!='\0'; i++){
        if(!operadores(exp[i]) && !operandos(exp[i]) && exp[i] != '(' && exp[i] != ')'){
            return 2; //lexico
        }
    }

    for(i=0; exp[i]!='\0'; i++){
        if(exp[i] == '(')
            push(plh, exp[i]);
        else if(exp[i] == ')' && pop(plh) != '('){
            return 0;
        }
    }
    if(plh->topo != NULL)
        return 0;
    libera_pilha(plh);

    for(i=0; exp[i]!='\0'; i++){
        if(operadores(exp[i]) && operadores(exp[i+1]))
            return 0;
        else if(operandos(exp[i]) && operandos(exp[i+1]))
            return 0;
        else if(exp[i]==')' && exp[i+1]=='(')
            return 0;
        else if(operadores(exp[i]) && exp[i+1]==')')
            return 0;
        else if(operandos(exp[i]) && exp[i+1]=='(')
            return 0;
        else if(exp[i]=='(' && exp[i+1]==')')
            return 0;
        else if(exp[i]=='(' && operadores(exp[i+1]))
                    return 0;
        if(operadores(exp[i]) && exp[i+1] == '\0')
            return 0;
    }

    return 1;
}

int main(){
    char exp[1001], posfix[1001];
    int i, j, n;

    scanf("%d", &n);

    while(fscanf(stdin, "%s", exp) != EOF){
        switch(verifica_expressao(exp)){
            case 0:
                printf("Syntax Error!\n");
                break;
            case 1:
                imprime_posfixa(exp);
                break;
            case 2:
                printf("Lexical Error!\n");
                break;
        }
    }
    return 0;
}
