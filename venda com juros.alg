Algoritmo "8"
// Unidade Curricular  :  [L?gica de Programa??o] 
// Professor   : Luiz Cesar Gawlik - LC 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 07/03/2017
Var
// Se??o de Declara??es das vari?veis 
// np sao o numero de parcelas
    valor, np, vj, vt:real

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
    escreval("valor da compra")
    leia(valor)
    escreval("parcela (max. 3)")
    leia(np)
    vj:=(valor*(0.10*np))
    vt:=(valor+vj)
    escreval("o valor pago em juros vai ser de ",vj)
    escreval("o valor total mais o juros vai fica ",vt)
    

Fimalgoritmo