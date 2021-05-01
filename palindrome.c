#include <string.h>
#include <stdio.h>
int isPalindrome(char str[]) {	// initialize int parlindrome
int len = strlen(str);	// string length
int left = 0;
int right = len - 1;
char ch;
while(left < right) {	// while loop for left side is less than right side
ch = str[left];		// read from the left side
if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {		// checking letters from left side right
left++;
continue;
}
ch = str[right];		// read from right side
if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {		// checking letters from right side to left
right--;
continue;
}
if(str[left] != str[right]) {	// if read for left and right are the same
return 0;	// return palindrome
}
left++;
right--;
}
return 1;
}
int main() {
char str[1000];	// char string up to 1000 letters
printf("Enter a string: ");	// display prompt asking user to enter a string
gets(str);	// get string
if(isPalindrome(str)) {	// check if this string is a palindrome
printf("%s is a palindrome\n", str);	// display if the string is palindrome
} else {
printf("%s is not a palindrome\n", str);	// display when the string is not a palindrome
}
return 0;
