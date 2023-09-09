#include <fmt/core.h>
#include <fmt/format.h>

int main() {
  auto out = fmt::memory_buffer();
  format_to(std::back_inserter(out), "The answer is {}.", 42);
  printf("%s", to_string(out).c_str());
}
