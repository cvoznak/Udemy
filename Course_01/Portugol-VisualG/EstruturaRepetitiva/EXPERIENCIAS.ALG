Algoritmo "experiencias"


Var

   n, i, qtd, countc, countr, counts, total : inteiro
   tp : caractere
   pc, pr, ps : real

Inicio

   countc <- 0
   countr <- 0
   counts <- 0
   
   escreva("Quantos casos de teste serão digitados? ")
   leia(n)
   
   para i de 1 ate n faca
      escreva("Quantidade de cobaias: ")
      leia(qtd)
      escreva("Tipo de cobaia: ")
      leia(tp)
      se (tp = "c") entao
         countc <- countc + qtd
      senao
         se (tp = "r") entao
            countr <- countr + qtd
         senao
            counts <- counts + qtd
         fimse
      fimse
   fimpara
   
   total <- countc + countr + counts
   
   pc <- countc * 100 / total
   pr <- countr * 100 / total
   ps <- counts * 100 / total

   escreval("RELATÓRIO FINAL:")
   escreval("Total: ", total, " cobaias")
   escreval("Total de coelhos: ", countc)
   escreval("Total de ratos: ", countr)
   escreval("Total de sapos: ", counts)
   escreval("Percentual de coelhos: ", pc:5:2)
   escreval("Percentual de ratos: ", pr:5:2)
   escreval("Percentual de sapos: ",ps:5:2)
   

Fimalgoritmo