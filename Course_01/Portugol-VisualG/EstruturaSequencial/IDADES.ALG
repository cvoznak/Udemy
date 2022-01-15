Algoritmo "idades"

Var

   nome1, nome2 : caracter
   idade1, idade2, media : real

Inicio

   escreval("Dados da primeira pessoa:")
   escreva("Nome: ")
   leia(nome1)
   escreva("Idade: ")
   leia(idade1)
   escreva("Nome: ")
   leia(nome2)
   escreva("Idade: ")
   leia(idade2)

   media <- (idade1 + idade2) / 2
   
   escreva("A idade média de ",nome1," e ", nome2, " é de ", media:4:1, " anos")
   
Fimalgoritmo