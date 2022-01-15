Algoritmo "combustivel"

Var

   cod, count1, count2, count3 : inteiro

Inicio

   count1 <- 0
   count2 <- 0
   count3 <- 0
   
   enquanto (cod <> 4) faca
      escreva("Informe um código (1, 2, 3) ou 4 para parar: ")
      leia(cod)
      escolha cod
      caso 1
         count1 <- count1 + 1
      caso 2
         count2 <- count2 + 1
      caso 3
         count3 <- count3 + 1
      fimescolha
   fimenquanto

   escreval("MUITO OBRIGADO")
   escreval("Álcool: ", count1)
   escreval("Gasolina: ", count2)
   escreval("Diesel: ", count3)

Fimalgoritmo