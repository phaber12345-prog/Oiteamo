#include <stdio.h>

int main () {
    char gtx5070[19]= "gtx 5070";
    char gtx5080[19]= "gtx 5080";
     //nome dos produtos

    unsigned int estoque5070 =1700;
    unsigned int estoque5080 =2500;
    //estoque de cada produto
    float gtx5070A = 2000.50;
    float gtx5080B =2599.50;
    //valor das placas

    unsigned int  estoqueminimo5070 = 1500;
    unsigned int estoqueminimo5080 = 3000;

  double valortotal5070;
   double   valortotal5080;
   int resultado5070 , resultado5080;


  printf("Produto %s tem estoque %u Unidades e o valor unitario e R$ %.2f Reais\n",gtx5070,estoque5070,gtx5070A);
  printf("Produto %s tem estqoue %u Unidades e o valor unitario e R$ %.2f Reais\n",gtx5080,estoque5080,gtx5080B);

  resultado5070= estoque5070 > estoqueminimo5070;
  resultado5080= estoque5080 > estoqueminimo5080;
  printf("O Produto %s tem estoque minimo %d\n", gtx5070, resultado5070);
  printf("O Produto %s tem estoque minimo %d\n", gtx5080, resultado5080);
  }