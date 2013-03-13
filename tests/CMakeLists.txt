find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories(${ArbitrageFinder_SOURCE_DIR}/src)
include_directories(${Boost_INCLUDE_DIR})

link_directories(${ArbitrageFinder_BINARY_DIR}/src)
add_executable(unit_tests tests.cpp)

target_link_libraries(unit_tests
	${Boost_FILESYSTEM_LIBRARY}
	${Boost_SYSTEM_LIBRARY}
	${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
	ArbitrageLib
	)
