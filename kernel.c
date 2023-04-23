//Ultra simple kernel to test the bootloader
void main() {
  char* vid_mem = (char*) 0xb8000;
  *vid_mem = 'X';
}