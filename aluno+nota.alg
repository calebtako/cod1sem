Algoritmo "semnome"
// Unidade Curricular  :  [Lógica de Programação] 
// Professor   : Luiz Cesar Gawlik - LC 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 07/03/2017
Var
// Seção de Declarações das variáveis 
    aluno:caracter
    nota1, nota2, nota3, nota4, media:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
    escreval("qual o nome do aluno")
    leia(aluno)
    escreval("quanto ele tirou na primeira avaliacao")
    leia(nota1)
    escreval("e na segunda")
    leia(nota2)
    escreval("e na terceira")
    leia(nota3)
    escreval("e na quarta")
    leia(nota4)
    media:=((nota1+nota2+nota3+nota4)/4)
    escreval("o aluno ",aluno)
    escreval("foi com media",media)

Fimalgoritmo