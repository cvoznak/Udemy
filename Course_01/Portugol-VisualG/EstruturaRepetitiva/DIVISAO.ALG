Algoritmo "divisao"

Var

   n, i : inteiro
   num, den, res : real

Inicio

   escreva("Quantos casos você vai digitar? ")
   leia(n)
   
   para i de 1 ate n faca
      escreva("Entre com o numerador: ")
      leia(num)
      escreva("Entre com o denominador: ")
      leia(den)
      se (den <> 0) entao
         res <- num / den
         escreval("DIVISAO = ", res:5:2)
      senao
         escreval("DIVISÃO IMPOSSÍVEL")
      fimse
   fimpara

Fimalgoritmo