Algoritmo "semnome"
// Unidade Curricular  :  [L?gica de Programa??o] 
// Professor   : Luiz Cesar Gawlik - LC 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 07/03/2017
Var
// Se??o de Declara??es das vari?veis 
    aluno:caracter
    nota1, nota2, nota3, nota4, media:real

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
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