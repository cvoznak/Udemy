Algoritmo "negativos"

Var

   N, i : inteiro
   vet: vetor [0..9] de inteiro

Inicio

   escreva("Quantos numeros você vai digitar? ")
   leia(N)
   
   para i de 0 ate N-1 faca
      escreva("Digite um número: ")
      leia(vet[i])
   fimpara

   escreval("NÚMEROS NEGATIVOS:")
   para i de 0 ate N-1 faca
      se vet[i] < 0 entao
         escreval(vet[i])
      fimse
   fimpara
   
Fimalgoritmo