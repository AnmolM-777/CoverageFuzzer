#ifndef FORKSERVER_H
#define FORKSERVER_H
#include <string>
#include <vector>
#include <cstdint>
enum ExitStatus { SUCCESS, TIMEOUT, CRASH };
class Forkserver { std::string target_path; uint8_t* trace_ptr; public: Forkserver(const std::string& path, uint8_t* shm_ptr); void start(); ExitStatus run_target(const std::vector<uint8_t>& input); };
#endif

// Incremental development step #5

// Incremental development step #18

// Incremental development step #31

// Incremental development step #44

// Incremental development step #57

// Incremental development step #70
