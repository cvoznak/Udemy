Algoritmo "alturas"

Var

   nome : caracter
   idade, n, i, count : inteiro
   altura, media, soma, porcentagem : real
   vetn : vetor [0..9] de caracter
   veti : vetor [0..9] de inteiro
   veta : vetor [0..9] de real

Inicio

   escreva("Quantas pessoas serão digitadas? ")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      escreval("Dados da ", (i + 1), "a pessoa:")
      escreva("Nome: ")
      leia(vetn[i])
      escreva("Idade: ")
      leia(veti[i])
      escreva("Altura: ")
      leia(veta[i])
   fimpara
   
   media <- 0
   count <- 0
   
   para i de 0 ate (n - 1) faca
      soma <- soma + veta[i]
      se (veti[i] < 16) entao
         count <- count + 1
      fimse
   fimpara
   
   media <- soma / n
   porcentagem <- count * 100 / n
   
   escreval("Altura média: ", media:5:2)
   escreval("Pessoas com menos de 16 anos: ", porcentagem:5:1, "%")
   
   para i de 0 ate (n - 1) faca
      se (veti[i] < 16) entao
         escreval(vetn[i])
      fimse
   fimpara

Fimalgoritmo