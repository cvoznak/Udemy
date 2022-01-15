Algoritmo "matriz_geral"


Var

   n, i, j, linha, coluna : inteiro
   mat : vetor [0..9, 0..9] de real
   somapositivos : real

Inicio

   escreva("Qual a ordem da matriz? ")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      para j de 0 ate (n - 1) faca
      escreva("Elemento [",i, ",", j, "]:")
      leia(mat[i,j])
      fimpara
   fimpara

   somapositivos <- 0
   para i de 0 ate (n - 1) faca
      para j de 0 ate (n - 1) faca
         se (mat[i,j] > 0) entao
            somapositivos <- somapositivos + mat[i,j]
         fimse
      fimpara
   fimpara
   escreval
   escreval("SOMA DOS POSITIVOS: ", somapositivos:5:1)
   escreval
   escreva("Escolha uma linha: ")
   leia(linha)

   escreval("LINHA ESCOLHIDA: ")
   para j de 0 ate (n - 1) faca
      escreva(mat[linha,j]:5:1)
   fimpara
   escreval
   escreval
   escreva("Escolha uma coluna: ")
   leia(coluna)

   escreva("COLUNA ESCOLHIDA: ")
   para i de 0 ate (n - 1) faca
      escreva(mat[i,coluna]:5:1)
   fimpara
   escreval
   escreval
   escreva("DIAGONAL PRINCIPAL: ")
   para i de 0 ate (n - 1) faca
      para j de 0 ate (n - 1) faca
         se i = j entao
            escreva(mat[i,j]:5:1)
         fimse
      fimpara
   fimpara
   
   para i de 0 ate (n - 1) faca
      para j de 0 ate (n - 1) faca
         se (mat[i,j] < 0) entao
            mat[i,j] <- exp(mat[i,j], 2)
         fimse
       fimpara
   fimpara
   escreval
   escreval
   escreval("MATRIZ ALTERA")
   para i de 0 ate (n - 1) faca
      para j de 0 ate (n - 1) faca
         escreva(mat[i,j]:5:1, " ")
      fimpara
      escreval
   fimpara

Fimalgoritmo