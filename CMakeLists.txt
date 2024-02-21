cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(bn_jumpkeys)

# Create plugin library target
add_library(bn_jumpkeys SHARED src/plugin.cpp)
target_compile_features(bn_jumpkeys PRIVATE cxx_std_17 c_std_99)
target_link_libraries(bn_jumpkeys PRIVATE binaryninjaapi)

# Plugins need to compile with `-fPIC` on Linux
if(${CMAKE_SYSTEM_NAME} STREQUAL "LINUX")
	target_compile_options(bn_jumpkeys PRIVATE "-fPIC")
endif()

# Add vendored API dependency if enabled
option(BN_VENDOR_API "Use the Binary Ninja API submodule" ON)
if(BN_VENDOR_API)
    add_subdirectory(vendor/api)
	# Auto-configure an `install` target
    bn_install_plugin(bn_jumpkeys)
endif()

