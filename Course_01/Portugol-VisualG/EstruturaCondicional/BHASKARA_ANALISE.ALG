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
         escreva("A equa��o possui somente uma raiz X = ", x1:8:4)
      fimse
   senao
      escreva("A equa��o n�o possui as ra�zes pertencentes aos n�meros reais")
   fimse

Fimalgoritmo