#!/bin/sh
ifconfig | grep "ether " | tr -d ' ' | cut -c 7-
