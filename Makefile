##
## Makefile for jKern in /home/demesy_j/projects/kernel/jKern
## 
## Made by julien demesy
## Login   <demesy_j@epitech.net>
## 
## Started on  Tue Nov 27 15:52:59 2012 julien demesy
## Last update Tue Nov 27 16:23:50 2012 julien demesy
##

NAME	=	jKern.bin

CC	=	gcc
CFLAGS	=	-m32 -march=i586 -Wall -Wextra -Werror\
		-nostdlib -fno-builtin -nostartfiles -nodefaultlibs

LD	=	ld -m elf_i386
LD_FILE	=	linker.ld

RM	=	rm -f

CSRC	=	kernel.c
COBJ	=	$(CSRC:.c=.o)

ASRC	=	loader.s
AOBJ	=	$(ASRC:.s=.o)

$(NAME)	:	$(AOBJ) $(COBJ)
		@echo -e "\n\033[32mCompilation done\n\033[37m"
		@echo -e "\033[34mStep 3 :\033[37m Linking object files\n"
		$(LD) -T $(LD_FILE) -o $(NAME) $(AOBJ) $(COBJ)
		@echo -e "\n\033[32mLinking done\n\033[37m"

all	:	$(NAME)

$(AOBJ)	:	$(ASRC)
		@echo -e "\033[34mStep 1 :\033[37m Assembling jKern loader\n"
		nasm -f elf -o $(AOBJ) $(ASRC)
		@echo -e "\n\033[32mAssembly done\n\033[37m"
		@echo -e "\033[34mStep 2 :\033[37m Compiling jKern\n"

clean	:	
		@echo -e "\033[35mCleaning object files :\033[37m"
		@$(RM) $(AOBJ) $(COBJ) *~
		@echo -e "\033[32mObject files cleaned\033[37m\n"

fclean	:	clean
		@echo -e "\033[35mCleaning binary files :\033[37m"
		@$(RM) $(NAME)
		@echo -e "\033[32mBinary files cleaned\033[37m\n"

re	:	fclean all
