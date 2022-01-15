Algoritmo "medidas"


Var

   a, b, c, areaqd, areatr, areatp : real

Inicio

   escreva("Digite a medida A: ")
   leia(a)
   escreva("Digite a medida B: ")
   leia(b)
   escreva("Digite a medida C: ")
   leia(c)
   
   areaqd <- exp(a,2)
   areatr <- a * b / 2
   areatp <- (a + b) * c / 2
   
   
   escreval("AREA DO QUADRADO = ", areaqd:8:4)
   escreval("AREA DO TRIANGULO = ", areatr:8:4)
   escreval
   ("AREA DO TRAPEZIO = ", areatp:8:4)

Fimalgoritmo