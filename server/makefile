CC := g++
TARGET := server
OBJ := server.o utils.o
$(TARGET) : $(OBJ)
	$(CC) -o $@ $^
server.o : server.cpp
	$(CC) -c $^ -o $@
utils.o : ../utils.cpp
	$(CC) -c $^ -o $@
