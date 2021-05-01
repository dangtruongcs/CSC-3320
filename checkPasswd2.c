#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
int score=0, uppercase_count=0, lowercase_count=0, numbers_count=0;	// initialize int
char ch;	// initiate char
printf("Enter a password :");	// display promt asking user
while ((ch = getchar()) != '\n') {	// while loop to check for user input
if(ch>='a' && ch<='z') {	// if statement for lowercase letters
lowercase_count++;
}
if(ch>='A' && ch<='Z') {	// if statement for uppercase letters
uppercase_count++;
}
if(ch>='0' && ch<='9') {	// if statement for numbers
numbers_count++;
}
}
if(lowercase_count==0) {	// add 20 if input has lowercase
score+=20;
}
if(uppercase_count==0) {	// add 20 if input has uppercase
score+=20;
}
if(numbers_count==0) {	//add 20 if input has numbers
score+=20;
}
printf("Score = %d\n",(-score));	// display score
if(score>30) {	// if statement to check if score is lower than 30
printf("The password is unsafe! Please reset.\n");	// display result with score lower than 30
}
else {
printf("The password is safe.\n");	// display this when score is high
}
return 0;
}
