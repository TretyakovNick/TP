set(SOURCE_LIB
        Factories/OrcFactory.cpp
        Units/Unit.cpp
        Factories/HumanFactory.cpp
        Factories/GoblinFactory.cpp
        Factories/ElfFactory.cpp
        CArmy.cpp
        Maze/Maze.cpp
        Maze/MazeCell.cpp
        Boss/Boss.cpp
        Units/CompositeUnit.cpp
        FactoryUpgrades/FactoryDecorator.cpp
        FactoryUpgrades/BaseDecorator.cpp
        Game.cpp
        Maze/DSU.cpp
        Commands/Command.h
        Commands/MazeCommands/MazeCommands.cpp
        Commands/SlotCommands/SlotMerge.cpp
        Commands/ParseKey.cpp
        Commands/BaseCommands/BuyBaseUnits.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(lib STATIC ${SOURCE_LIB})