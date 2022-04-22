cmake_minimum_required(VERSION 3.20.3)

project(MiniBox VERSION 0.1)

set(TARGET_BINARY "minibox")

# Options
option(ECHO_INCLUDE "Include echo command into the executable" ON)

set(ECHO_BUILD ${ECHO_INCLUDE})


if(ECHO_INCLUDE STREQUAL ON)
	set(ECHO_SOURCE_FILE src/coreutils/echo.cpp)
elseif()
	set(ECHO_SOURCE_FILE "")
endif()


configure_file(MiniBoxConfig.h.in config.h)

add_executable(
	${TARGET_BINARY}

	src/MiniBox.cpp
	src/applets.cpp

	${ECHO_SOURCE_FILE}
)

target_include_directories(
	${TARGET_BINARY} PUBLIC
	include/
	${CMAKE_BINARY_DIR}
)
