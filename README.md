# 📖 Get Next Line

**Get Next Line** is a C project from the 42 Network curriculum that consists of writing a function to read a line from a file descriptor, one line at a time. This function handles reading arbitrarily long lines efficiently.

---

## 🎯 Project Objectives

- Implement a function `get_next_line` that reads a line ending with a newline (`\n`) from a file descriptor  
- Manage memory dynamically to handle lines of any length  
- Support reading from multiple file descriptors simultaneously  
- Handle errors and end-of-file conditions gracefully  

---

## 🛠️ Features

- Reads one line at a time from a file descriptor  
- Supports multiple file descriptors (bonus)  
- Uses static variables to preserve read buffer state between calls  
- Returns `NULL` when there is nothing left to read or on error  
- Manages memory allocations carefully to avoid leaks  

---
