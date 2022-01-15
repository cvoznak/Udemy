Algoritmo "fatorial"

Var

   n, fatorial, i : inteiro

Inicio

   fatorial <- 1

   escreva("Digite o valor de N: ")
   leia(n)
   
   se (n <= 15) entao
      para i de 1 ate n faca
         fatorial <- fatorial * i
      fimpara
      escreva("Fatorial = ",fatorial)
   senao
      escreva("FATORIAL LIMITADO ATÉ 15")
   fimse
   

Fimalgoritmo