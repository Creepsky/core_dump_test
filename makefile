CXXFLAGS += -std=c++11
core_dump_test: main.o
	$(CXX) -o core_dump_test main.o
