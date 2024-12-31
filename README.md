# GtkSourceView Minimal Example

## Overview

This program demonstrates the use of GtkSourceView, a GTK widget for syntax highlighting and editing source code. It is
built using the GTK library and the GtkSourceView extension.

The application creates a basic window containing a scrollable text editor with syntax highlighting for the C
programming language.

## Features

A GTK-based GUI window.

A GtkSourceView editor with syntax highlighting enabled.

Support for scrolling using a GtkScrolledWindow.

This example is designed to be a starting point for understanding GtkSourceView and can be extended to include features
such as file loading, saving, or other advanced text editing functionalities.

## Required Libraries

Before building and running this program, ensure the following libraries are installed on your system:

* GTK 3
* GtkSourceView 4

## Linux Installation

Use the following command to install the necessary libraries on a Debian-based system:

```bash
sudo apt-get install libgtk-3-dev libgtksourceview-4.0-dev
```

## Compilation

To compile the program, use gcc or a similar C compiler. Ensure the necessary libraries are linked during compilation.

Example compilation command:

```bash
gcc -o gtk_source_view_example gtk_source_view_example.c `pkg-config --cflags --libs gtk+-3.0 gtksourceview-4.0`
```

A Makefile is also provided for convenience. You can just run `make` to compile the program.

## Running the Program

After successful compilation, run the program:

```bash
./gtk_source_view_example
```

A window will open with:

* A text editor area featuring syntax highlighting for C code.
* Scrollbars, allowing you to navigate through the editor.

To use a different language, replace "c" with another language identifier in the code. You will
find the language definitions in the language-specs directory:

```bash
ls /usr/share/gtksourceview-3.0/language-specs
```

## Resources

* [GTK Documentation](https://www.gtk.org/docs/)
* [GtkSourceView Home and Documentation](https://wiki.gnome.org/Projects/GtkSourceView)
* [GtkSourceView Language Definitions](https://gitlab.gnome.org/GNOME/gtksourceview/tree/master/data/language-specs)

