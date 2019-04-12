convert: 1.C
	gcc -DCONVERT -o CONVERT.X 1.C 
	@printf "convert编译完成\n"
	@./CONVERT.X
	

unconvert:1.C
	gcc -o UNCONVERT.X 1.C
	@printf "unconvert编译完成\n"
	@./UNCONVERT.X
clean:
	rm -f *.o
	rm -f *.X
