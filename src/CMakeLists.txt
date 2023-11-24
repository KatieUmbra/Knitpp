set(LIB_SOURCES
	knitpp.c++
	)
add_library(Knitpp STATIC)
target_compile_features(Knitpp PUBLIC cxx_std_20)
target_sources(Knitpp PUBLIC FILE_SET CXX_MODULES FILES ${LIB_SOURCES})
