Algoritmo "dentro_fora"

Var

   n, x, i, countin, fora : inteiro

Inicio

   countin <- 0

   escreva("Quantos números você vai digitar? ")
   leia(n)
   
   para i de 1 ate n faca
      escreva("Digite um número: ")
      leia(x)
      se (x >= 10) e (x <= 20) entao
         countin <- countin + 1
      fimse
   fimpara
   fora <- n - countin
   escreval(countin, " DENTRO")
   escreval(fora, " FORA")

Fimalgoritmo