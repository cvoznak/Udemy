Algoritmo "crescente"


Var

   x, y : inteiro

Inicio

escreval("Digite dois n�meros:")
   leia(x)
   leia(y)

   enquanto (x <> y) faca
      se x < y ent�o
         escreval("Crescente!")
      sen�o
         escreval("Decrescente!")
      fimse
      escreval("Digite outros dois n�meros:")
      leia(x)
      leia(y)
   fimenquanto
Fimalgoritmo