main: ./built/dijkstra.o ./built/graph.o ./built/heap.o ./built/main.o
	gcc -o ./bin/main ./built/dijkstra.o  ./built/graph.o ./built/heap.o  ./built/main.o 
	 
./built/dijkstra.o: ./src/dijkstra.c
	gcc -o ./built/dijkstra.o -c ./src/dijkstra.c

./built/heap.o: ./src/heap.c
	gcc -o ./built/heap.o -c ./src/heap.c

./built/main.o: ./src/main.c
	gcc -o ./built/main.o -c ./src/main.c

./built/graph.o: ./src/graph.c
	gcc -o ./built/graph.o -c ./src/graph.c

run: ./bin/main
	./bin/main

clean:
	rm ./bin/main 

clean_o: 
	rm ./built/*.o
	rm ./bin/*