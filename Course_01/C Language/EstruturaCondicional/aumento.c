#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, aumento, nsalario,porcentagem;
    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);
    if (salario<=1000) {
        porcentagem=20;
    }
    else if (salario>1000 && salario<=3000) {
        porcentagem=15;
    }
    else if (salario>3000 && salario<=8000) {
        porcentagem=10;
    }
    else {
        porcentagem=5;
    }
    aumento=salario*(porcentagem/100);
    nsalario=salario+aumento;
    printf("Novo salario = R$%.2lf%\n", nsalario);
    printf("Aumento = R$%.2lf%\n",aumento);
    printf("Porcentagem = %.0lf%%",porcentagem);


    return 0;
}
