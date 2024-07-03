echo "Starting..."
sleep 0.5

echo "The files will be copied to /usr/include and /usr/lib"
echo "Continue? [Y/n]"

read answer

if [ "$answer" = "y" -o "$answer" = "Y" ]; then
    sudo cp include/* /usr/include
    sudo cp lib/libzixo.a /usr/lib
    echo "Successfully made LibZixo global!"
fi