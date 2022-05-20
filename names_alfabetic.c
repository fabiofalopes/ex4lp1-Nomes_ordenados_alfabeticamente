# include <stdio.h>
# include <ctype.h>
# include <string.h>

# define MAX_NUM_NAMES 25
# define MAX_NAME_LENGHT 21
# define INVALID_RESPONSE "Invalid Response\n"
# define INVALID_INPUT "Erro, introduziu valor nao numerico.\nExit Program!\n"
# define INVALID_NAME_LENGHT "\nAtencao!\nExcedeu o limite de 20 caracteres\nEnter Again : \n"
# define ANSWER_ALPHA "\nOs nomes introduzidos por ordem alfabetica: \n"

int main(){

    int numerosNomes = 0;
    int i = 0;
    char temp[MAX_NAME_LENGHT];    
    char nomes [MAX_NUM_NAMES][MAX_NAME_LENGHT];

    do{
        printf ("Quantos nomes pretende introduzir?\n");
        //scanf("%d",&numerosNomes);

        if (scanf("%d", &numerosNomes) != 1){
            printf(INVALID_INPUT);
            return 0;
        }
        else if (numerosNomes <= 1 || numerosNomes > MAX_NUM_NAMES){
            printf(INVALID_RESPONSE);
        } 
        
    }while((numerosNomes <= 1) || 
           (numerosNomes > MAX_NUM_NAMES));


    printf("Introduza os %d nomes:\n", numerosNomes);
    //Le nomes para a array de nomes 
    for(int i = 0 ; i < numerosNomes ; i++){
        scanf(" %[^\n]s",&nomes[i][0]);
        if ((int)strlen(nomes[i]) > MAX_NAME_LENGHT){
            printf(INVALID_NAME_LENGHT);
            i--;
        }
    }

    for (int i = 0; i <numerosNomes; i++){
        for(int j=0; j<numerosNomes-1-i; j++){
                //Caso nomes comecem com minuscula conv/ maiuscula
                if (islower(nomes[j][0])){
                    nomes[j][0] = toupper(nomes[j][0]);
                }
                if (islower(nomes[j+1][0])){
                    nomes[j+1][0] = toupper(nomes[j+1][0]);
                }
                //Caso exista espaco, conv/ proximo nome para maiuscula
                for (int x = 0 ; x < (int)strlen(nomes[j]) ; x++){
                        if (nomes[j][x] == ' '){
                            if(isalpha(nomes [j][x+1])){
                                nomes[j][x+1] = toupper(nomes[j][x+1]); 
                            }
                        }
                        if (nomes[j+1][x] == ' '){
                            if (isalpha(nomes [j+1][x+1])){
                                nomes[j+1][x+1] = toupper(nomes[j+1][x+1]); 
                            }
                        } 
                    }

            if(strcmp(nomes[j], nomes[j+1]) > 0){
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j+1]);
                strcpy(nomes[j+1], temp);
            }
        }
    }

    printf(ANSWER_ALPHA);
    while (i < numerosNomes){
        printf("%s\n",nomes[i++]);
    }
    
    return 0;
}
