AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES = libzero.la
libzero_la_SOURCES = \
		TraderOptions.cc TraderSpiImpl.cc \
		TraderServiceImpl.cc

libzero_la_CPPFLAGS = -I$(top_srcdir) \
			$(BOOST_CPPFLAGS) \
			$(ZEUSING_CPPFLAGS) \
			$(SOIL_CPPFLAGS)

libzero_la_LIBADD = $(ZEUSING_LIBADD) \
		$(BOOST_LIBADD) \
		$(SOIL_LIBADD)

libzero_la_LDFLAGS = \
	-no-undefined -version-info \
	$(LT_CURRENT):$(LT_REVISION):$(LT_AGE) \
	-release $(LT_RELEASE)

# header files
noinst_HEADERS = \
	TraderOptions.hh \
	TraderServiceImpl.hh \
	TraderSpiImpl.hh \
	ZeroLog.hh \
	ZeusingFtdcUserApiStructPrint.hh


