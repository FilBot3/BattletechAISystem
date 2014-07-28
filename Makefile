#
#
#
SOURCE_DIR=src/
BUILD_DIR=bin/
COMPILER=g++
MAIN_FILE=01-random-number
SOURCE_FILES=\
	$(SOURCE_DIR)$(MAIN_FILE).cpp 
EXECUTABLE=$(MAIN_FILE).exe
CFLAFS=

all : help
	

build : $(SOURCE_FILES)
	@echo "-> Creating bin folder for executables."
	mkdir $(BUILD_DIR)
	@echo "-> Compiling source code."
	$(COMPILER) $(CFLAGS) $(SOURCE_FILES) -o $(BUILD_DIR)$(EXECUTABLE)

clean: 
	@echo "-> Removing bin folder and any binaries"
	rm -rf $(BUILD_DIR)

help : 
	@echo "all     ... Performs all tasks"
	@echo "build   ... Compile all Source Code"
	@echo "clean   ... Remove any binary files"
	@echo "help    ... Prints all the targets"
