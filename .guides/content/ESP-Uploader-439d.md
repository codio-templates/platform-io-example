# Microcontrollers

This project uses ["PlatformIO"](https://platformio.org/) and ["ESP web tool"](https://esphome.github.io/esp-web-tools/) to upload firmware to micro controllers.

By default it is configured to be used with an ESP32 dev board, please update `project/platformio.ini` if you want to compile sources for a different board or need additional libraries.

The PlatformIO project is located in the `project` directory, the `docs` folder contains binary files and a static firmware upload page.



|||important
"ESP web tool" currently supports only Chrome and Microsoft Edge.
|||


## Use the button below to compile the program

{Run Compile | terminal}(cd ~/workspace/project ; pio run -t upload)


