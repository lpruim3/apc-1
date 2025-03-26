#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(){
    // unsigned char -> 0 a 255

    // unsigned char -> a a 4bi
    // short int -> -32mil a 32 mil 
    // unsigned short int -> 0 a 65 mil
    // long int -> -nonilhao a nonilhao
    // unsigned long int -> 0 a 18lhao

    // long double -> quase 0 a um numero que nao sei pronunciar
    printf("O tipo 'short int' ocupa %i bytes\n",  sizeof(short int));
    printf("O tipo 'long int' ocupa %i bytes\n",  sizeof(long int));
    printf("O tipo 'long doble' ocupa %i bytes\n",  sizeof(long double));

    printf("O tipo 'unsigned char' vai de 0 a %i\n", UCHAR_MAX);
    printf("O tipo 'unsigned int' vai de 0 a %i\n", UINT_MAX);
    printf("O tipo 'short int' vai de %i a %i\n", SHRT_MIN, SHRT_MAX);
    printf("O tipo 'unsigned short' vai de 0 a %i\n", USHRT_MAX);
    printf("O tipo 'long int' vai de %i a %i\n", LONG_MIN, LONG_MAX);
    printf("O tipo 'unsigned long int' vai de 0 a %i\n", ULONG_MAX);
    printf("O tipo 'long double' vai de %E a %E\n", LDBL_MIN, LDBL_MAX);

    return 0;
}