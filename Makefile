try: BMI.o try.o
	g++ -o BMI try.o BMI.o
BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp
try.o: try.cpp BMI.h
	g++ -c try.cpp
clean:
	rm BMI *.o

