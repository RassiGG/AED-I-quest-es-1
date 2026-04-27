#include <stdio.h>
 int main(){
      int m;
      float k;
      int somaInt = 0;
      float somaFloat = 0;

      for (int m = 1; m<101; m++ ){
         somaInt += m;
      }
               printf("Soma dos inteiros de 1 a 100: %i\n", somaInt);

               for (float k = 0.5; k<101.0; k++){
                  somaFloat += k;
               }
               
               printf("Soma dos numeros de 0.5 a 100: %.2f\n", somaFloat);
               

    return 0;
    
 }