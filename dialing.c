 #include <stdio.h>
struct dialing_code {
char *country;	// initiate char
int code;	// initiate int
};
int
main (int argc, char* argv[]) {
int intl_code, i;
const struct dialing_code country_codes[] = {	// construct country’s code and name
{"Argentina", 54}, {"Bangladesh", 880},
{"Brazil", 55}, {"Burma (Myanmar)", 95},
{"China", 86}, {"Colombia", 57},
{"Congo, Dem.",243}, {"Egypt", 20},
{"Ethiopia", 251}, {"France", 33},
{"Germany", 49}, {"India", 91},
{"Indonesia", 62}, {"Iran", 98},
{"Italy", 39}, {"Japan", 81},
{"Mexico", 52}, {"Nigeria", 234},
{"Pakistan", 92}, {"Philippines", 63},
};
int n_entries = sizeof(country_codes) / sizeof(*country_codes);	// user input for country’s code
do {
int found = 0;	// if no code was found
printf("Please input the international code(-1 to exit): ");	// display this when no code was found and enter -1 to exit
scanf("%d", &intl_code);	// search for code input
if (intl_code == -1)	// stop the search when no code is found using -1
break; // stop execution
for (i = 0; i < n_entries; i++) {	// loop through codes and countries entered
if (country_codes[i].code == intl_code) {	// if code was found
printf("The country is: %s\n", country_codes[i].country);	// display the country’s name
found = 1;
}
}
if (!found)
printf("Code not found.\n");	// display when code not found
} while(1);
return 0;
