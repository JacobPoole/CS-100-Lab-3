COMPILE = g++
OBJS = Add.o Base.o Div.o Mult.o Op.o Operator.o Sqr.o Sub.o Container.o Sort.o VectorContainer.o ListContainer.o SelectionSort.o BubbleSort.o

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

Container.o: Container.cpp Sort.h Base.h Container.h
	$(COMPILE) $(FLAGS) -c Container.cpp

Sort.o: Sort.cpp  Sort.h
	$(COMPILE) $(FLAGS) -c Sort.cpp

VectorContainer.o: VectorContainer.cpp VectorContainer.h
	$(COMPILE) $(FLAGS) -c VectorContainer.cpp

ListContainer.o: ListContainer.h ListContainer.cpp Container.h
	$(COMPILE) $(FLAGS) -c ListContainer.cpp

SelectionSort.o: Sort.h SelectionSort.h SelectionSort.cpp
	$(COMPILE) $(FLAGS) -c SelectionSort.cpp

BubbleSort.o: Sort.h BubbleSort.h BubbleSort.cpp
		$(COMPILE) $(FLAGS) -c BubbleSort.cpp
clean:
	rm -rf *~ *.o a.out
