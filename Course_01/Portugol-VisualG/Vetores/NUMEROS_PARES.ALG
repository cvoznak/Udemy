Algoritmo "numeros_pares"

Var

   n, i, pares : inteiro
   vet : vetor [0..9] de inteiro

Inicio

   escreva("Quantos números você vai digitar? ")
   leia(n)
   
   para i de 0 ate (n-1) faca
      escreva("Digite un número: ")
      leia(vet[i])
   fimpara

   pares <- 0
   escreval
   escreval("NÚMEROS PARES:")
   para i de 0 ate (n-1) faca
      se (vet[i] % 2 = 0) entao
         escreva(vet[i])
         pares <- pares + 1
      fimse
   fimpara
   escreval
   escreval
   escreval("QUANTIDADE DE PARES = ", pares)
   
Fimalgoritmo