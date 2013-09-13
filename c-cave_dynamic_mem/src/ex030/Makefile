# W. H. Bell
# A Makefile to build resource_hog

CC=gcc
TARGET=resource_hog
OBJECTS=main.o

$(TARGET): $(OBJECTS)
	@echo "** Linking Executable"
	$(CC) $(OBJECTS) -o $(TARGET)

clean:
	@rm -f *.o *~

veryclean: clean
	@rm -f $(TARGET)

%.o: %.c
	@echo "** Compiling C Source" 
	$(CC) -c $(INCFLAGS) $< 
