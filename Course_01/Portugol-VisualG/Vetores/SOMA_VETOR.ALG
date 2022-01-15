Algoritmo "soma_vetor"

Var

   n, i : inteiro
   soma, media : real
   vet : vetor [0..9] de real

Inicio

   soma <- 0
   media <- 0

   escreva("Quantos números você vai digitar? ")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      escreva("Digite um número: ")
      leia(vet[i])
   fimpara
   escreval
   escreva("VALORES = ")
   
   para i de 0 ate (n - 1) faca
      escreva(vet[i]:3:1, " ")
      soma <- soma + vet[i]
   fimpara
   
   media <- soma / n
   escreval
   escreval("SOMA = ", soma:6:2)
   escreval("MÉDIA = ", media:6:2)


Fimalgoritmo