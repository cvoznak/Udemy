Algoritmo "troco_verificado"

Var

   precouni, qtd, valortotal, valorrecebido, diferenca: real

Inicio

   escreva("Preço unitário do produto: ")
   leia(precouni)
   escreva("Quantidade comprada: ")
   leia(qtd)
   escreva("Dinheiro recebido: ")
   leia(valorrecebido)
   
   valortotal <- precouni * qtd
   diferenca <- abs(valorrecebido - valortotal)
   
   se valortotal <= valorrecebido entao
      escreva("TROCO = ", diferenca:5:2)
   senao
      escreva("DINHEIRO INSUFICIENTE, FALTAM ", diferenca:5:2, " REAIS")
   fimse

Fimalgoritmo