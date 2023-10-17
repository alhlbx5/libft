#!/bin/bash

# Generate the SRCS variable for the Makefile
SRCS=$(ls *.c | tr '\n' ' ')

# Escape special characters in SRCS
SRCS=$(echo "$SRCS" | sed 's/ /\\ /g')

# Update the SRCS variable in the Makefile
sed -i 's/^SRCS\s*=.*/SRCS = '"$SRCS"'/g' Makefile

