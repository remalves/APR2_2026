/* Faça um programa que receba um número inteiro maior que 1 e verifique se o número é
primo ou não. Caso o usuário informe um valor de entrada inválido (valor menor ou igual a 1),
o programa deverá solicitar um novo valor até que um número válido seja digitado.
Um número é primo quando é divisível apenas por 1 e por ele mesmo */

 #include <stdio.h>
 #include <locale.h>
 #include <windows.h>
 
 int main()
 {
     setlocale(LC_ALL, "pt-BR");
     SetConsoleOutputCP(CP_UTF8);

     int num;

     do
     {
        printf("Digite um numero maior que 1:\n");
        scanf("%d", &num);
     }while(num<=1);

     int eh_primo = 1, divs = 0, i;

     for(i=2; i<=num; i++)
     {
        if(num % i == 0)
            divs++;
     }

     if(divs > 2)
     {
        eh_primo = 0;
     }

     if(eh_primo)
     {
        printf("O nº %d é primo", num);
     }
     else
     {
        printf("O nº %d não é primo", num);
     }
     
     return 0;
 }