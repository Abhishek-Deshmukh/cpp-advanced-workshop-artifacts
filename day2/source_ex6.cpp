#include <iostream>

static int global;

int foo_stat_local() {
    int stat_loc = 0;
    stat_loc++;
    return stat_loc;
}

int foo_stat_global() {
    global++;
    return global;
}

class BaseClass {
public:
    static int foo_stat_global() {
        global ++;
        return global;
    }
};