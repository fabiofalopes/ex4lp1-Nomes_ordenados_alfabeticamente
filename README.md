# ex4lp1

***-Descrição***

Queremos um programa, que lê da consola n nomes introduzidos pelo utilizador e os imprime por ordem alfabética.

***-Detalhes de implementação***
                        

O programa inicia com a mensagem:

>       "Quantos nomes pretende introduzir? \n"

O número de nomes introduzido pelo utilizador esta limitado a 25 caso contrario deve imprimir 

>       "Invalid Response\n"

até que seja introduzido um número válido.

Se introduzir um caracter não numérico, deve imprimir: 

>	
	"Erro, introduziu valor nao numerico.\nExit Program!\n"

Assim que for introduzido um número válido, o programa imprime a seguinte mensagem:

>		
	"Introduza os nomes:\n"


- O programa aceita nomes com um máximo de 20 caracteres.
- Caso o utilizador introduza nomes começados por minúsculas, deve converter as iniciais para maiúscula;
- Caso o utilizador introduza um nome com mais de 20 caracteres, o programa deve imprimir

>       "\nAtencao!\nExcedeu o tamanho permitido para o nome\nEnter Again : \n"

e volta a pedir ao utilizador novamente o nome.

Finalmente imprime:

>       "\nOs nomes intoduzidos por ordem alfabetica: \n"

seguida dos nomes ordenados por ordem alfabetica.

Podem ser usadas as bibliotecas <ctype.h> e <string.h>

**Exemplos na consola**


1)


>       
        Quantos nomes pretende introduzir?
        26
        Invalid Response
        Quantos nomes pretende introduzir?
        a
        Erro, introduziu valor nao numerico.
        Exit Program!

2)
      
>       
        Quantos nomes pretende introduzir?
        5
        Introduza os 5 nomes:
        manuela
        carlos
        josé antónio
        maria lurdes
        teresa

        Os nomes introduzidos por ordem alfabética: 
        Carlos
        José António
        Manuela
        Maria Lurdes
        Teresa

3)


>	
	Quantos nomes pretende introduzir?
	7
	Introduza os 7 nomes:
	manuela moura guedes
	anibal cavaco silva 
	dom joao quinto o magnanimo

	Atencao!
	Excedeu o limite de 20 caracteres
	Enter Again :
	
	dom joao v o magnanimo

	Atencao!
	Excedeu o limite de 20 caracteres
	Enter Again :
	
	joao v o magnanimo
	Jose mourinho
	cristiano ronaldo
	pedro ingles
	luis v

	Os nomes intoduzidos por ordem alfabetica: 
	Anibal Cavaco Silva 
	Cristiano Ronaldo
	Joao V O Magnanimo
	Jose Mourinho
	Luis V
	Manuela Moura Guedes
	Pedro Ingles
