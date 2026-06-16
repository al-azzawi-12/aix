#pragma once
#include "cli/arg_parser.hpp"

namespace aix {
class AppEngine {
  public:
    AppEngine() = default;

    int Run(const aix::ConfigOptions &options);
};

} // namespace aix
