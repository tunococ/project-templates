#-- if gtest:
add_executable(gtest-test
  gtest-test.cpp
)
target_link_libraries(gtest-test PRIVATE
  GTest::gtest_main
  libname
)
gtest_discover_tests(gtest-test)
#--
