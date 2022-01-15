Algoritmo "diagonal_negativos"

Var

   n, i, j, count : inteiro
   mat : vetor [0..10, 0..10] de inteiro

Inicio

   escreva("Qual a ordem da matriz? ")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      para j de 0 ate (n - 1) faca
      escreva("Elemento [",i, ",",j, "]: ")
      leia(mat[i,j])
      fimpara
   fimpara
   
   escreval("Diagonal Principal: ")
   para i de 0 ate (n - 1) faca
      para j de 0 ate (n - 1) faca
         se i = j entao
            escreval(mat[i,j], " ")
            fimse
      fimpara
   fimpara

   count <- 0
   para i de 0 ate (n - 1) faca
      para j de 0 ate (n - 1) faca
         se mat[i,j] < 0 entao
            count <- count + 1
            fimse
      fimpara
   fimpara
   escreval("QUANTIDADE DE NEGATIVOS = ", count)

Fimalgoritmo