cmake_minimum_required(VERSION 3.10.0) 

#sets variable CMAKE_MINIMUM_REQUIRED_VERSION 
#macOS High Sierra : no default
#Ubuntu Bionic Beaver -> LTS 18 in April 2018 : 3.10.2



project(testing VERSION 0.0
		DESCRIPTION "learning CMake"
		LANGUAGES CXX)

add_executable(main source/main.cpp)
target_include_directories(main PUBLIC third_party/json)
target_compile_features(main PUBLIC cxx_std_11)
