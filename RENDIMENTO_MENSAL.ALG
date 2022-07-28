Algoritmo "rendimento_mensal"
// Unidade Curricular  :  [Lógica de Programação] 
// Professor   : Luiz Cesar Gawlik - LC 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/03/2017
Var
// Seção de Declarações das variáveis 
    meses, valor, rendimento:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
    escreval("qual o valor depositado")
    leia(valor)
    escreval("numero de meses")
    leia(meses)
    rendimento:=((valor*meses)*1.15)
    escreva("o valor apos esses meses sera de ",rendimento)
    

Fimalgoritmo