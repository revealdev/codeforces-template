for i in ./testdata/*.in;
do
	echo $i ${i%.in}.out
	./cmake-build-debug/codeforces-template.exe < $i > ${i%.in}.out
done
