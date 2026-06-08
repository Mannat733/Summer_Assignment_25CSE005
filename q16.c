#include <stdio.h>
int main() {
int start, end, num, mannat, r, sum;
printf("Enter start of range");
scanf("%d", &start);
printf("Enter end of range");
scanf("%d", &end);
printf("Armstrong numbers between %d and %d are ", start, end);
for(num = start; num <= end; num++) {
mannat = num;
sum = 0;
while(mannat > 0) {
r = mannat % 10;         
sum = sum + (r * r * r); 
mannat = mannat / 10;   
}
if(sum == num)
printf("%d ", num);
}
return 0;
}
