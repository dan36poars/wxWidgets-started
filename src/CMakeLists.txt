set(wxWidgets_CONFIG_EXECUTABLE "/usr/local/bin/wx-config")

set(wxWidgets_wxrc_EXECUTABLE "/usr/local/bin/wxrc")

find_package(wxWidgets COMPONENTS aui adv html xml net richtext core base REQUIRED)

include( "${wxWidgets_USE_FILE}" )

set(SOURCE_FILES
    MyApp.hpp
    MyApp.cpp
    MyFrame.hpp
    MyFrame.cpp
)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ${wxWidgets_LIBRARIES})