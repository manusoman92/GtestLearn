cmake_minimum_required(VERSION 3.20)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
set(TARGET CaluclatorTest)
set(SOURCES calculatortest.cpp ../src/calculator.cpp)
set(HEADER )
add_executable(${TARGET} ${SOURCES})
 target_link_libraries(${TARGET} PUBLIC
 						${GTEST_LIBRARIES}
						 Calculator
						 pthread
						)
 add_test(
			NAME ${TARGET}
			COMMAND ${TARGET}
	)