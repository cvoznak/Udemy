Algoritmo "operadora"

Var

   qtdgasta, valorpagar : real

Inicio

   escreva("Digite a quantidade de minutos: ")
   leia(qtdgasta)
   
   se qtdgasta <= 100 entao
      valorpagar <- 50
   senao
      valorpagar <- 50 + (qtdgasta - 100) * 2
   fimse
   escreva("Valor a pagar: R$", valorpagar:6:2)
      

Fimalgoritmo