#include "mutator.h"
#include <cstdlib>
std::vector<uint8_t> Mutator::mutate_bytes(const std::vector<uint8_t>& input) { std::vector<uint8_t> mutated = input; if (!mutated.empty()) { size_t idx = rand() % mutated.size(); mutated[idx] ^= (1 << (rand() % 8)); } return mutated; }

// Incremental development step #8

// Incremental development step #21

// Incremental development step #34
