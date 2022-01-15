Algoritmo "media_idades"

Var

   idade, soma, contador : inteiro
   media : real

Inicio

   escreval("Digite as idades:")
   leia(idade)
   contador <- 0
   soma <- 0
   
   se (idade < 0) entao
      escreva("IMPOSSÍVEL CALCULAR")
   senao
      enquanto (idade > 0) faca
         contador <- contador +1
         soma <- soma + idade
         leia(idade)
      fimenquanto
      media <- soma / contador
      escreva("MÉDIA = ", media:6:2)
   fimse

Fimalgoritmo