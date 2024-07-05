
#include_directories("../Code")

#set(FIXAPI_DIR ${PROJECT_SOURCE_DIR}../Code)
#message("FIXAPI_DIR ==============" ${FIXAPI_DIR})

set(SRCS
        DataAdapterFIXAPI_KXImpl.cpp
        DataKXAPI.cpp
        InputAPI.cpp
        Manager.cpp
        Main.cpp
        )


 add_executable(FixDBLib ${SRCS})

 #set (FIX_API_LIB "D:/FIXHub-VC14/Lib/1FIX.OutProcessAPI_VC17.dll")

#add_library(FIX_API_LIB SHARED IMPORTED)

#set_property(TARGET FIX_API_LIB PROPERTY
#            IMPORTED_LOCATION "D:/FIXHub-VC14/Lib/FIX.OutProcessAPI_VC17.dll")
 

 #add_library(FixDBLib SHARED ${SRCS})

 #set_target_properties(FixDBLib PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
 
 target_include_directories(FixDBLib PUBLIC ${PROJECT_SOURCE_DIR}/include)
 target_include_directories(FixDBLib PRIVATE "../../API")
 target_include_directories(FixDBLib PRIVATE "../../Code/")



target_link_libraries(FixDBLib PRIVATE "D:/FIXHub-VC14/Lib/FIX.OutProcessAPI_VC1764.lib")
#target_link_libraries(FixDBLib PRIVATE ${FIX_API_LIB})

