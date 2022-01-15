Algoritmo "bhaskara_analise"

Var

   a, b, c, delta, x1, x2 : real

Inicio

   escreva("coeficiente a: ")
   leia(a)
   escreva("coeficiente b: ")
   leia(b)
   escreva("coeficiente c: ")
   leia(c)
   
   delta <- exp(b,2) - 4 * a * c
   
   se delta > 0 entao
      se a <> 0 entao
         x1 = (-b + Raizq(delta) / 2 * a
         x2 = (-b - Raizq(delta) / 2 * a
         escreva("X1 = ", x1:8:4)
         escreva("X2 = ", x2:8:4)
      senao
         x1 <-  c / b
         escreva("A equação possui somente uma raiz X = ", x1:8:4)
      fimse
   senao
      escreva("A equação não possui as raízes pertencentes aos números reais")
   fimse

Fimalgoritmo