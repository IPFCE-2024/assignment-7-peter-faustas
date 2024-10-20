#include "stack.h"
#include <assert.h>

int main(void)
{
    stack s;

    initialize(&s);
    //Law 1 - tjekker om vores stack er tom, hvis den ikke er abort den programmet.
    assert(empty(&s) == true);

    //Law 2 - pusher en værdi ind i vores stack, popper den og sætter værdien lig y.
    //Aborter programmet, hvis vores stack ikke er tom og y ikke er lig 2.
    push(2, &s);
    int y = pop(&s);
    assert(empty(&s) == true);
    assert(y == 2);

    //Law 3
    push(4,&s);
    push(5,&s);
    int y0 = pop(&s);
    int y1 = pop(&s);
    assert(empty(&s) == true);
    assert(y0 == 5);
    assert(y1 == 4);
    

    printf("Alle love kører smurt\n");
    return 0;
}
