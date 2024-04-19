#include "avoidlib/common/utils.hpp"

namespace avoidlib {

bool file_exists(const std::experimental::filesystem::path& p) {
  return (std::experimental::filesystem::exists(p));
}

}  // namespace flightlib
