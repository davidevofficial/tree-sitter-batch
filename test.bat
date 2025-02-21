:: Rem stands for remark and is another way to set comments...
Rem This is a comment

:: This is a comment too

:: String
:: "Hello World!"

::@echo off, off is a constant and @ hides the command echo off turns off the cmd prompt
@echo off

::@
@echo Hello World!

:: Variables (/A => this var is an int) , set = set, %var% = get
set var = string
set /A digit = 0
echo %var%

:: Functions (have no clue what does /B do)
:FunctionName
set /A var = 0
echo The value of var is %var%
exit /B 0
::Call :function_name parameter1, parameter2… parametern
::The parameters can then be accessed from within the function by using the tilde (~) character along with the positional number of the parameter.

:: Flow operators
if %a% == %a% echo "a == a"
if %a% == %a% (echo "a == a") else (echo "ain't no way")
if %a%==5 goto :labela
::if(condition1) if (condition2) do_something


::KEYWORDS TO IMPLEMENT
::1	VER
::This batch command shows the version of MS-DOS you are using.
::
::2	ASSOC
::This is a batch command that associates an extension with a file type (FTYPE), displays existing associations, or deletes an association.
::
::3	CD
::This batch command helps in making changes to a different directory, or displays the current directory.
::
::4	CLS
::This batch command clears the screen.
::
::5	COPY
::This batch command is used for copying files from one location to the other.
::
::6	DEL
::This batch command deletes files and not directories.
::
::7	DIR
::This batch command lists the contents of a directory.
::
::8	DATE
::This batch command help to find the system date.
::
::9	ECHO
::This batch command displays messages, or turns command echoing on or off.
::
::10	EXIT
::This batch command exits the DOS console.
::
::11	MD
::This batch command creates a new directory in the current location.
::
::12	MOVE
::This batch command moves files or directories between directories.
::
::13	PATH
::This batch command displays or sets the path variable.
::
::14	PAUSE
::This batch command prompts the user and waits for a line of input to be entered.
::
::15	PROMPT
::This batch command can be used to change or reset the cmd.exe prompt.
::
::16	RD
::This batch command removes directories, but the directories need to be empty before they can be removed.
::
::17	REN
::Renames files and directories
::
::18	REM
::This batch command is used for remarks in batch files, preventing the content of the remark from being executed.
::
::19	START
::This batch command starts a program in new window, or opens a document.
::
::20	TIME
::This batch command sets or displays the time.
::
::21	TYPE
::This batch command prints the content of a file or files to the output.
::
::22	VOL
::This batch command displays the volume labels.
::
::23	ATTRIB
::Displays or sets the attributes of the files in the curret directory
::
::24	CHKDSK
::This batch command checks the disk for any problems.
::
::25	CHOICE
::This batch command provides a list of options to the user.
::
::26	CMD
::This batch command invokes another instance of command prompt.
::
::27	COMP
::This batch command compares 2 files based on the file size.
::
::28	CONVERT
::This batch command converts a volume from FAT16 or FAT32 file system to NTFS file system.
::
::29	DRIVERQUERY
::This batch command shows all installed device drivers and their properties.
::
::30	EXPAND
::This batch command extracts files from compressed .cab cabinet files.
::
::31	FIND
::This batch command searches for a string in files or input, outputting matching lines.
::
::32	FORMAT
::This batch command formats a disk to use Windows-supported file system such as FAT, FAT32 or NTFS, thereby overwriting the previous content of the disk.
::
::33	HELP
::This batch command shows the list of Windows-supplied commands.
::
::34	IPCONFIG
::This batch command displays Windows IP Configuration. Shows configuration by connection and the name of that connection.
::
::35	LABEL
::This batch command adds, sets or removes a disk label.
::
::36	MORE
::This batch command displays the contents of a file or files, one screen at a time.
::
::37	NET
::Provides various network services, depending on the command used.
::
::38	PING
::This batch command sends ICMP/IP "echo" packets over the network to the designated address.
::
::39	SHUTDOWN
::This batch command shuts down a computer, or logs off the current user.
::
::40	SORT
::This batch command takes the input from a source file and sorts its contents alphabetically, from A to Z or Z to A. It prints the output on the console.
::
::41	SUBST
::This batch command assigns a drive letter to a local folder, displays current assignments, or removes an assignment.
::
::42	SYSTEMINFO
::This batch command shows configuration of a computer and its operating system.
::
::43	TASKKILL
::This batch command ends one or more tasks.
::
::44	TASKLIST
::This batch command lists tasks, including task name and process id (PID).
::
::45	XCOPY
::This batch command copies files and directories in a more advanced way.
::
::46	TREE
::This batch command displays a tree of all subdirectories of the current directory to any level of recursion or depth.
::
::47	FC
::This batch command lists the actual differences between two files.
::
::48	DISKPART
::This batch command shows and configures the properties of disk partitions.
::
::49	TITLE
::This batch command sets the title displayed in the console window.
::
::50	SET
::Displays the list of environment variables on the current system.

:: OPERATORS LIKE & | ^  OR AND NOT + - * / % EQU NEQ LSS LEQ GTR GEQ += -= *= /= %=
