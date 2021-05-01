#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* strcpy(char* strDest, const char* strSrc){
int i;
for(i = 0; strSrc[i] != '\0'; i++)
strDest[i] = strSrc[i];
strDest[i]= '\0';
return strDest;
}
int main ()
{
char src[]= "My String Pointer”;
char dest[100];
printf("Source string: %s\n", src);
printf("After copying the source string in destination\nDestination string: %s\n",strcpy(dest,src));
return 0;
}
