cmake_minimum_required(VERSION 3.20)

# Test executables
add_executable(test_basic ${CMAKE_CURRENT_SOURCE_DIR}/test_basic.cpp)
target_link_libraries(test_basic PRIVATE gbasm_to_c)
target_include_directories(test_basic PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_executable(test_joypad ${CMAKE_CURRENT_SOURCE_DIR}/test_joypad.cpp)
target_link_libraries(test_joypad PRIVATE gbasm_to_c)
target_include_directories(test_joypad PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_executable(test_playtime ${CMAKE_CURRENT_SOURCE_DIR}/test_playtime.cpp)
target_link_libraries(test_playtime PRIVATE gbasm_to_c)
target_include_directories(test_playtime PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_executable(test_flag_action ${CMAKE_CURRENT_SOURCE_DIR}/test_flag_action.cpp)
target_link_libraries(test_flag_action PRIVATE gbasm_to_c)
target_include_directories(test_flag_action PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_executable(test_battle_core ${CMAKE_CURRENT_SOURCE_DIR}/test_battle_core.cpp)
target_link_libraries(test_battle_core PRIVATE gbasm_to_c)
target_include_directories(test_battle_core PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Add tests to CTest
enable_testing()

add_test(NAME BasicTests COMMAND test_basic)
add_test(NAME JoypadTest COMMAND test_joypad)
add_test(NAME PlayTimeTest COMMAND test_playtime)
add_test(NAME FlagActionTest COMMAND test_flag_action)
add_test(NAME BattleCoreTest COMMAND test_battle_core)

# Set test properties
set_tests_properties(BasicTests PROPERTIES 
    PASS_REGULAR_EXPRESSION "All basic tests passed")
set_tests_properties(JoypadTest PROPERTIES 
    PASS_REGULAR_EXPRESSION "Joypad test passed")
set_tests_properties(PlayTimeTest PROPERTIES 
    PASS_REGULAR_EXPRESSION "PlayTime test passed")
set_tests_properties(FlagActionTest PROPERTIES 
    PASS_REGULAR_EXPRESSION "FlagAction test passed")
set_tests_properties(BattleCoreTest PROPERTIES 
    PASS_REGULAR_EXPRESSION "Battle core test passed")
