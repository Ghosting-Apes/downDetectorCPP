# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/DownDetector_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DownDetector_autogen.dir/ParseCache.txt"
  "DownDetector_autogen"
  )
endif()
