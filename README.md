# Captcha Library
Advanced Generation of Captcha Numbers and alphabets.


# installation for ubuntu and linux users.
# sudo ./install.sh
# or you can add your library manually based on your system.
# don't forget to add ImageMagick library to your project becase Captcha Library based on Magick++ Library



# there are 3 structs you can use (numbersCaptcha,alphaCaptcha and alphaNumberCaptcha)
# GUIDE 
    alphaCaptcha alpha;
    alpha.init(10); //if you want 10 alphabets pass it to init parameter
    alpha.captchVectorize(); // you must use this to vectorize alphabets and numbers
    alpha.setDestinationFileOutput("/home/blocker/Videos/alpha.png"); //destination of your file output
    alpha.generate(50,50,"white",LOW); //50 * 50 every char you can scale it , 
                                      //second parameter for background color 
                                     //third pramater is enum with 4 types of security level LOW , MID , HIGH or NONE.

let me know if there any bug to update it.

Thanks.
Louay Hesham
