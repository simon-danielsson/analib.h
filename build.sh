#!/usr/bin/env bash

# variables
project=analib
root="$HOME/dev/c/$project/"

# script

cd $root
make build
$root/tests/test

