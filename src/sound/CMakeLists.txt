add_sources(springlobbySrc alsound.cpp)
add_to_global(link_directories  ${CMAKE_CURRENT_BINARY_DIR} )
clear(sound_libraries)
IF ( OPTION_SOUND )
	Add_Subdirectory( alure )
	FIND_PACKAGE(OpenAL REQUIRED)
	INCLUDE_DIRECTORIES(${OPENAL_INCLUDE_DIR})
	INCLUDE_DIRECTORIES( ${CMAKE_CURRENT_SOURCE_DIR}/alure/include )
	add_to_global( sound_libraries alure ${OPENAL_LIBRARY} )
ELSE ( OPTION_SOUND )
    # Disable sound.
    ADD_DEFINITIONS( -DDISABLE_SOUND )
ENDIF ( OPTION_SOUND )