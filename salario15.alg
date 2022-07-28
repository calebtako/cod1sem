Algoritmo "semnome"
// Unidade Curricular  :  [Lógica de Programação] 
// Professor   : Luiz Cesar Gawlik - LC 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 07/03/2017
Var
// Seção de Declarações das variáveis
    nome:caracter
    stotal, sfixo, vendido:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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