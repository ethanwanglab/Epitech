#!/bin/sh
echo "$comment"
git add --all && \
git commit -am $comment && \
git push origin master
