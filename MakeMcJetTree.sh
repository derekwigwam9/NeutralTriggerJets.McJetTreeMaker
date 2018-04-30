#!/bin/bash
# 'MakeMcJetTree.sh'
# Derek Anderson
# 04.10.2018
#
# Use this to run 'MakeMcJetTree.C'
# in batch mode.

root -b -q MakeMcJetTree.C\("true"\)
