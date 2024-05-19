add_library(libname)

target_include_directories(libname PUBLIC
  include
)

target_sources(libname PUBLIC
  include/libname/all.hpp
)

target_sources(libname PRIVATE
  libname.cpp
)
