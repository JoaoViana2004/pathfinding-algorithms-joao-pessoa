# Compilador e flags
CC = g++
CFLAGS = -Wall -std=c++11
AR = ar
ARFLAGS = rcs

# Diretórios
SRCDIR = src
INCLUDEDIR = include
OBJDIR = obj
LIBDIR = lib
BINDIR = bin

# Arquivos fonte e objetos
SOURCES := $(wildcard $(SRCDIR)/*.cpp)
OBJECTS := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))


# Nome do executável
TARGET = $(BINDIR)/main.exe

# Regra para compilar o executável
$(TARGET): $(OBJECTS) | $(BINDIR)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

# Regra para compilar arquivos .cpp em .o
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCLUDEDIR) -c $< -o $@

# Regra para criar a biblioteca estática
$(LIBDIR)/$(LIBRARY): $(OBJECTS)
	@mkdir -p $(LIBDIR)
	$(AR) $(ARFLAGS) $@ $(OBJECTS)

# Regra para criar o diretório obj, se necessário
$(OBJDIR):
	@mkdir -p $@

# Regra para criar o diretório bin, se necessário
$(BINDIR):
	@mkdir -p $@

# Limpar arquivos gerados
clean:
	@echo "Cleaning up..."
	@del /Q $(OBJDIR)\*.o 2>nul
	@if exist $(OBJDIR) rmdir /S /Q $(OBJDIR)
	@del /Q $(LIBDIR)\*.a 2>nul
	@if exist $(LIBDIR) rmdir /S /Q $(LIBDIR)
	@del /Q $(TARGET) 2>nul
	@if exist $(BINDIR) rmdir /S /Q $(BINDIR)
	@echo "Cleanup complete."

.PHONY: clean