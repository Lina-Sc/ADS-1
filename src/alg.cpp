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
        for (int i = 2 * p; i < SIZE; i += value)
            a[i] = 0;
        for (int i = value + 1; i < SIZE; ++i)
            if (a[i] == 1) {
                p = i;
                break;
            }
        ++k;
    }

    return value;
}

uint64_t nextPrime(uint64_t value) {
    int b = 0;
    for (int k = 0; k < value; k++) {
        value += 1;
        for (int j = 0; j <= value; ++j) {
            if (value % j == 0)
                b += 1;
        }
        if (b == 2)
            return value;
        if (value)
            k += value;
    }
}

uint64_t sumPrime(uint64_t hbound) {
    int m = 0;
    int l = 0;
    for (int c = 2; c < hbound; ++c) {
        for (int q = 1; q <= c; ++q) {
            if (c % q == 0)
                l += 1;
        }
        if (l == 2)
            m += c;
    }
    return m;
}
