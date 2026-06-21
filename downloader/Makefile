CC = gcc
CFLAGS = -Wall -Wextra -g `pkg-config --cflags gtk4`
LIBS = `pkg-config --libs gtk4`

SRC = src/main.c src/window.c src/download.c
OBJ =	$(SRC:.c=.o)

TARGET = downloader

all:	$(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)

install: $(TARGET)
	sudo cp $(TARGET) /usr/local/bin/

uninstall:
	sudo rm -f /usr/local/bin/$(TARGET)