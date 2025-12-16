#ifndef SHARED_MEM_H
#define SHARED_MEM_H
#include <cstdint>
#include <cstddef>
constexpr size_t MAP_SIZE = 65536;
class SharedMemory { int shm_id; uint8_t* trace_bits; public: SharedMemory(); ~SharedMemory(); bool setup(); uint8_t* get_ptr() const { return trace_bits; } void clear(); };
#endif

// Incremental development step #3

// Incremental development step #16

// Incremental development step #29

// Incremental development step #42

// Incremental development step #55

// Incremental development step #68
