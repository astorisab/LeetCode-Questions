
#!/bin/bash

# Stop on errors, print commands
# See https://vaneyckt.io/posts/safer_bash_scripts_with_set_euxo_pipefail/
set -Eeuo pipefail
set -x


for cpp in *.cpp

do
   mv $cpp c++ || continue
done

echo "cpp files moved"
for py in *.py
do
   mv "$py" python || continue
done
echo "python files moved"
for swift in *.swift
do
   mv "$swift" swift: || continue
done
echo "swift files moved"
