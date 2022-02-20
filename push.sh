#!/bin/bash
git add *
echo "Enter your message to commit:"
read message
git commit -m "$message"
git push