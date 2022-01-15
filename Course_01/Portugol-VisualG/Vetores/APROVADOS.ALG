Algoritmo "aprovados"

Var

   n, i : inteiro
   vetn : vetor [0..9] de caracter
   vetn1 : vetor [0..9] de real
   vetn2 : vetor [0..9] de real
   vetm : vetor [0..9] de real
   

Inicio

   escreva("Quantos alunos serão digitados? ")
   leia(n)
   
   para i de 0 ate (n - 1) faca
      escreval("Digite nome, primeira e segunda nota do ", (i + 1), "o aluno:")
      leia(vetn[i])
      leia(vetn1[i])
      leia(vetn2[i])
      vetm[i] <- (vetn1[i] + vetn2[i]) / 2
   fimpara
   
   escreval("Alunos aprovados: ")
   
   para i de 0 ate (n - 1) faca
      se (vetm[i] >= 6) entao
         escreval(vetn[i])
      fimse
   fimpara

Fimalgoritmo