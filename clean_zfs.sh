rpm -e zfs-devel-0.6.2-275_gbc25c93.el6.x86_64 zfs-0.6.2-275_gbc25c93.el6.x86_64 zfs-test-0.6.2-275_gbc25c93.el6.x86_64 zfs-dracut-0.6.2-275_gbc25c93.el6.x86_64 kmod-zfs-2.6.32-279.14.1.el6.x86_64-0.6.2-1.el6.x86_64
echo "Verify ZFS modules left......"
rpm -qa | grep -i zfs
make rpm
yum install zfs-*.x86_64.rpm
echo "Done!!" 
