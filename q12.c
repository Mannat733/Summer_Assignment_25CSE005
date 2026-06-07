#include <stdio.h>
int main() {
int a, b, mannat, temp;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
mannat = a;
temp = b;
while(mannat != temp) {
if(mannat < temp)
mannat += a;
else temp += b;
}
printf("LCM = %d", mannat);
return 0;
}
