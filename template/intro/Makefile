include ../Common.mk

thisdir=intro

objects= \
	intro.o \
	bg.o

temporaryobjects= \
	bg.c

all: objlist

objlist: $(objects)
	$(RM) objlist
	for obj in $(objects); do $(ECHO) ../$(thisdir)/$$obj >> objlist; done

clean:
	$(RM) objlist $(temporaryobjects) $(objects)

