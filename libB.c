#include <stdio.h>

void funcB(void)
{
    printf("CALL lib B enter %s:%d\n", __FILE__, __LINE__);
    printf("CALL lib B exit  %s:%d\n", __FILE__, __LINE__);    
}
