Algoritmo "menor_de_tres"

Var

   valor1, valor2, valor3, menorvalor : inteiro

Inicio

   escreva("Primeiro valor: ")
   leia(valor1)
   escreva("Segundo valor: ")
   leia(valor2)
   escreva("Terceiro valor: ")
   leia(valor3)

//   solucao estabelecendo hipotese e testando
//   menorvalor <- valor1
//
//   se menorvalor >= valor2 entao
//      menorvalor <- valor2
//   fimse
//
//   se menorvalor >= valor3 entao
//      menorvalor <- valor3
//   fimse

   se (valor1 < valor2) e (valor1 < valor3) entao
      menorvalor <- valor1
   senao
      se valor2 < valor3 entao
         menorvalor <- valor2
      senao
         menorvalor <- valor3
      fimse
   fimse
   escreva("MENOR = ", menorvalor)
   
Fimalgoritmo