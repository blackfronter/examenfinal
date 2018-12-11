OBJS = principal.o salida.o
BINARY = programa

CFLAGS = -g -wall
all: programa
# Esta regla compila el programa principal.
programa: $(OBJS)
		g++ -o $(BINARY) $(OBJS)

%.o:%.c
		del $(CFLAGS) -c $< -o $@
clean:
		del $(BINARY).exe  $(OBJS)