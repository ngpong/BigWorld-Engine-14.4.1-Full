#!/bin/bash

nohup ./bin/server/el7_debug/server/baseapp > ./bin/server/el7_debug/server/baseapp.log 2>&1 &
nohup ./bin/server/el7_debug/server/baseappmgr > ./bin/server/el7_debug/server/baseappmgr.log 2>&1 &
nohup ./bin/server/el7_debug/server/cellapp > ./bin/server/el7_debug/server/cellapp.log 2>&1 &
nohup ./bin/server/el7_debug/server/cellappmgr > ./bin/server/el7_debug/server/cellappmgr.log 2>&1 &
nohup ./bin/server/el7_debug/server/dbapp > ./bin/server/el7_debug/server/dbapp.log 2>&1 &
nohup ./bin/server/el7_debug/server/dbappmgr > ./bin/server/el7_debug/server/dbappmgr.log 2>&1 &
nohup ./bin/server/el7_debug/server/loginapp > ./bin/server/el7_debug/server/loginapp.log 2>&1 &
nohup ./bin/server/el7_debug/server/serviceapp > ./bin/server/el7_debug/server/serviceapp.log 2>&1 &
