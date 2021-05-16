CC = g++
CFLAGS = -I.

omake: main.cpp Enter_details.h Enter_details.cpp File_function.h
	${CC} -o omake main.cpp Enter_details.h Enter_details.cpp  File_function.cpp ${CFLAGS}

clean:
	rm -rf omake