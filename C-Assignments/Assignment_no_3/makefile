
TARGET=que8

CSRC=$(TARGET).c
COBJS=$(CSRC:.c=.o)

CC=gcc
CFLAGS=
LDFLAGS=

$(TARGET).out: $(COBJS)
	$(CC) $(LDFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $<

run:
	./$(TARGET).out

clean:
	rm $(COBJS) $(TARGET).out

.phony: clean run
