#!/bin/bash

cd raspberry_pi/usr/local

sudo chmod +x bin/Facade
LD_LIBRARY_PATH=/lib ./bin/Facade
