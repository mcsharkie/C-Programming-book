#include <stdio.h>
#include <unistd.h>

int main(void)
{
	float dollarEntered;
	float tax;

	printf("yo bro, whats the tax rate today yo?\n");
	scanf("%f", &tax);

	printf("Yo dude, how much wanna put in?\n");
	scanf("%f", &dollarEntered);

	float calculation = dollarEntered + ( dollarEntered * (tax/100)); 
	printf("Heres your money bro %f \n", calculation); 
}
