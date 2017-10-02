CXXFLAGS += -std=c++11
CXXFLAGS += -g

core_dump_test: main.o
	$(CXX) -o core_dump_test main.o

clean:
	rm core*
	rm *.o
