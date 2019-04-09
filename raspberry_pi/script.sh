#!/bin/bash

sudo apt-get install -y git
sudo apt-get install -y cmake 
sudo apt-get install -y libssl-dev
sudo apt-get install -y libboost-all-dev

git clone https://github.com/akhtyamovpavel/PatternsCollection.git
git clone https://github.com/raspberrypi/tools.git

bin_path=$(pwd)/tools/arm-bcm2708/arm-linux-gnueabihf/bin
sysroot_path=../tools/arm-bcm2708/arm-linux-gnueabihf/arm-linux-gnueabihf/sysroot

PATH=$PATH:/$bin_path

cd PatternsCollection

cmake -DON_PI=ON -D SYSROOT=$sysroot_path .
sudo make install DESTDIR=$(pwd)/..
cd ..

sudo mkdir raspberry_pi

sudo mv PatternsCollection raspberry_pi
sudo mv bin-arm raspberry_pi
sudo mv lib-arm raspberry_pi
sudo mv usr raspberry_pi

sudo zip -r raspberry_pi.zip raspberry_pi