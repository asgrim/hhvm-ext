#!/bin/bash

hhvm -d extension_dir=. -d hhvm.extensions[]=example1.so $1
