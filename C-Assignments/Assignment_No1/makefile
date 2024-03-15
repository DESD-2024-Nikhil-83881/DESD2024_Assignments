
TARGET=que6 

CSRC=$(TARGET).c
COBJS=$(CSRC:.c=.o)

CC=gcc
CFLAGS=
LDFLAGS=

$(TARGET): $(COBJS)
	$(CC) $(LDFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $<

run:
	./$(TARGET)

clean:
	rm $(COBJS) $(TARGET)

.phony: clean run
