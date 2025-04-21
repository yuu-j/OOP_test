CXX = g++

CXXFLAGS = -std=c++17 -Wall -Iinc

SRCS = main.cpp src/Cylinder.cpp

OBJS = $(SRCS:.cpp=.o)

TARGET = Lab07

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

