CFLAGS=-Wall -Wextra `pkg-config --cflags gtk+-3.0 gtksourceview-4` -O2
LDLIBS=`pkg-config --libs gtk+-3.0 gtksourceview-4`

TARGETS=gtk_source_view_example

all: $(TARGETS)

clean:
	rm -f $(TARGETS)

