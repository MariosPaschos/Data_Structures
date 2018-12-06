

#include <random>
#include "Utils.h"


size_t utils::randomGenerator() {
    std::random_device rd;
    std::mt19937 mt(rd());      // Initialize random seed
    std::uniform_int_distribution<int > dist(0, 131);
    return static_cast<size_t >(dist(mt));
}
