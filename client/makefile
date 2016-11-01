CC := g++
TARGET := client
OBJ := client.o utils.o
$(TARGET) : $(OBJ)
	$(CC) -o $@ $^
clinet.o : client.cpp
	$(CC) -c $^ -o $@
utils.o : ../utils.cpp
	$(CC) -c $^ -o $@
