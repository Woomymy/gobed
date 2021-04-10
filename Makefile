CC ?= cc
BUILD ?= build
NAME ?= gobed
CFILES= $(shell find src -name *.c -type f)
HFILES=$(shell find src -name *.h -type f)

OBJS := $(patsubst %.c, $(BUILD)/%.o, $(CFILES))
CFLAGS := \
	-O3 \
	-Wall \
	-Werror
	
DEVCFLAGS := \
	-fsanitize=address \
	-fsanitize=undefined \
	-g

$(BUILD)/%.o: %.c $(CFILES) $(HFILES)
	@mkdir -p $(BUILD)/src
	@echo -e " \x1b[96m[ C ]\x1b[m $<"
	@$(CC) -c $(CFLAGS) $(DEVCFLAGS) -o $@ $<

$(BUILD): $(OBJS)
	@mkdir -p $(BUILD)
	@$(CC) $(OBJS) $(DEVCFLAGS) -o $(BUILD)/$(NAME)

run: $(BUILD)
	@$(BUILD)/$(NAME)

all: $(BUILD)

$(NAME): $(BUILD)

clean:
	@rm -rf $(BUILD)

strip:
	@strip -s $(BUILD)/$(NAME)
