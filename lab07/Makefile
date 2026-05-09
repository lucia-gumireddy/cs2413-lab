CC = gcc
CFLAGS = -std=c11

q1: question1/student.c question1/tests.c
	$(CC) $(CFLAGS) question1/student.c question1/tests.c -o q1

run1: q1
	./q1

q2: question2/student.c question2/tests.c
	$(CC) $(CFLAGS) question2/student.c question2/tests.c -o q2

run2: q2
	./q2

q3: question3/student.c question3/tests.c
	$(CC) $(CFLAGS) question3/student.c question3/tests.c -o q3

run3: q3
	./q3

q4: question4/student.c question4/tests.c
	$(CC) $(CFLAGS) question4/student.c question4/tests.c -o q4

run4: q4
	./q4

q5: question5/student.c question5/tests.c
	$(CC) $(CFLAGS) question5/student.c question5/tests.c -o q5

run5: q5
	./q5

q7: question7/student.c
	$(CC) $(CFLAGS) question7/student.c -o q7

run7: q7
	./q7

clean:
	rm -f q1 q2 q3 q4 q5 q7