CXX := g++
CXXFLAGS := -Wall -Wextra -O2 -g -std=c++17
TARGET := test
SRC := test.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)



