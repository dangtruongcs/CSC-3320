1.	#include<stdio.h>
int main()
{
char ch;	// initiate char
printf("Enter a password : ");	// display the prompt to ask for user input
int count = 0;
do{
ch = getchar();	// get user input
count++;
}
while(ch != '\n');	// while loop to check for characters inserted by user
int score = -(10 - count + 1) * 5;	// set score
printf("Score = %d\n", score);		// display score
if(score < -30)		// if statement when score is less than 30
printf("The password is unsafe! Please reset."); 	// display when score is less than 30
else
printf("The password is safe.");	// display output when score is higher than 30
return 0;
}
