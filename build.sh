modprobe -r zfs
make -j  
make install -j
echo "Checking if the previous kernel modules exist"
modprobe -r zfs
lsmod | grep zfs
modprobe zfs
