# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/07/19 10:25:37 by sbos          #+#    #+#                  #
#    Updated: 2022/07/19 11:06:57 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

################################################################################

NAME := width

CC := gcc

CFLAGS := -Wall -Wextra -Werror
CFLAGS += -g3

OBJ_DIR := obj

################################################################################

SOURCES := \
	src/main.c

HEADERS := \
	src/main.h\
	src/data.h

################################################################################

SOURCES += \
	src/iterators/width.c

HEADERS += \
	src/iterators/iterator_status.h\
	src/iterators/iterators.h

################################################################################

OBJECTS := $(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))

################################################################################

.PHONY: all
all: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

################################################################################

.PHONY: clean
clean:
	rm -rf $(OBJ_DIR)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

################################################################################
