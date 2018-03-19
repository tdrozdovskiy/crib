#!/bin/bash
#==============================================================================
#
# FILE: template.sh
#
# USAGE: template.sh [-d] [-l] [-oD logfile] [-h] [starting directories]
#
# DESCRIPTION: This is a template of bash script. it consists some description
# and main construction, which can be used or removed.
#
# OPTIONS: see function ’usage’ below
# REQUIREMENTS: ---
# BUGS: ---
# NOTES: ---
# AUTHOR: Taras Drozdovskyi, t.drozdovskiy@gmail.com
# COMPANY: Home
# VERSION: 1.0
# CREATED: 18.03.2018 - 12:36:50
# REVISION: 18.03.2018
#==============================================================================


#=== FUNCTION =================================================================
# NAME: usage
# DESCRIPTION: Display usage information for this script.
# USAGE: usage() 
# PARAMETER 1: ---
# PARAMETER 2: ---
# RETURN ---
#==============================================================================

#=== FUNCTION =======+=========================================================
# NAME: dbgtrap
# DESCRIPTION: monitor the variable ’act_dir’
#==============================================================================
function dbgtrap ()
{
	echo "act_dir = \"$act_dir\""
} # ---------- end of function dbgtrap ----------

#------------------------------------------------------------------------------
# traps
#------------------------------------------------------------------------------
trap 'echo "On exit : act_dir = \"$act_dir\""' EXIT

trap dbgtrap DEBUG

#------------------------------------------------------------------------------
# monitoring ...
#------------------------------------------------------------------------------
act_dir=$(pwd)
cd ..
act_dir=$(pwd)
cd 	$HOME
ls

