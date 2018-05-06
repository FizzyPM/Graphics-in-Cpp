# Configuring Codeblocks
Step 1 : Copy and paste graphics.h and winbgim.h files into the include folder of compiler directory. (If you have Code::Blocks installed in C drive of your computer, go through: Disk C >> Program Files >> CodeBlocks >> MinGW >> include. Paste these two files there.)
Step 2 : Copy and paste libbgi.a to the lib folder of compiler directory.
Step 3 : Open Code::Blocks. Go to Settings >> Compiler >> Linker settings.
Step 4 : In that window, click the Add button under the “Link libraries” part, and browse.Select the libbgi.a file copied to the lib folder in step 2.
Step 5 : In right part (ie. other linker options) paste commands
-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
