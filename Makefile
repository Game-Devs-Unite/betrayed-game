BLDIR = bld

LINUX_APP = Betrayed.out
WINDOWS_APP = Betrayed.exe

.phony: windows linux clean run-linux run-windows

linux: src/$(LINUX_APP)
	mv $< $(BLDIR)/$(LINUX_APP)

windows: src/$(WINDOWS_APP)
	mv $< $(BLDIR)/$(WINDOWS_APP)

run-linux: linux
	$(BLDIR)/$(LINUX_APP)

run-windows: windows
	wine $(BLDIR)/$(WINDOWS_APP)

clean:
	$(MAKE) -C src -f make-linux clean
	$(MAKE) -C src -f make-windows clean
	
src/$(LINUX_APP): 
	$(MAKE) -C src -f make-linux 
	
src/$(WINDOWS_APP): 
	$(MAKE) -C src -f make-windows
