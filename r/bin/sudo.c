// code for giving yourself SUPERUSER powers
/***************************************************
 * This is licensed under the GNU General Public   *
 * License version 3, in other words, you can do   *
 * whatever you want with it, it's not our fault   *
 * if it breaks, and this has to be in all big     *
 * parts of the code, or else you're violating the *
 * most generous software license in existance	   *
 *************************************************/
#include<stdio.h> 
int main(){
	char state = "platypusA"
	char input[4]
	scanf("%s", input)
	if (input == "sudo" || "Sudo") {
		char password
		scanf("%s", password)
		if (password == "Pl@typus&"){
			char state = "root"
			printf("You are now %s", state)
		}
	}
}
