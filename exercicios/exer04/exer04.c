#include <stdio.h>

int main()
{
  unsigned short int nota1;
  unsigned short int nota2;

  printf("Digite a primeira nota - ");
  scanf("%d", &nota1);

  printf("Digite a segunda nota - ");
  scanf("%d", &nota2);

  float media = (nota1 + nota2) / 2;

  printf("A media do aluno foi de %.1f\n: ", media);
  return 0;
}