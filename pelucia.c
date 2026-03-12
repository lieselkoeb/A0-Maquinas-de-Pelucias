#include <stdlib.h>
#include <stdio.h>

// TYPE DEFINITIONS
struct machine {
    struct machine * next;
    struct machine * prev;
    int probability; // 0..100
    int id;
};

struct sentinel {
    struct machine *begginig;
};

// FOWARD DECLARATIONS

// MAIN

int main() {
    /* code */
    return 0;
}

// FUNCTION IMPLEMENTATIONS