#include <stdio.h>
void myFunction(char name[]) {
  printf("Hello %s\n", name);
}


int main()
{
char y, str[20];
printf("please enter the name");
gets(str, 20, stdin); 
printf("%s", str);
myFunction(str);
return 0;
}
