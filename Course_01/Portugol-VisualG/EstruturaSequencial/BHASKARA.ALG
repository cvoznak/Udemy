Algoritmo "bhaskara"

Var
   x1,x2,b,delta,a,c : real

Inicio

   escreval("Sendo ax^2 + bx + c = 0, digite os valores:")
   escreva("a: ")
   leia(a)
   escreva("b: ")
   leia(b)
   escreva("c: ")
   leia(c)
   
   delta <- Exp(b, 2.0) - 4 * a * c
   x1 <- (-b + RaizQ(delta)) / (2.0 * a)
   x2 <- (-b - RaizQ(delta)) / (2.0 * a)
   
   escreva("As raizes para equação quadratica são: x1=", x1, " e x2=", x2)

Fimalgoritmo