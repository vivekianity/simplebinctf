Installation:
--------------
You can host this binary exploit CTF in your local machine or in a cloud server. 

sudo git clone https://github.com/vivekianity/simplebinctf/
cd simplebinctf
sudo docker build -t binctf:latest .
sudo docker run -p 2212:2212 --privileged -it binctf:latest

Running the CTF:
----------------

If docker running in a local machine then take another terminal and run 

nc 127.0.0.1 2212

If docker is in a cloud server with IP address AA:BB:CC:DD then

nc AA:BB:CC:DD 2212

Flag:
-----

The flags are in flag.txt. If you are using this challenge for your CTF then change 
the flag in these files (max 64 bytes)
