//
// Created by nick on 27.03.19.
//

#include "Boss.h"

Boss::Boss() {}

Boss *Boss::instance() {
    if (!Boss::m_instance) {
        Boss::m_instance = new Boss();
    }
    return Boss::m_instance;
}

Boss *Boss::m_instance = nullptr;