#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();

int main()
{
    int op;
    printf("Escolha um exercicio: \n");
    scanf("%d",&op);
    switch (op){
        case 1:
            ex01();
            break;
        case 2:
            ex02();
            break;
        case 3:
            ex03();
            break;
        case 4:
            ex04();
            break;
        case 5:
            ex05();
            break;
        case 6:
            ex06();
            break;
        case 7:
            ex07();
            break;
        case 8:
            ex08();
            break;
        case 9:
            ex09();
            break;
        case 10:
            ex10();
            break;
        case 0:
            printf("Finalizando o programa\n");
            break;
        default:
            printf("Escolha invalida\n");
    }
    return 0;
}
int ex01()
{
    int a,b;

    //printf("Escolha dois numeros\n");
    scanf("%d",&a);
    scanf("%d",&b);

    if (a>b)
    {
        printf("%d",a);
    }
    else (a<b);
    {
        printf("%d",b);
    }

    return 0;
}
int ex02()
{
    int a,b,aux,aux2;

    scanf("%i",&a);
    scanf("%i",&b);

    aux = (a+b);

    if (aux>=10){
        aux2 = aux+5;
    }
    if (aux<10) {
        aux2 = aux+7;
    }

    printf("%d",aux2);
    return 0;
}
int ex03()
{
    int ano,aux,aux2,atual;
    char sn;

    printf("Escreva o ano que voce nasceu: ");
    scanf("%i",&ano);
    printf("Escreva o ano atual: ");
    scanf("%i",&atual);

    aux = (atual - ano);

    printf("Ja fez aniversario: S/N ");
    scanf("%c",&sn);

   if (sn='s'){
        printf("%i",aux);
    }
    else (sn='n');{
        aux2 = aux - 1;
        printf("%i",aux2);
    }

    if (aux>=18){
        printf("Pode dirigir");
    }
    else (aux<18);{
        printf("Nao pode dirigir");
    }

    return 0;
}

int ex04() {
    float nota;

    // Solicite ao usuário que insira a nota
    printf("Digite a nota: ");
    scanf("%f", &nota);

    // Verifique em qual faixa a nota se encaixa e imprima a mensagem correspondente
    if (nota >= 8 && nota <= 10) {
        printf("Otimo\n");
    } else if (nota >= 7 && nota < 8) {
        printf("Bom\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Regular\n");
    } else if (nota < 5) {
        printf("Insatisfatório\n");
    } else {
        printf("Nota fora da faixa válida\n");
    }

    return 0;
}
int ex05()
{
    float diaria, promo, total80, total50, dif;

    //printf("Qual o valor normal da diaria: \n");
    scanf("%f",&diaria);

    promo = 0.75*diaria;
    total80 = (0.80*75)*promo;
    total50 = 0.50*75*diaria;
    dif = total80 - total50;

    printf("Valor promocional: %.2f\n",promo);
    printf("Promocional com 80%% ocupado: %.2f\n",total80);
    printf("Normal com 50%% ocupado: %.2f\n",total50);
    printf("Diferenca entre os valores: %.2f\n",dif);



    return 0;
}
int ex06()
{
    int q1, q2;
    float raiz;

    //printf("Quais os coeficientes da equaçao de primeiro grau: \n");
    scanf("%d %d",&q1,&q2);
    raiz = 0;

    if (q1!=0 && q2!=0){
        raiz = -q2/q1;
    }

    printf("%.2f",raiz);
    return 0;
}
int ex07()
{
    float x,y;
    //printf("Qual o valor de x: \n");
    scanf("%f",&x);

    if (x <= 1){
        y = 1;
    }

    else if (x <= 2){
        y = 2;
    }
    else if (x <= 3){
        y = pow(x,2);
    }
    else {
        y = pow(x,3);
    }

    printf("%.2f",y);
    return 0;
}

int ex08()
{
    float salario, sal8, sal11, fixo;
    char carac;
    //printf("A,B ou C: ");
    scanf(" %c", &carac);
    //printf("Qual o seu salario:\n");
    scanf("%f",&salario);

    switch (carac){
        case 'A':
        case 'a':
            sal8 = (0.08*salario) + salario;
            printf("%.2f",sal8);
            break;
        case 'B':
        case 'b':
            sal11 = (0.11*salario) + salario;
            printf("%.2f",sal11);
            break;
        case 'C':
        case 'c':
            if (salario <= 1000){
                fixo = salario + 350;
                printf("%.2f",fixo);
            }
            else{
                fixo = salario + 200;
                printf("%.2f",fixo);
            }
            break;
        default:
              //printf("numero invalido");
            break;
    }

    return 1;
}
int ex09()
{
    char sinal;
    //printf("Digite o Sinal: \n");
    scanf(" %c",&sinal);
    switch(sinal){
        case '-':
            printf("SINAL DE MENOR");
        break;
        case '+':
            printf("SINAL DE MAIOR");
        break;
        case '=':
            printf("SINAL DE IGUAL");
        break;
        default:
            printf("OUTRO SINAL");
        break;
    }
    return 0;
}
int ex10() {
    int velocidadeMaxima, velocidadeMotorista;

    //printf("Digite a velocidade máxima permitida (em km/h): ");
    scanf("%d", &velocidadeMaxima);

    //printf("Digite a velocidade do motorista (em km/h): ");
    scanf("%d", &velocidadeMotorista);

    int diferenca = velocidadeMotorista - velocidadeMaxima;
    int multa;

    if (diferenca <= 10) {
        multa = 50;
    } else if (diferenca <= 30) {
        multa = 100;
    } else {
        multa = 200;
    }

    if (diferenca > 0) {
        printf("Multa de %d reais\n", multa);
    } else {
        printf("Motorista respeitou a lei\n");
    }

    return 0;
}
