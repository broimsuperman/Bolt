target_sources(Bolt PRIVATE
    "Client.cpp"
)

add_subdirectory(Mem)
add_subdirectory(Utils)

add_subdirectory(SDK)
add_subdirectory(Bolt)