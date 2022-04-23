% minibox(1) MiniBox 0.1
% Ayush K M
% April 2022

# Name
MiniBox - Alternative tool for busybox or toybox.

# SYNOPSIS
minibox [APPLETS] [arguemnts]...\
minibox [options]\
APPLETS [arguments]...

# OPTIONS

**---help**
: Displays a friendly help message.

**---version**
: Displays version.

# DESCRIPTION
MiniBox is a tool which can be used as an alternative for BusyBox and 
Toybox. This tool is still under development so it is not suitable for
productional use yet but can be used for educational purpose.

# EXAMPLES
### **minibox ---help**\
Displays a friendly help message.

### **minibox ---version**\
Displays version.

### **minibox APP argument1 argument2 ... argumentsn**\
MiniBox invokes the specified APP. For example, here the APP
may be cd, pwd, echo. arguments1, arguments2, ... , argumentsn
are passed as arguments to the APP.

### **APP arguments1 arguments2 ... argumnetsn**\
MiniBox invokes the specified APP. For example, here the APP
may be cd, pwd, echo. arguments1, arguments2, ... , argumentsn
are passed as arguments to the APP.

# EXIT VALUES

**0**
:Exit Success

**1**
:Invalid option

**2**
:Command not found

**The exit values depend on the applet invoked**
