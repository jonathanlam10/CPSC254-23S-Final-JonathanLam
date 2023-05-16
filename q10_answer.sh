#!/bin/bash

# Create directories
mkdir -p final/src
mkdir -p final/data/main
mkdir -p final/data/backup
mkdir -p final/config

# Move files to the appropriate directories
mv main.cpp final/src/
mv header.h final/src/
mv mainDB.db final/data/main/
mv backupDB.db final/data/backup/
mv config.yml final/config/
mv README.MD final/

# Create an empty file if desired
touch final/empty_file.txt
