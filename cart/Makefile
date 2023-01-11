include ../Common.mk

objects= \

objlists = \
	../resident/objlist \
	../intro/objlist \
	../game/objlist \
	../tunes/objlist

others = \
	@../resident/objlist \
	@../intro/objlist \
	@../game/objlist \
	@../tunes/objlist

all: game.lnx game.o

game.lnx : $(objects) $(objlists)
	$(CL) -t lynx -o $@ -m lynx.map $(objects) $(others) lynx.lib
	python3 filler.py game

game.o : $(objects)
	$(CL) -t lynx --config lynx-bll.cfg -m bll.map -o $@ $(objects) $(others) lynx.lib

clean:
	$(RM) $(objects) $(target) lynx.map game.lnx game.lyx game.o
