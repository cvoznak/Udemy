Algoritmo "glicose"

Var

   glicose : real
   classificacao : caracter

Inicio

   escreva("Digite a medida da glicose: ")
   leia(glicose)
   
   se glicose > 100 entao
      se glicose <= 140 entao
         classificacao <- "elevado"
      senao
         classificacao <- "diabetes"
      fimse
   senao
      classificacao <- "normal"
   fimse

   escreva("Classifica: ", classificacao)

Fimalgoritmo