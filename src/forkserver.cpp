#include "forkserver.h"
#include <unistd.h>
#include <sys/wait.h>
Forkserver::Forkserver(const std::string& path, uint8_t* shm_ptr) : target_path(path), trace_ptr(shm_ptr) {}
void Forkserver::start() {}
ExitStatus Forkserver::run_target(const std::vector<uint8_t>& input) { pid_t pid = fork(); if (pid == 0) { _exit(0); } else { int status; waitpid(pid, &status, 0); if (WIFSIGNALED(status)) return CRASH; } return SUCCESS; }

// Incremental development step #6

// Incremental development step #19

// Incremental development step #32

// Incremental development step #45

// Incremental development step #58
