#include <stdio.h>

int main(void)
{
        //read-only mm
	        char *pStr = "this is stored in the text segment";
		        pStr[0] = 'n';
			        return 0;
				}

