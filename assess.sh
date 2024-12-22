for i in ./testdata/*.in;
do
	echo $i ${i%.in}.out
	./cmake-build-debug/solution.exe < $i > ${i%.in}.out
done
