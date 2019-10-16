#!/bin/bash
git ls-files --others --ignored --exclude-standard $(git rev-parse --show-toplevel)
