## PROGRAM ##

NAME := push_swap

## COMPILER ##

CC = gcc

CFLAGS := -Wall -Wextra -Werror

MAKE := make

## PATHS ##

SRCS_PATH := srcs
INCS_PATH := includes
LFT_PATH := libft

## LIBS/PROGRAMS/EXTERN FUNCTIONS##

LINKS :=  -lft
INCS := $(addprefix -I , $(INCS_PATH) $(LFT_PATH))
LIBS := $(addprefix -L , $(LFT_PATH)) $(LINKS)
FLAGS := $(CFLAGS) $(INCS) $(LIBS)

## SOURCES ##

SRCS := $(wildcard $(SRCS_PATH)/*/*.c) $(wildcard $(SRCS_PATH)/*.c)

OBJS := $(SRCS:%.c=%.o)

## CLEAN ##

RM = rm -rf

## RULES ##

.PHONY: all clean fclean re

%.o: %.c
	@$(CC) -c $(CFLAGS) $(INCS) $< -o $@

## ALL
all: $(NAME)

## NAME
$(NAME): $(OBJS)
	@$(MAKE) -sC $(LFT_PATH)
	@$(CC) $(OBJS) -o $(NAME) $(FLAGS)
	##@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	

## CLEAN	
clean:
	@$(MAKE) clean -C $(LFT_PATH)
	@$(RM) $(OBJS)
	@echo "object fies deleted!"

## FCLEAN
fclean: clean
	@$(MAKE) fclean -C $(LFT_PATH) 
	@$(RM) $(NAME)
	@echo "all files deleted!"
	
## RE
re: fclean all
