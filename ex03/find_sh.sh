#bin/sh

find . -type f -name "*.sh" -exec basename {} -sh \; | sed -e 's/\.sh$//'
