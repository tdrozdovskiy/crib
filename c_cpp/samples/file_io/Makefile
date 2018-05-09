############################################################################
# Makefile
#
# Copyright (c) 2018. All Rights Reserved.
# Author: Taras Drozdovskyi t.drozdovskiy@gmail.com
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
############################################################################

TOPDIR := ${shell pwd | sed -e 's/ /\\ /g'}

-include $(TOPDIR)/Make.defs

# Control build verbosity
#
#  V=1: Enable echo of commands

ifeq ($(V),1)
export Q :=
else
export Q := @
endif

NAME = main

BIN = $(NAME)

ASRCS =
AOBJS = $(ASRCS:.S=$(OBJEXT))

CSRCS = main.c
COBJS = $(CSRCS:.c=$(OBJEXT))

SRCS = $(ASRCS) $(CSRCS)
OBJS = $(AOBJS) $(COBJS)

PHONY = clean test all

.PHONY: $(PHONY)

all: $(BIN)

$(AOBJS): %$(OBJEXT): %.S
	@echo "AS: $<"
	$(Q) $(CC) -c $(AFLAGS) $< -o $@

$(COBJS): %$(OBJEXT): %.c
	@echo "CC: $<"
	$(Q) $(CC) -c $(CFLAGS) $< -o $@

$(BIN): $(OBJS)
	$(Q) $(CC) $(LDFLAGS) $(OBJS) -o $@
	$(Q) if [ -e $(BIN) ]; then \
		$(ECHO) -e "$(GREEN)***********************************************$(NORMAL)" ; \
		$(ECHO) -e "$(GREEN)*** $(NAME) has been successfully compiled ****$(NORMAL)" ; \
		$(ECHO) -e "$(GREEN)***********************************************$(NORMAL)" ; \
	fi

# clean:     Removes derived object files, archives, executables, and
#            temporary files, but retains the configuration and context
#            files and directories.

clean:
	$(Q) rm -f $(BIN)
	$(Q) rm -f *.o

test:
	$(Q) if [ -e $(BIN) ]; then \
		$(ECHO) -e "\n$(RED)**************   RUN TEST   *******************$(NORMAL)\n" ; \
		./$(BIN) ; \
		$(ECHO) -e "\n$(RED)************   FINISH TEST   ******************$(NORMAL)\n" ; \
	fi

