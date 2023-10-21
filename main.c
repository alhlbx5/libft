#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
//#include "libft.h"

int main()
{
	char d[20] = "12";
	char *s = "67890";
	
	printf("result is :  << %lu >> \n", strlcat(d, s, 15));

	printf("TEST: %s\n", d);
}
