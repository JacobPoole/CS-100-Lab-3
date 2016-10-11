COMPILE = g++
OBJS = Add.o Base.o Div.o Mult.o Op.o Operator.o Sqr.o Sub.o

#targets
all: main.cpp $(OBJS)
	$(COMPILE) $(FLAGS) -o a.out main.cpp $(OBJS)

Base.o: Base.h Base.cpp
	$(COMPILE) $(FLAGS) -c Base.cpp

Operator.o: Base.h Operator.h Operator.cpp
	$(COMPILE) $(FLAGS) -c Operator.cpp

Add.o: Base.h Operator.h Add.h Add.cpp
	$(COMPILE) $(FLAGS) -c Add.cpp

Div.o: Base.h Operator.h Div.h Div.cpp
		$(COMPILE) $(FLAGS) -c Div.cpp

Mult.o: Base.h Operator.h Mult.h Mult.cpp
	$(COMPILE) $(FLAGS) -c Mult.cpp

Op.o: Base.h Op.h Op.cpp
	$(COMPILE) $(FLAGS) -c Op.cpp

Sub.o: Base.h Operator.h Sub.h Sub.cpp
	$(COMPILE) $(FLAGS) -c Sub.cpp

Sqr.o: Base.h Sqr.h Sqr.cpp
	$(COMPILE) $(FLAGS) -c Sqr.cpp

clean:
	rm -rf *~ *.o a.out
