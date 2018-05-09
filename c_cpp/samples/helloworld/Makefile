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

NAME = main

BIN = $(NAME)

CC = gcc

ASRCS =
AOBJS = $(ASRCS:.S=.o)

CSRCS = main.c
COBJS = $(CSRCS:.c=.o)

SRCS = $(ASRCS) $(CSRCS)
OBJS = $(AOBJS) $(COBJS)

PHONY = clean test all

.PHONY: $(PHONY)

all: $(BIN)

$(AOBJS): %.o: %.S
	@echo "AS: $<"
	$(CC) -c $(AFLAGS) $< -o $@

$(COBJS): %.o: %.c
	@echo "CC: $<"
	$(CC) -c $(CFLAGS) $< -o $@

$(BIN): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $@

clean:
	rm -f $(BIN)
	rm -f *.o

