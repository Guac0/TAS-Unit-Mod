HOW TO ADD YOUR OWN MUSIC TO THE COMMUNITY MUSIC ADDON

1. Convert the music file into the .ogg format. You can use youtube to .ogg converters, or if you already have the music file in another format, you can use Audacity to change the music format to .ogg. Audicity also allows you to control the quality and file size of the outputted .ogg. Generally speaking, your .ogg file should be at most 4 megabytes for each minute of music, and preferably much less.
2. Move the converted .ogg file into this addon. If you don't already have a folder for yourself, make one with your name in \TAS_Community_Music\music. Then move the .ogg into your folder (For example, it should be\TAS_Community_Music\music\Guac\MyMusic1.ogg).
3. Open config.cpp found in the root TAS_Community_Music folder with an advanced text editor, like notepad++ or Visual Studio Code.
4. Follow the instructions given there to copy/paste andwrite your music tracks' configs.
5. Add your music track's classname to the "tracks[]" list (examples are given in the config.cpp).
6. If you have pboProject set up, then pack the TAS_Community_Music folder into a pbo. If not, zip the folder. Then (either way) send the pbo/zip to Guac.