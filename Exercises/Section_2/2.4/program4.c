#include <stdio.h>

int main (void)
{
	int x, y, z;
	float a, b, c;

	printf("%d, %d, %d\n", x, y, z);  // prints random integers? 
					  // wonder where that comes from.. 
	printf("%f, %f, %f\n", a, b, c);  // prints 0 floats (0.0000) has negative 
					  // values (-0.0000) 
					  // why is that? idk

	return 0;
} 

