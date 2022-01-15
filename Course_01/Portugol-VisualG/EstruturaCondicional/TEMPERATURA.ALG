Algoritmo "temperatura"

Var

   entrada : caracter
   c, f : real

Inicio

   escreva("Você vai digitar a temperatura em qual escala (C/F)? ")
   leia(entrada)
   
   se entrada = "c" entao
      escreva("Digite a temperatura em Celsius: ")
      leia(c)
      f <- (c * (9 / 5)) + 32
      escreva("Temperatura equivalente em Fahrenheit: ", f:6:2)
   senao
      escreva("Digite a temperatura em Fahrenheit: ")
      leia(f)
      c <- (5 / 9) * (f - 32)
      escreva("Temperatura equivalente em Celsius: ", c:6:2)
   fimse

Fimalgoritmo