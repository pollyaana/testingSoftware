# CMake generated Testfile for 
# Source directory: /home/01/boyackov/testSoftware/new/ctest
# Build directory: /home/01/boyackov/testSoftware/new/ctest
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(gtest_tests "tests/ctest-tests" "--gtest_output=xml:./ctest-tests.xml")
set_tests_properties(gtest_tests PROPERTIES  _BACKTRACE_TRIPLES "/home/01/boyackov/testSoftware/new/ctest/CMakeLists.txt;19;add_test;/home/01/boyackov/testSoftware/new/ctest/CMakeLists.txt;0;")
subdirs("app")
subdirs("external/googletest")
subdirs("tests")
