set(SOURCE_LIB
        Factories/OrcFactory.cpp
        Units/Unit.cpp
        Spells/Spell.cpp
        Factories/HumanFactory.cpp
        Factories/GoblinFactory.cpp
        Factories/ElfFactory.cpp
        CArmy.cpp
        Boss/Boss.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(unit_lib STATIC ${SOURCE_LIB})
