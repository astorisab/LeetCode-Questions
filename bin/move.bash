#!/bin/bash

# Stop on errors, print commands
# See https://vaneyckt.io/posts/safer_bash_scripts_with_set_euxo_pipefail/
set -Eeuo pipefail
set -x



for cpp in *.cpp
do
   [mv "$cpp" c++] || continue
done
echo "cpp files moved"
mv *.py python
mv *.swift swift
