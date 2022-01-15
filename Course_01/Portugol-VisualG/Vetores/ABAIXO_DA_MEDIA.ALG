Algoritmo "abaixo_da_media"

Var

   n, i : inteiro
   media, soma : real
   vet : vetor [0..9] de real
   

Inicio

   escreva("Quantos elementos vai ter o vetor? ")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      escreva("Digite um número: ")
      leia(vet[i])
   fimpara
   
   soma <- 0
   para i de 0 ate (n - 1) faca
      soma <- soma + vet[i]
   fimpara

   media <- soma / n
   
   escreval
   escreval("MÉDIA DO VETOR = ", media:7:3)
   escreval("ELEMENTOS ABAIXO DA MÉDIA: ")
   para i de 0 ate (n - 1) faca
      se (vet[i] < media) entao
         escreval(vet[i]:5:1)
      fimse
   fimpara


Fimalgoritmo