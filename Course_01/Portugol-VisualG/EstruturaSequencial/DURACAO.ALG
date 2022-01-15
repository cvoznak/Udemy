Algoritmo "duracao"

Var

   seg, min, hour, segsaida, resto : inteiro

Inicio

   escreva("Digite a duração em segundos: ")
   leia(seg)
   
   hour <- seg \ 3600
   resto <- (seg % 3600)
   min <- resto \ 60
   segsaida <- resto % 60
   
   escreva(hour:1, ":", min:1, ":", segsaida:1)

Fimalgoritmo