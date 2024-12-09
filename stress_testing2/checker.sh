g++ my_solution.cpp -o my_solution
g++ bruteForce_solution.cpp -o bruteForce_solution
g++ randomTestGenerator.cpp -o randomTestGenerator

for((i = 1; i<100; ++i)); do
    ./randomTestGenerator $i > randomInput
    ./my_solution <randomInput > myOutput
    ./bruteForce_solution <randomInput > bruteOutput
    diff -w myOutput bruteOutput || break
    echo "Passed test: "  $i
done

echo -e "\nWA on the following test:"
cat randomInput
echo "Your answer is:"
cat myOutput
echo "Correct answer is:"
cat bruteOutput


# or you can use
# set -e
#g++ code.cpp -o code
#g++ gen.cpp -o gen
#g++ brute.cpp -o brute
#for((i = 1; ; ++i)); do
#    ./gen $i > input_file
#    ./code < input_file > myAnswer
#    ./brute < input_file > correctAnswer
#    diff -Z myAnswer correctAnswer > /dev/null || break
#    echo "Passed test: "  $i
#done
#echo "WA on the following test:"
#cat input_file
#echo "Your answer is:"
#cat myAnswer
#echo "Correct answer is:"
#cat correctAnswer
