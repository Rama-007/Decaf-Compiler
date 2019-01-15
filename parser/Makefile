parser: parser.ypp scanner.l ast.h ast.cpp
		bison -d parser.ypp
		flex scanner.l
		g++ -std=c++11 -o parser parser.tab.cpp lex.yy.c ast.cpp -ll -g -ldl -lfl `llvm-config --cppflags --libs --libfiles core --ldflags --system-libs`
		# `llvm-config --cppflags` `llvm-config --ldflags` `llvm-config --libs`
		
