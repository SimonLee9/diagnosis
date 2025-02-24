#!/bin/bash

export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/usr/local/lib
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/home/rainbow/rplidar_sdk/output/Linux/Release
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/home/rainbow/OrbbecSDK/SDK/lib
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/home/rainbow/slamnav2

cd /home/rainbow/diagnosis && ./diagnostic

