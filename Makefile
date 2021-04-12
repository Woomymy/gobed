CC ?= cc
STRIP ?= strip
BUILD ?= build
NAME ?= gobed
CFILES= $(shell find src -name *.c -type f)
HFILES=$(shell find src -name *.h -type f)

OBJS := $(patsubst %.c, $(BUILD)/%.o, $(CFILES))
CFLAGS := \
	-ansi \
	-pedantic \
	-pedantic-errors \
	-O3 \
	-Wall \
	-Werror
	
DEVCFLAGS := \
	-fsanitize=address \
	-fsanitize=undefined \
	-g

$(BUILD)/%.o: %.c $(CFILES) $(HFILES)
	@mkdir -p $(BUILD)/src
	@echo -e " \x1b[96m[ $(CC) ]\x1b[m $<"
	@$(CC) -c $(CFLAGS) $(DEVCFLAGS) -I src -o $@ $<

$(BUILD): $(OBJS)
	@mkdir -p $(BUILD)
	@echo -e " \x1b[96m[ BIN ]\x1b[m $(BUILD)/$(NAME)"
	@$(CC) $(OBJS) $(DEVCFLAGS) -o $(BUILD)/$(NAME)

.PHONY: all
all: $(BUILD)

.PHONY: 
$(NAME): $(BUILD)

.PHONY: clean
clean:
	@echo -e " \x1b[96m[ RM ]\x1b[m $(BUILD)"
	@rm -rf $(BUILD)

.PHONY: strip
strip:
	@echo -e " \x1b[96m[ $(STRIP) ]\x1b[m $(BUILD)/$(NAME)"
	@$(STRIP) -s $(BUILD)/$(NAME)
