#include <stdio.h>
#include <stdlib.h>

// Transforma decimal para binário de forma iterativa
int
dectobin_iterativa (int numero)
{
  int quociente, resto, counter = 0;
  int *resultado = NULL;

  if (numero < 2)
    quociente = numero;

  while (numero >= 2)
    {
      quociente = numero / 2;
      resto = numero - (2 * quociente);
      resultado = (int *) realloc (resultado, (counter + 1) * sizeof (int));
      resultado[counter++] = resto;
      numero = quociente;
    }

  resultado = (int *) realloc (resultado, (counter + 1) * sizeof (int));
  resultado[counter++] = quociente;

  while (--counter >= 0)
    {
      printf ("%d", resultado[counter]);
    }

  printf ("\n");

  free (resultado);
  return 1;
}

// Transforma decimal para binário de forma recursiva
//int dectobin_recursiva(int numero){
//
//      if(numero < 2) return numero;
//
//      return (10 * dectobin_recursiva(numero / 2)) + numero % 2;
//}

int
main (int argc, char *argv[])
{

  int numero;			//decimal;

  scanf ("%d", &numero);

  dectobin_iterativa (numero);
//      decimal = dectobin_recursiva(numero);

//      printf("%d\n", decimal);

  return 0;
}
