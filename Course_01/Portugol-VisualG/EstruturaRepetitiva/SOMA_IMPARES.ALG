Algoritmo "soma_impares"

Var

   x, y, n, soma, troca : inteiro

Inicio

   escreval("Digite dois n�meros:")
   leia(x)
   leia(y)
   
   se x > y ent�o
      troca <- x
      x <- y
      y <- troca
   fimse
   
   para n de (x + 1) ate (y - 1) faca
      se (n % 2 <> 0) entao
         soma <- soma + n
      fimse
   fimpara
   
   escreva("SOMA DOS IMPARES = ", soma)

Fimalgoritmo