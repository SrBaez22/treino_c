#include <stdio.h>
#include <string.h>

void BracketMatcher(char * str) {

  int contador = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == '(') {
      contador++;
    } else if (str[i] == ')') {
      contador--;
      if (contador < 0) {   // ")" sem "(" correspondente
        printf("%d", 0);
        return;
      }
    }
  }

  printf("%d", contador == 0 ? 1 : 0);

}

// keep this function call here
int main(void) {

  BracketMatcher(coderbyteInternalStdinFunction(stdin));
  return 0;

}