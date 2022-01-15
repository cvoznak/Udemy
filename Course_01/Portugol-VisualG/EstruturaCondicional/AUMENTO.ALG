Algoritmo "aumento"

Var

   salario, aumento, novosalario, valoraumento, porcentagem : real


Inicio

   escreva("Digite o salario da pessoal: ")
   leia(salario)

   se (salario <= 1000) entao
      aumento <- 0.2
   senao
      se (salario > 1000) e (salario <= 3000) entao
         aumento <- 0.15
      senao
         se (salario > 3000) e (salario <= 8000) entao
            aumento <- 0.1
         senao
            aumento <- 0.05
         fimse
      fimse
   fimse
   
   novosalario <- salario * (1 + aumento)
   valoraumento <- salario * aumento
   porcentagem <- aumento * 100
   
   escreval("Novo salario = R$", novosalario:8:2)
   escreval("Aumento = R$", valoraumento:8:2)
   escreval("Porcentagem = ", porcentagem, " %")

Fimalgoritmo