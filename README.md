# 3DS Docker-Clion simple build template

This is a template for starting new 3DS libctru projects, build with docker containers and clion support \
Original project: [3DS examples by devkitPro](https://github.com/devkitPro/3ds-examples) \
Copy [.env_example](.env_example) to .env and change project name
# Run configurations
## Debug in 3DS
### On 3ds:
- Open ["The Homebrew Launcher"](https://smealum.github.io/3ds/)
- Press "Y". You will see your console IP Address on the screen
- Press L+Dpad Down+Select to open the rosalina menu
- Go to Debugger Options -> Enable debugger
- Select "Force-debug next application at launch" too
### On intellij:
- Go to Run/Debug Configurations -> Docker -> Send via 3dslink
- Edit "Command" with your console IP Address
- Go to Run/Debug Configurations -> Remote Debug -> Debug in 3ds
- Edit "'target remote' args" with your console IP Address
- Select "Debug in 3DS" in debug/run toolbar
- Done! Press Shift+F9 and good debugging!
## Debug in Citra(Linux/macOS)
Obs: You must be have citra installed and in your $PATH
- Select "Debug in citra(Linux/macOS)" in debug/run toolbar
- Done! Press Shift+F9 and good debugging!
## Debug in Citra(Windows)
Obs: You must be have citra installed and in your $PATH
- Select "Debug in citra(Windows)" in debug/run toolbar
- Done! Press Shift+F9 and good debugging!


# Changing project name
- Edit [.env](.env_example) with your app name
- Remember to edit the run configurations(Send via 3dslink, debug in citra and debug in 3ds) with your new app name

# Why ktrik?
- ktr = new 3ds codename
- ik = reference to [Inky](https://github.com/Inky1003). I started this project with the aim of showing him a "Bom dia inky!"(Good morning inky)

# TODO:
- Expand to other IDEs
- Shell Scripts to cmdline usage?