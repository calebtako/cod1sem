Algoritmo "8"
// Unidade Curricular  :  [Lógica de Programação] 
// Professor   : Luiz Cesar Gawlik - LC 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 07/03/2017
Var
// Seção de Declarações das variáveis 
// np sao o numero de parcelas
    valor, np, vj, vt:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
    escreval("valor da compra")
    leia(valor)
    escreval("parcela (max. 3)")
    leia(np)
    vj:=(valor*(0.10*np))
    vt:=(valor+vj)
    escreval("o valor pago em juros vai ser de ",vj)
    escreval("o valor total mais o juros vai fica ",vt)
    

Fimalgoritmo