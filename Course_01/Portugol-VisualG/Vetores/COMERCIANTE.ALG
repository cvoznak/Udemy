Algoritmo "comerciante"

Var

   n, i, abaixo, entre, acima : inteiro
   totalc, totalv, lucrot : real
   vetn : vetor [0..9] de caracter
   vetc : vetor [0..9] de real
   vetv : vetor [0..9] de real
   vetl : vetor [0..9] de real
   vetpl : vetor [0..9] de real

Inicio

   escreva("Serão digitados dados de quantos produtos?")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      escreval("Produto ", (i + 1), ":")
      escreva("Nome: ")
      leia(vetn[i])
      escreva("Preço de compra: ")
      leia(vetc[i])
      escreva("Preço de venda: ")
      leia(vetv[i])
      vetl[i] <- vetv[i] - vetc[i]
      vetpl[i] <- (vetl[i] * 100) / vetc[i]

   fimpara
   
   abaixo <- 0
   acima <- 0
   entre <- 0
   totalc <- 0
   totalv <- 0
   lucrot <- 0
   
   para i de 0 ate (n - 1) faca
      se (vetpl[i] < 10) entao
         abaixo <- abaixo + 1
      senão
         se (vetpl[i] > 20) entao
            acima <- acima + 1
         senao
            entre <- entre + 1
         fimse
      fimse
      totalc <- totalc + vetc[i]
      totalv <- totalv + vetv[i]
      lucrot <- lucrot + vetl[i]
   fimpara
   
   escreval
   escreval("RELATÓRIO:")
   escreval("Lucro abaixo de 10%: ", abaixo)
   escreval("Lucro entre 10% e 20%: ", entre)
   escreval("Lucro acima de 20%: ", acima)
   escreval("Valor total de compra: ", totalc)
   escreval("Valor total de venda: ", totalv)
   escreval("Lucro total: ", lucrot)


Fimalgoritmo