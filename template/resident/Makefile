include ../Common.mk

thisdir=resident

objects= \
	fadein.o \
	fadeout.o \
	LynxSD.o \
	lynxeeprom.o \
	lynx-snd.o \
	resident.o

temporaryobjects= \
	bg.c

all: objlist

objlist: $(objects)
	$(RM) objlist
	for obj in $(objects); do $(ECHO) ../$(thisdir)/$$obj >> objlist; done

clean:
	$(RM) objlist $(temporaryobjects) $(objects)

