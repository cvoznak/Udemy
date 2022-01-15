Algoritmo "dados_pessoas"

Var

   n, i, nh, nf : inteiro
   menor, maior, media, somaf : real
   veta : vetor [0..9] de real
   vetg : vetor [0..9] de caracter

Inicio

   escreva("Quantas pessoas serão digitadas? ")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      escreva("Altura da ", (i + 1), "a pessoa: ")
      leia(veta[i])
      escreva("Genero da ", (i + 1), "a pessoa: ")
      leia(vetg[i])
   fimpara
   
   menor <- veta[0]
   maior <- veta[0]
   somaf <- 0
   nf <- 0
   nh <- 0
   
   para i de 0 ate (n - 1) faca
      se (menor > veta[i]) entao
         menor <- veta[i]
      fimse
      se (maior < veta[i]) entao
         maior <- veta[i]
      fimse
      se (vetg[i] = "f") então
         somaf <- somaf + veta[i]
         nf <- nf + 1
      senao
         nh <- nh + 1
      fimse
   fimpara
   
   media <- somaf / nf
   
   escreval("Menor altura = ", menor:5:2)
   escreval("Maior altura = ", maior:5:2)
   escreval("Média das alturas das mulheres = ", media:5:2)
   escreval("Número de homens = ", nh)


Fimalgoritmo