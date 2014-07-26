CC=gcc
FLAG=-Wall -Werror
all: b_chat a_chat

b_chat:
	$(CC) chat.c -o b_chat -DB $(FLAG)

a_chat:
	$(CC) chat.c -o a_chat -DA $(FLAG)

clean:
	@rm -rfv b_chat a_chat
