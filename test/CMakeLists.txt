set(TEST_SOURCES
	main.cpp
	)

add_executable(test ${TEST_SOURCES})
target_compile_features(test PUBLIC cxx_std_20)
target_link_libraries(test PRIVATE Knitpp)
