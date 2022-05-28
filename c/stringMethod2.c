#include <stdio.h>

int main()
{
char str[20];
printf("please enter the name");
fgets(str, 20, stdin); //Syntax : char *fgets(char *str, int size, FILE *stream)
printf("%s", str);

return 0;
}
