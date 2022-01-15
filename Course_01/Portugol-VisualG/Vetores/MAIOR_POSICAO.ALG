Algoritmo "maior_posicao"

Var
   n, i, p : inteiro
   maior : real
   vet : vetor [0..9] de real

Inicio

   escreva("Quantos números você vai digitar? ")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      escreva("Digite um número: ")
      leia(vet[i])
   fimpara
   
   maior <- vet[0]
   para i de 0 ate (n - 1) faca
      se vet[i] > maior entao
         maior <- vet[i]
         p <- i
      fimse
   fimpara
   
   escreval
   escreval("MAIOR VALOR = ", maior:5:1)
   escreval("POSIÇÃO DO MAIOR VALOR = ", p)
   

Fimalgoritmo