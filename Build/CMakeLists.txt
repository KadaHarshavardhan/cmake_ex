add_executable(${PROJECT_NAME} 
    ../Source/main.c
)

target_link_libraries(${PROJECT_NAME}
    LINK_PUBLIC
    Sources
)