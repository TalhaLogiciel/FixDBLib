


set(SRCS
        DataAdapterFIXAPI_KXImpl.cpp
        DataKXAPI.cpp
        InputAPI.cpp
        Manager.cpp
        )


 #add_executable(FixDBLib ${SRCS})
 add_library(FixDBLib SHARED ${SRCS})

 target_include_directories(FixDBLib PUBLIC ${PROJECT_SOURCE_DIR}/include)

 #target_link_libraries(FixDBLib)