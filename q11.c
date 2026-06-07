#include <stdio.h>
int main() {
int a, b, mannat;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
while (b != 0) {
mannat = b;b = a % b;
a = mannat;}
printf("GCD = %d", a);
return 0;
}
