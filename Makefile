SUBDIRS = Debug

TARGETS = all clean install uninstall

TOPDIR = $(shell pwd)
export TOPDIR

.PHONY: $(TARGETS)

$(TARGETS):
	@for dir in $(SUBDIRS) ; do $(MAKE) -j4 --no-print-directory -C $$dir $@; done
