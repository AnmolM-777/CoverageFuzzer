#ifndef MUTATOR_H
#define MUTATOR_H
#include <vector>
#include <cstdint>
class Mutator { public: static std::vector<uint8_t> mutate_bytes(const std::vector<uint8_t>& input); };
#endif

// Incremental development step #7
