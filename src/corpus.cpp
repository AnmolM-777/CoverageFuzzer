#include <vector>
#include <cstdint>
struct QueueEntry { std::vector<uint8_t> data; bool has_new_coverage; };
class Corpus { std::vector<QueueEntry> entries; public: void add(const std::vector<uint8_t>& in) { entries.push_back({in, true}); } size_t size() const { return entries.size(); } };

// Incremental development step #10
