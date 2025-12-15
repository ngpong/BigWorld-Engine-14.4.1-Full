#!/bin/bash

pkill baseapp
pkill baseappmgr
pkill dbapp
pkill dbappmgr
pkill cellapp
pkill cellappmgr
pkill loginapp
pkill -9 serviceapp

rm -rf ./bin/server/el7_debug/server/*.log
