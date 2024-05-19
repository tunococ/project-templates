cmake_minimum_required(VERSION 3.22)
project(LibName VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

if(PROJECT_IS_TOP_LEVEL)
  include(CTest)
  include(FetchContent)

  # -- if googletest:
  FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
  )
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(googletest)
  include(GoogleTest)
  # --

  # -- if doctest:
  # FetchContent_Declare(
  # doctest
  # GIT_REPOSITORY https://github.com/doctest/doctest.git
  # GIT_TAG v2.4.11
  # )
  # --

  # Test code
  add_subdirectory(tests)
endif()
