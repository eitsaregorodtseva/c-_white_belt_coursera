# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\liza\CLionProjects\fifthweek

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\liza\CLionProjects\fifthweek\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\fifthweek.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\fifthweek.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\fifthweek.dir\flags.make

CMakeFiles\fifthweek.dir\main.cpp.obj: CMakeFiles\fifthweek.dir\flags.make
CMakeFiles\fifthweek.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liza\CLionProjects\fifthweek\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fifthweek.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\fifthweek.dir\main.cpp.obj /FdCMakeFiles\fifthweek.dir\ /FS -c C:\Users\liza\CLionProjects\fifthweek\main.cpp
<<

CMakeFiles\fifthweek.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fifthweek.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\fifthweek.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\liza\CLionProjects\fifthweek\main.cpp
<<

CMakeFiles\fifthweek.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fifthweek.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\fifthweek.dir\main.cpp.s /c C:\Users\liza\CLionProjects\fifthweek\main.cpp
<<

# Object files for target fifthweek
fifthweek_OBJECTS = \
"CMakeFiles\fifthweek.dir\main.cpp.obj"

# External object files for target fifthweek
fifthweek_EXTERNAL_OBJECTS =

fifthweek.exe: CMakeFiles\fifthweek.dir\main.cpp.obj
fifthweek.exe: CMakeFiles\fifthweek.dir\build.make
fifthweek.exe: CMakeFiles\fifthweek.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liza\CLionProjects\fifthweek\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable fifthweek.exe"
	"C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\fifthweek.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\fifthweek.dir\objects1.rsp @<<
 /out:fifthweek.exe /implib:fifthweek.lib /pdb:C:\Users\liza\CLionProjects\fifthweek\cmake-build-debug\fifthweek.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\fifthweek.dir\build: fifthweek.exe

.PHONY : CMakeFiles\fifthweek.dir\build

CMakeFiles\fifthweek.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\fifthweek.dir\cmake_clean.cmake
.PHONY : CMakeFiles\fifthweek.dir\clean

CMakeFiles\fifthweek.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\liza\CLionProjects\fifthweek C:\Users\liza\CLionProjects\fifthweek C:\Users\liza\CLionProjects\fifthweek\cmake-build-debug C:\Users\liza\CLionProjects\fifthweek\cmake-build-debug C:\Users\liza\CLionProjects\fifthweek\cmake-build-debug\CMakeFiles\fifthweek.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\fifthweek.dir\depend
