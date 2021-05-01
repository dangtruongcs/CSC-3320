#include <stdio.h>
int main (void) {
int i, j;
char arr[13], ph[12];
printf("Enter phone number [(999)999-9999]: ");
scanf ("%s", arr);
j = 0;
for (i = 0; i < 13; i++) {
if (arr[i] != '(' && arr[i] != ')' {
ph[j]=arr[i];
j++;
}
else if (arr[i] == ')' {
ph[j]='-';
j++;
}
}
printf ("You entered %s\n", ph);
return 0;
}
