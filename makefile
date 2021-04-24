CC = g++
CFLAGS = -I.

omake: main.cpp Enter_details.h Enter_details.cpp 
	${CC} -o omake main.cpp Enter_details.h Enter_details.cpp  ${CFLAGS}

clean:
	rm -rf omake