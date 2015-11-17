// fact.cc
#include "ex6_8.h"

int MyFact(int val) {
    int ret = 1;
    while(val > 1)
        ret *= val--;
    return ret;
}
