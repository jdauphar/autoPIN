msg:
	@echo 'Targets are:'
	@echo '  run'
	@echo '  clean'
run:
	gcc pin.c -o autoPIN.out
	./autoPIN.out
clean:
	rm *.o*
