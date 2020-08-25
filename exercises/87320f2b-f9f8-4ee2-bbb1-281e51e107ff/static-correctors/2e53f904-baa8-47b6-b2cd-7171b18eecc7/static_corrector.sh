STATUS="$(cmp --silent $1 $2; echo $?)"

if [[$STATUS -ne 0]]; then
    exit(2)
fi