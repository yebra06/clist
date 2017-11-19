# Programmer: Alfredo Yebra Jr.
# Date: November 15, 2017

# Apps
APP     := run

# Dirs
SRCDIR  := src
INCDIR  := include

# Source files
SRCS    := $(wildcard $(SRCDIR)/*.c)
OBJS    := $(SRCS:.c=.o)

# Build tools
CC      := gcc
CFLAGS  := -std=c11 -Wall -O3 -I $(INCDIR)

# Helpers
RM      := rm $(OBJS) $(APP)

.PHONY: all clean

all: $(APP)
$(APP): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	$(RM)
