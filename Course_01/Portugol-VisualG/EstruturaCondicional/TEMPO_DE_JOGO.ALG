Algoritmo "tempo_de_jogo"

Var

   hi, hf, delta : inteiro

Inicio

   escreva("Hora inicial: ")
   leia(hi)
   escreva("Hora final: ")
   leia(hf)
   
   se hi < hf entao
      delta <- hf - hi
   senao
      delta <- (24 - hi) + hf
   fimse
   escreva("O JOGO DUROU ", delta, " HORA(S)")

Fimalgoritmo