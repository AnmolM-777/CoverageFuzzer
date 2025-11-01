#include <iostream>
#include "shared_mem.h"
#include "forkserver.h"
#include "mutator.h"
int main() { std::cout << "=== CoverageFuzzer ML Engine Initialization ===" << std::endl; SharedMemory shm; if (!shm.setup()) return 1; std::cout << "Shared memory bitmap allocated (64KB)." << std::endl; return 0; }
