CC=gcc
CFLAGS=-std=c99

rotXX: rotXX.c
	$(CC) ${CFLAGS} -orotXX rotXX.c
