CFLAGS=-Wl,--no-as-needed
LDFLAGS=-ldl

all: addrs

addrs:
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $@.c
