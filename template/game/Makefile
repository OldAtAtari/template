include ../Common.mk

thisdir=game

objects= \
	game.o \
	tree.o

temporaryobjects= \
	tree.c

all: objlist

objlist: $(objects)
	$(RM) objlist
	for obj in $(objects); do $(ECHO) ../$(thisdir)/$$obj >> objlist; done

tree.c : tree.pcx
	$(SP) -r $< -c lynx-sprite,mode=packed,ax=94,ay=168 -w $*.c,ident=$*,bytesperline=8

clean:
	$(RM) objlist $(temporaryobjects) $(objects)

