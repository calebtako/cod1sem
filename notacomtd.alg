Algoritmo "semnome"
// Unidade Curricular  :  [Lógica de Programação] 
// Professor   : Luiz Cesar Gawlik - LC 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/03/2017
Var
// Seção de Declarações das variáveis 
  nome:caracter
  nota1, nota2, nota3, nota4, media:real
  

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
  escreval("qual o nome do aluno")
  leia(nome)
  escreval("qual foi sua primeira nota")
  leia(nota1)
  escreval("qual foi a segunda ")
  leia(nota2)
  escreval("qual foi a terceira")
  leia(nota3)
  escreval("qual foi a quarta")
  leia(nota4)
  media:=(nota1+nota2+nota3+nota4)/4
  se media>=7 entao
  escreval("o aluno esta aprovado com ",media)
  fimse
  se media<=5 entao
  escreval("o aluno esta reprovado com ",media)
  fimse
  se media>=5.1 entao
  se media<=6.9 entao
  escreval("o aluno esta de recuperacao com ",media)
  fimse
  fimse
Fimalgoritmo