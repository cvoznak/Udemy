Algoritmo "media_pares"

Var

   n, i, soma, count : inteiro
   vet : vetor [0..9] de inteiro
   media : real

Inicio

   escreva("Quantos elementos vai ter o vetor? ")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      escreva("Digite um número: ")
      leia(vet[i])
   fimpara
   
   soma <- 0
   count <- 0
   para i de 0 ate (n-1) faca
      se (vet[i] % 2 = 0) entao
         soma <- soma + vet[i]
         count <- count + 1
      fimse
   fimpara
   
   se (count = 0) entao
      escreval("NENHUM NÚMERO PAR")
   senao
      media <- soma / count
      escreval("MÉDIA DOS PARES = ", media:4:1)
   fimse

Fimalgoritmo