
#include "test.h"


int main (int, char**) {

#ifdef FOO_TESTING
    run_tests();
#endif
    return 0;
}
