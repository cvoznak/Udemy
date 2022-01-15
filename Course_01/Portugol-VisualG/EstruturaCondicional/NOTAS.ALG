Algoritmo "notas"


Var

   nota1, nota2, notafinal : real

Inicio

   escreva("Digite a primeira nota: ")
   leia(nota1)
   escreva("Digite a segunta nota: ")
   leia(nota2)
   
   notafinal <- (nota1 + nota2)
   
   escreval("NOTA FINAL = ", notafinal:5:1)

   se notafinal < 60 entao
      escreva("REPROVADO")
   fimse

Fimalgoritmo