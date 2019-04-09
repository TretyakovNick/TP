#!/bin/bash

sudo apt install gnutls-dev
sudo apt-get install libcurl4-openssl-dev
sudo apt-get install sendmail
sudo apt-get install libghc-gsasl-dev

git clone https://github.com/akhtyamovpavel/PatternsCollection.git

cd config.ini cp config.ini PatternsCollection/Decorator/cpp-source/configs

cd PatternsCollection

cmake .
sudo make install

cd ../bin

sudo ./Decorator