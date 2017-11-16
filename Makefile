# Programmer: Alfredo Yebra Jr.
# Date: November 15, 2017

APP     := run
SRCDIR  := src
INCDIR  := include
SRCS    := $(wildcard $(SRCDIR)/*.c)
OBJS    := $(SRCS:.c=.o)
CC      := gcc
CFLAGS  := -Wall -O3 -I$(INCDIR)
RM      := rm $(OBJS) $(APP)

.PHONY: all clean

all: $(APP)
$(APP): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^
%.o: %.c
    $(CC) -c $(CFLAGS) $< -o $@
clean:
    $(RM)
