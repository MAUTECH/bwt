// Copyright 2012 Eric Liang

#ifndef SORTS_H_
#define SORTS_H_

#include <inttypes.h>
#include <time.h>
#include <memory.h>

#include <iostream>
#include <fstream>

using std::ostream;
using std::string;

class triplet {
 public:
    uint32_t arr[3];
    uint32_t label;

    triplet(uint32_t a, uint32_t b, uint32_t c);
    triplet() {}

    bool operator<(const triplet r) const;
    bool operator==(const triplet r) const;
    bool operator!=(const triplet r) const;
    friend ostream& operator<<(ostream &out, const triplet&x);
};

void char_sort_to(const char *base, size_t sz, char *output);
void lsd_sort(triplet *T, size_t sz);

#endif  // SORTS_H_
