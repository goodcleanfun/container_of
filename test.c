#include <stdlib.h>

#include "greatest/greatest.h"
#include "container_of.h"

struct conatainer_test {
    int a;
    int b;
};
    

TEST test_container_of() {
    struct conatainer_test test;
    test.a = 1;
    test.b = 2;
    ASSERT_EQ(container_of(&test.b, struct conatainer_test, b)->a, 1);
    PASS();
}

SUITE(container_of_suite) {
    RUN_TEST(test_container_of);
}

GREATEST_MAIN_DEFS();

int main(int argc, char **argv) {
    GREATEST_MAIN_BEGIN();
    RUN_SUITE(container_of_suite);
    GREATEST_MAIN_END();
}
