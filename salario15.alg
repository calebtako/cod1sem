Algoritmo "semnome"
// Unidade Curricular  :  [L?gica de Programa??o] 
// Professor   : Luiz Cesar Gawlik - LC 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 07/03/2017
Var
// Se??o de Declara??es das vari?veis
    nome:caracter
    stotal, sfixo, vendido:real

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
    escreval("qual o nome do funcionario")
    leia(nome)
    escreval("qanto ele ganha como salario fixo")
    leia(sfixo)
    escreval("quanto ele vendeu")
    leia (vendido)
    stotal:=(sfixo+(vendido*0.15))
    escreval("o funcionario ",nome)
    escreval("ganhou ",stotal)

Fimalgoritmo