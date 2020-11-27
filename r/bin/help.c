/*****************************************************************
 * This is the file "help.c" for the builtin command in the 	 *
 * Platypus OS shell, "help".									 *
 *****************************************************************/
#include <stdio.h>
// A few important variables
char input
char cprompt = "you@platypusOS:~#"
// more are coming, I think

// Ok, on to the fun stuff!

printf("%c", cprompt)
scanf("%c", input)
if (input == "help" || "HELP" || "Help" || "HeLp" || "hELP" || "hElP" || "help!" || "Help!" || "HELP!" || "hELP!" || "HeLp!" || "hElP"){
	printf("This is the Platypus OS command line. There are a few things that you need to know: \n")
	printf("1. You can login using the 'login' command \n")
	printf("2. This is still in development, but it is still usable \n")
}