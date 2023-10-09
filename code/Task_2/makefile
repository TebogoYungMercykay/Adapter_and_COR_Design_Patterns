CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

SRC_FILE = main.cpp
TARGET = main

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC_FILE)
	$(CXX) $(CXXFLAGS) $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)