#! bin/sh

ldapsearch -x "uid=Z*" | grep "cn: " | cut -c 5- | sort -rd
