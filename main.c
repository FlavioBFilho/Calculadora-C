#include <stdio.h>
#include <math.h>
#include <locale.h>

void Entrada(float *a, float *b){
  printf("\nDigite o primeiro número: ");
  scanf("%f", &*a);
  printf("\nDigite o segundo número: ");
  scanf("%f", &*b);
}

float Adicao(float a, float b){
  float r;
  r = a+b;
  return r;
}

float Subtracao(float a, float b){
  float r;
  r = a-b;
  return r;
}

float Multiplicacao(float a, float b){
  float r;
  r = a*b;
  return r;
}

float Divisao(float a, float b){
  float r;
  r = a/b;
  return r;
}

float RaizQuadrada(float v){
  float r;
  r = sqrt(v);
  return r;
}

void ParImpar(float v){ 
  printf("%.2f é ", v);
  if((int)v%2==0){
    printf("PAR");
  }
  else{
    printf("IMPAR");
  }
  printf("\n");
}

float Maior(float a, float b){
  float r;
  if(a>b){
    r = a;
  }
  else{
    r = b;
  }
  return r;
}

float Menor(float a, float b){
  float r;
  if(a<b){
    r = a;
  }
  else{
    r = b;
  }
  return r;
}

float Media(float a, float b){
  float r;
  r = (a+b)/2;
  return r;
}

void ExibirValores(float a, float b){
  float i;
  printf("Os valores entre %.2lf e %.2lf são:\n", a, b);
  for(i=Menor(a, b)+1;i<Maior(a, b);i++){
    printf("%.2lf\n", i);
  }
}

void Barra(){
  int i;
  for(i=0;i<20;i++){
    if(i==0 || i==19){
      printf("|");
    }
    else{
      printf("-");
    }
  }
  printf("\n");
}

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  int op;
  float a, b;
  do{
    printf("\n");
    Barra();
    printf(" 1 - Adição\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 5 - Raiz Quadrada\n 6 - Par ou Ímpar\n 7 - Maior Valor\n 8 - Menor Valor\n 9 - Media\n 10 - Exibir Valores\n 20 - Sair\n");
    Barra();
    printf("Escolha uma operação: ");
    scanf("%d", &op);

	system("cls");
    switch(op){
      case 1:
        Entrada(&a, &b);
        printf("Resultado = %.2f\n", Adicao(a, b));
      break;
      case 2:
        Entrada(&a, &b);
        printf("Resultado = %.2f\n", Subtracao(a, b));
      break;
      case 3:
        Entrada(&a, &b);        
        printf("Resultado = %.2f\n", Multiplicacao(a, b));
      break;
      case 4: 
        Entrada(&a, &b);      
        printf("Resultado = %.2f\n", Divisao(a, b));
      break;
      case 5:
        Entrada(&a, &b);
        printf("Resultado A = %.2lf\nResultado B = %.2lf\n", RaizQuadrada(a), RaizQuadrada(b));
      break;
      case 6:
        Entrada(&a, &b);
        ParImpar(a);
        ParImpar(b);
      break;
      case 7:
        Entrada(&a, &b);
        printf("O maior valor é %.2f\n", Maior(a, b));
      break;
      case 8:
        Entrada(&a, &b);
        printf("O menor valor é %.2f\n", Menor(a, b));
      break;
      case 9:
        Entrada(&a, &b);
        printf("A média de %.2f e %.2f é %.2f\n", a, b, Media(a, b));
      break;
      case 10:
        Entrada(&a, &b);
        ExibirValores(a, b);
      break;
      case 20:
        printf("Até mais!\n");
      break;
      default: printf("Algo deu errado...\nTente novamente\n");
      break;
    }
    system("pause");
    system("cls");
  }while(op!=20);
  return 0;
}
