#include <stdio.h>
/*A História:
Um explorador está perdido em um deserto
com 100 pontos de vida e 3 cantis de água. A
cada hora de caminhada, um evento
aleatório acontece e afeta sua saúde. Ele
precisa sobreviver por 24 horas (24 turnos)
para ser resgatado.
● O Desafio:
Crie um simulador usando um laço for que
rode 24 vezes (representando as horas). Em
cada hora, mostre um menu interativo com
as seguintes opções para o jogador:
○ Caminhar: Perde 10 pontos de vida, mas
avança no tempo (o contador do laço avança);
○ Beber Água: Recupera 30 pontos de vida,
consome 1 cantil. Não avança o tempo (o laço
precisa compensar isso ou o menu fica dentro
de um while interno);
○ Descansar: Perde apenas 5 pontos de vida,
não gasta água, avança no tempo.
● Regras extras:
○ A vida máxima nunca pode ultrapassar 100.
○ Se a vida chegar a 0 ou menos, o laço é
interrompido imediatamente e a mensagem
"Você não resistiu..." aparece.
○ Se o laço terminar as 24 horas e o jogador
estiver vivo, a mensagem "Você foi
r   esgatado!" aparece.*/
int pagina(){
int comeco;
int menucreditos;
int escolheridioma;
printf("Bem vindo ao simulador de caminhada, (1)-Jogar\n (2)-Creditos (3)-Sair (4)-Mudar idioma: \n ");
scanf("%i", &comeco);
switch(comeco){
    case 1: 
    jogo();
    break;
    case 2:
    printf("Creditos: Programador - Leo Rassi (UFMT) (1)-Voltar: \n");
    scanf("%i", &menucreditos);
    if(menucreditos == 1){
      pagina();
    }
    break;
    case 3: 
    printf("Saindo... \n");
    break;
    case 4:
    printf("Escolha o idioma: (1)-Ingles (2)-Portugues Brasil");
    scanf("%i", &escolheridioma);
    if(escolheridioma == 1){
      main();
    }else if(escolheridioma == 2){
      pagina();
    }
    break;
    default:
    pagina();
    break;
}

    return 0;

}

int jogo(){
   int pontosdevida = 100;
  int cantis = 3;
  int tentardenovo;
  int relogio;
int escolher;
int controledevitoria;
//laço de repetição
  for(relogio = 1; relogio<=24; relogio++){
    printf("(1)-Caminhar (2)-Beber agua (3)-Descansar \n Seus pontos de vida: %i \n Voce possui %i cantis de agua \n ", pontosdevida, cantis);
    scanf("%i", &escolher);
       switch(escolher){
      case 1: //caminhada
      pontosdevida -= 10;
      relogio +=1;
      break;
      case 2://Cantil
      if(cantis){
         pontosdevida += 30;
      cantis -= 1;
    }else if(cantis <= 0){
        pontosdevida += 0;
        cantis -= 0;
    }
     
      break;
      case 3://Descansar
      pontosdevida -=5;
      relogio += 1;
      break;
      default:
      jogo();
      break;
    }

    
     if(pontosdevida >100){
        pontosdevida = 100;
      }else if(pontosdevida <=0){
        printf("--Jogo acabou--! \n (1)-Tentar de novo (2)-Menu: \n");
        scanf("%i", &tentardenovo);
        if(tentardenovo == 1){
          jogo();
        }else if(tentardenovo == 2){
         pagina();
        }
      }
      if(relogio == 24){
        printf("Voce venceu! (1)-Tentar de novo (2)- Menu: \n");
        scanf("%i", &controledevitoria);
        if(controledevitoria == 2){
          pagina();
        }else if(controledevitoria == 1){
          jogo();
        }        
      }
  
  }
     return 0;

}
int game(){
  //Entrada
  int heartpoints = 100;
  int waterbottle = 3;
  int retry;
  int hours;
int choose;
int winningcontrol;
//laço de repetição
  for(hours = 1; hours<=24; hours++){
    printf("1 to Walking, 2 to drink the water bottle or 3 to Rest \n Your heartpoint: %i \n You have %i water bottles \n ", heartpoints, waterbottle);
    scanf("%i", &choose);
       switch(choose){
      case 1: //caminhada
      heartpoints -= 10;
      hours +=1;
      break;
      case 2://Cantil
      if(waterbottle){
         heartpoints += 30;
      waterbottle -= 1;
    }else if(waterbottle <= 0){
        heartpoints += 0;
        waterbottle -= 0;
    }
     
      break;
      case 3://Descansar
      heartpoints -=5;
      hours += 1;
      break;
      default:
      game();
      break;
    }

    
     if(heartpoints >100){
        heartpoints = 100;
      }else if(heartpoints <=0){
        printf("--GAME OVER--! \n (1)-Retry (2)-Menu: \n");
        scanf("%i", &retry);
        if(retry == 1){
          game();
        }else if(retry == 2){
         main();
        }
      }
      if(hours == 24){
        printf("You win! (1)-Retry (2)- Menu: \n");
        scanf("%i", &winningcontrol);
        if(winningcontrol == 2){
          main();
        }else if(winningcontrol == 1){
          game();
        }        
      }
  
  }
     return 0;
}

int main(){
int start;
int creditsmenu;
int chooselanguage;
printf("Welcome to Walking Simulator, (1)-Play (2)-Credits (3)-Quit (4)-Switch Language: \n ");
scanf("%i", &start);
switch(start){
    case 1: 
    game();
    break;
    case 2:
    printf("Credits: Programmer - Leo Rassi (UFMT) (1)-Back: \n");
    scanf("%i", &creditsmenu);
    if(creditsmenu == 1){
      main();
    }
    break;
    case 3: 
    printf("Quitting... \n");
    break;
    case 4:
    printf("Choose the language: (1) to English (2)-Portuguese(Brazil): ");
    scanf("%i", &chooselanguage);
    if(chooselanguage == 1){
      main();
    }else if(chooselanguage == 2){
      pagina();
    }
  
    break;

    default:
    main();
    break;
}

    return 0;

}