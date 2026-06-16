# tests/CMakeLists.txt

# --- CLI Tests ---
add_executable(cli_test_runner test_cli.cpp)
target_link_libraries(cli_test_runner PRIVATE aix_core CLI11::CLI11 Catch2::Catch2 Catch2::Catch2WithMain)
add_test(NAME CLI_Tests COMMAND cli_test_runner) 

# --- Network Tests ---
add_executable(network_test_runner test_network.cpp)
target_link_libraries(network_test_runner PRIVATE aix_core Catch2::Catch2 Catch2::Catch2WithMain)
add_test(NAME Network_Tests COMMAND network_test_runner) 

# --- Utils Tests ---
add_executable(utils_test_runner test_utils.cpp)
target_link_libraries(utils_test_runner PRIVATE aix_core CLI11::CLI11 Catch2::Catch2 Catch2::Catch2WithMain) 
add_test(NAME Utils_Tests COMMAND utils_test_runner) 

# --- API Handler Tests ---
add_executable(api_handler_test_runner test_api_handler.cpp)
target_link_libraries(api_handler_test_runner PRIVATE aix_core nlohmann_json::nlohmann_json Catch2::Catch2 Catch2::Catch2WithMain)
add_test(NAME Api_Tests COMMAND api_handler_test_runner)

# --- Formatter Tests ---
add_executable(formatter_test_runner test_formatter.cpp)
target_link_libraries(formatter_test_runner PRIVATE aix_core Catch2::Catch2 Catch2::Catch2WithMain)
add_test(NAME Formatter_Tests COMMAND formatter_test_runner)

