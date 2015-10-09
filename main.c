#include <stdio.h>
#include "libA.h"

int main(void)
{
    printf("CALL lib main enter %s:%d\n", __FILE__, __LINE__);
    funcA();
    printf("CALL lib main exit  %s:%d\n", __FILE__, __LINE__);

    return 0;
}
