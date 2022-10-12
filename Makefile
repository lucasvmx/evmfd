EVMFD_PROGRAM=evmfd
CFLAGS=-DASN_PDU_COLLECTION -Isrc/decoder/bu
LIBS=-L. -lasncodec
ASN_LIBRARY=libasncodec.a

all: libasncodec
	$(CC) src/*.c $(CFLAGS) -o $(EVMFD_PROGRAM) $(LIBS)

libasncodec:
	$(MAKE) -C src/decoder/bu

clean:
	$(RM) $(EVMFD_PROGRAM) $(ASN_LIBRARY)
	$(MAKE) -C src/decoder/bu/ clean
