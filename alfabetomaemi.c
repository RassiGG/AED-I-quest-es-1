#include <stdio.h>

int main(){
    int m;
    int k;
    char alfabetoMaiusculo[26];
    char alfabetoMinusculo[26];
    for(int m = 'A'; m <= 'Z'; m++){
         alfabetoMaiusculo[m - 'A'] = m;

} 
for(int k = 'a'; k<= 'z'; k++){
    alfabetoMinusculo[k - 'a'] = k;

}

printf("Alfabeto Maiusculo: ");
for(int i = 0; i < 26; i++){
    printf("%c", alfabetoMaiusculo[i]);
}
printf("\nAlfabeto Minusculo: ");
for(int i = 0; i<26; i++){
    printf("%c", alfabetoMinusculo[i]);
}
    return 0;
}