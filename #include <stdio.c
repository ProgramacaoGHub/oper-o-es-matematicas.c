#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf ("***CALCULADOR DE MÉDIA***\n" );

    printf ("Digite sua Primeira nota:\n");
    scanf  ("%f", &nota1);
    
    printf ("Digite sua segunda nota:\n");
    scanf ("%f", &nota2);

    printf ("Digite sua terceira nota:\n");
    scanf ("%f", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;
    printf ("a Média é:%.1f", media);


return 0;

}