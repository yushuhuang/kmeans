TARGET = kmeans

SRCS = main.c kmeans.c
SRCS_FILES = $(foreach F, $(SRCS), $(F))

all:
	gcc -O3 $(SRCS_FILES) -o $(TARGET)

clean:
	@rm -f *.o $(TARGET) data means
