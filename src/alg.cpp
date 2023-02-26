// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    int a = 0;
    for (int i = 1; i <= value; ++i) {
        if (value % i == 0)
            a += 1;
    }
    if (a == 2)
        return true;
    else
        return false;
}

uint64_t nPrime(uint64_t n) {
    const int SIZE = 100 * 1000;
    const int N = 9500;
    int a[SIZE];
    for (int i = 2; i < SIZE; ++i)
        a[i] = 1;
    int k = 1;
    int value = 2;
    while (k < n) {
        for (int i = 2 * value; i < SIZE; i += value)
            a[i] = 0;
        for (int i = value + 1; i < SIZE; ++i)
            if (a[i] == 1) {
                value = i;
                break;
            }
        ++k;
    }

    return value;
}

uint64_t nextPrime(uint64_t value) {
    for (uint64_t m = value + 1; ; ++m) {
        if (checkPrime(m)) {
            return m;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t s = 0;
    for (uint64_t c = 2; c <= hbound; ++c) {
        if (checkPrime(i)) {
            s += c;
        }
    }
    return s;
}
