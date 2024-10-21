#include <stdio.h>
#include <string.h>
void hiddenFunc(){
	printf("Successfully called Hidden Function\n");
}
void vulnerableFunction(){
	char buffer[15];
	char success = '0'; 
	char input[100];
	printf("Enter some text :\n");
	scanf("%s",input);
	strcpy(buffer,input);

	if (success == '1'){
	printf("Buffer Overflow Successful. You have changed the value of success to 1");}
	else {
	printf("Try again. 'success' variable is %d. \n",success);
	
	}
}
int main() {
	printf("Welcome to the Simple Stack Overflow Lab\n");
	vulnerableFunction();
	return 0;
	}

