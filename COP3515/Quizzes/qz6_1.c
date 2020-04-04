#include <stdio.h>
#include <string.h>

int main(void)
{
	char *p1 = "Hello!";
	char *p2 = "Hillsborough County";
		
	if (strcmp(p1, p2) == 0)			
		printf("\n\"Hello!\" is identical to \"Hillsborough County\"\n");
	else
		printf("\n\"Hello!\" is different from \"Hillsborough County\"\n");
			
    return 0;
}
