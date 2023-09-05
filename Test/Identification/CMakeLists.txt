cmake_minimum_required(VERSION 3.20)
project(gtsample VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
option(ENABLE_TESTING "Enable Test Builds" ON)

include(FetchContent)

add_executable(progst identification.cc main.cpp)

if(ENABLE_TESTING)
   # enable GTest
   FetchContent_Declare(
    googletest
    # Specify the commit you depend on and update it regularly.
    URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
  )
  # For Windows: Prevent overriding the parent project's compiler/linker settings
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(googletest)
  
  include(CTest)
  include(GoogleTest)
  enable_testing()
  message("Building Tests.")
  include(CodeCoverage.cmake)
  SET(CMAKE_CXX_FLAGS "-g -O0 --coverage -fprofile-arcs -ftest-coverage")
  SET(CMAKE_C_FLAGS "-g -O0 --coverage -fprofile-arcs -ftest-coverage")
  add_executable(st_util_test identification.cc identification_unittest.cc)
  target_link_libraries(st_util_test gtest_main)
  SETUP_TARGET_FOR_COVERAGE(st_util_test_coverage st_util_test coverage_st_util_test_dir)
  gtest_discover_tests(
            st_util_test
            TEST_PREFIX
            "unittests."
            EXTRA_ARGS
            -s
            --reporter=xml
            --out=tests.xml)
endif()            