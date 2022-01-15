Algoritmo "crescente"


Var

   x, y : inteiro

Inicio

escreval("Digite dois números:")
   leia(x)
   leia(y)

   enquanto (x <> y) faca
      se x < y então
         escreval("Crescente!")
      senão
         escreval("Decrescente!")
      fimse
      escreval("Digite outros dois números:")
      leia(x)
      leia(y)
   fimenquanto
Fimalgoritmo