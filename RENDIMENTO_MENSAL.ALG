Algoritmo "rendimento_mensal"
// Unidade Curricular  :  [L?gica de Programa??o] 
// Professor   : Luiz Cesar Gawlik - LC 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/03/2017
Var
// Se??o de Declara??es das vari?veis 
    meses, valor, rendimento:real

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
    escreval("qual o valor depositado")
    leia(valor)
    escreval("numero de meses")
    leia(meses)
    rendimento:=((valor*meses)*1.15)
    escreva("o valor apos esses meses sera de ",rendimento)
    

Fimalgoritmo