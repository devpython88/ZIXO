echo "Starting process: Create Static Library..."
sleep 0.9

g++ -c lib/zixo.cpp -o lib/zixo.o
ar rcs lib/libzixo.a lib/zixo.o
echo "Successfully created static library"