#include <stdio.h>
int main() {
int n, r, sum = 0, mannat;
printf("Enter a number: ");
scanf("%d", &n);
mannat = n;   
while(n > 0) {
r = n % 10;        
sum = sum + (r * r * r);
n = n / 10;              
}
if(mannat == sum)
printf("Armstrong number");
else
printf("Not Armstrong number");
return 0;
}
