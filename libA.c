#include <stdio.h>
#include "libB.h"

void funcA(void)
{
    printf("CALL lib A enter %s:%d\n", __FILE__, __LINE__);
    funcB();
    printf("CALL lib A exit  %s:%d\n", __FILE__, __LINE__);    
}
