// src/main.cpp
#include "app_engine.hpp"
#include "cli/arg_parser.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
    aix::ArgParser parser;
    aix::ConfigOptions options;

    try {
        parser.ParseArgument(argc, argv, options);
    } catch (const std::exception &e) {
        std::cerr << "Error parsing arguments: " << e.what() << "\n";
        return EXIT_FAILURE;
    }

    aix::AppEngine engine;
    return engine.Run(options);
}
