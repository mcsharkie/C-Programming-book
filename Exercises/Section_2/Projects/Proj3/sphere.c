#include <stdio.h>
#include <unistd.h>

int main(void)
	
{
	float r;
	float pi = 3.142f;
 
	printf("Hi marcel, please enter the radius: \n");
	scanf("%f", &r);
	sleep(1);
	float volume = ( 4.0f / 3.0f ) * pi * (r * r * r);
	printf("Here is the volume, marcel!: %f\n",volume);
	
	return 0;
}
