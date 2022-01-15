Algoritmo "mais_velho"

Var

   n, i, velho : inteiro
   nome : caracter
   vetn : vetor [0..9] de caracter
   veti : vetor [0..9] de inteiro

Inicio

   escreva("Quantas pessoas você vai digitar? ")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      escreval("Dados da ", (i + 1),"a pessoa: ")
      escreva("Nome: ")
      leia(vetn[i])
      escreva("Idade: ")
      leia(veti[i])
   fimpara
   
   velho <- 0
   
   para i de 0 ate (n - 1) faca
      se velho < veti[i] entao
         velho <- veti[i]
         nome <- vetn[i]
      fimse
   fimpara
   
   escreval("PESSOA MAIS VELHA: ", nome)
   
Fimalgoritmo