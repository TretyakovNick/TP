//
// Created by nick on 27.03.19.
//
#ifndef GAME_BOSS_H
#define GAME_BOSS_H

#include <memory>
#include <vector>

class Boss {
private:
    static Boss* m_instance;
    Boss();
    ~Boss() = default;
    
public:
    Boss(const Boss&) = delete;
    Boss &operator=(const Boss&) = delete;
    static Boss *instance();
};

#endif //GAME_BOSS_H
