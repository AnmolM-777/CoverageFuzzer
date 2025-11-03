#include "shared_mem.h"
#include <sys/shm.h>
#include <cstring>
SharedMemory::SharedMemory() : shm_id(-1), trace_bits(nullptr) {}
SharedMemory::~SharedMemory() { if (shm_id >= 0) shmctl(shm_id, IPC_RMID, nullptr); }
bool SharedMemory::setup() { shm_id = shmget(IPC_PRIVATE, MAP_SIZE, IPC_CREAT | IPC_EXCL | 0600); if (shm_id < 0) return false; trace_bits = (uint8_t*)shmat(shm_id, nullptr, 0); return trace_bits != (void*)-1; }
void SharedMemory::clear() { if (trace_bits) std::memset(trace_bits, 0, MAP_SIZE); }

// Incremental development step #4
