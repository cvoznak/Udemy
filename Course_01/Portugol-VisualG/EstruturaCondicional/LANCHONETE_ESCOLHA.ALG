Algoritmo "lanchonete_escolha"

Var

   codigo, qtd : inteiro
   preco, pagar : real

Inicio

   escreva("Código do produto comprado: ")
   leia(codigo)
   escreva ("Quantidade comprada: ")
   leia(qtd)
   
   escolha codigo
   caso 1
      preco <- 5
   caso 2
      preco <- 3.5
   caso 3
      preco <- 4.8
   caso 4
      preco <- 8.9
   caso 5
      preco <- 7.32
   fimescolha
   
   pagar <- preco * qtd
   
   escreva("Valor a pagar: R$", pagar:6:2)

Fimalgoritmo