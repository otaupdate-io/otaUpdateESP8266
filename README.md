# HTTPS OTA Update Library for Esp8266
## Libraries required
- [ArduinoJSON v6](https://arduinojson.org/v6/doc/installation/)
- [OtaUpdate.io-Esp8266](https://github.com/otaupdate-io/otaUpdateESP8266)

## Steps to be followed
#### Process 1 for initial update(V 0.9)

- Sign up on [OtaUpdate.io](https://otaupdate.io/register)
- Adding a device in [OtaUpdate.io](https://otaupdate.io/home)
- Copy the device Token that is Generated.
- Download the [OtaUpdate.io-Esp8266](https://github.com/otaupdate-io/otaUpdateESP8266/archive/main.zip) library zip file.
- Start Arduino IDE.
- Add the zip file to Arduino IDE.
- Open otaUpdate-Esp8266 from the examples.
- Paste the device token Generated in [OtaUpdate.io](https://otaupdate.io/home)
- Configure Your wifi credentials.
- Change the firmware version as per your firmware updates. By default it is in Version 0.9.
- Upload the program to your Esp8266.

#### Process 2 for initial update(V 1.0)

- Start Arduino IDE.
- Open OtaUpdate.io-Esp8266-LED_APP from the examples.
- Paste the device token Generated in [OtaUpdate.io](https://otaupdate.io/home) (The same device token that was generated in process 1)
- Configure Your wifi credentials.
- Change the firmware version to 1.0 (Version keeps incrementing based on your updates).
- Compile the program.
- Go to Arduino IDE toolbar and select sketch and click Export Compiled binary.
- Go to [OtaUpdate.io](https://otaupdate.io/home) and click <input type=Button value= Manage Style="background :#0169D9 ; color:#ffff; border-radius:5px"   > device to open the device details page.
- Click Release update.
- Upload the `.bin` file that was generated.
- Add the features of the update.
- Click <input type=Button value= Add Style="background :#c82333 ; color:#ffff; border-radius:5px">.
- The update file has been update successfully.
- Click on the edit icon and select firmware version as 1.0 and click save.
- Change the <b>Update status</b> to Live.
- Plugin the Esp32 to you system and open your serial monitor.
- The firmware will get upgraded to version 1.0.
- Repeat `Process` 2 to Release new update again.

`NOTE: Don't forget to change the version number in your program as you update.`
