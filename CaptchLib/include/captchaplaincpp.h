/*
 * Author : Louay Hesham
 * Date : 2020/07/16
 * This Library Created to generate Captcha numbers and chars ..
 * over control you can control The level of Secuirty and chooseing background color
 * WIKI HOW :
 * 1) you need to determine which type you want numbers or chars or both
 * 2) how many chars or numbers you want to generate call init function and pass the number you want
 * 3) call captchVectorize to vectorize the elements.
 * 4) set destination to your final image .
 * 5) and the last thing call generate function it has 8 params 4 are predefined .
 *                                  Thank You
 * */

#ifndef CAPTCHAPLAINCPP_H
#define CAPTCHAPLAINCPP_H
#include <string>
#include <time.h>
#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <fstream>

#include "numberheaderdata.r"
#define encodedImageBUFFER 2000
#include "alphabetheaderdata.r"

#include <ImageMagick-6/Magick++.h>

using namespace Magick;

namespace captcha {
enum SecuirtyLevel{NONE,LOW,MID,HIGH};
enum Options{Alphabet,Numbers,AlphabetWithNumbers};
struct capthaModule{
    virtual void init(unsigned int)=0;
    virtual std::vector<std::string>* generate(unsigned short width ,unsigned short height,std::string background,SecuirtyLevel sl=NONE, int firstNoiseLineWidth=1,std::string firstNoiseLineColor="black",int secondNoiseLineWidth=1,std::string secondNoiseLineColor="black")=0;
    virtual void captchVectorize()=0;
    virtual void setDestinationFileOutput(std::string direction)=0;
};
//...Alphabet Only .../
struct alphaCaptcha :public capthaModule{
    // capthaModule interface
    alphaCaptcha();
//    ~alphaCaptcha();
    void init(unsigned int);
    std::vector<std::string>* generate(unsigned short width ,unsigned short height,std::string background,SecuirtyLevel sl=NONE,
                                       int firstNoiseLineWidth=1,std::string firstNoiseLineColor="black",int secondNoiseLineWidth=1,std::string secondNoiseLineColor="black");
    void captchVectorize();
    virtual void setDestinationFileOutput(std::string destAndFilename);

private: //private variables
    std::string _destAndFilename;
    unsigned int _alphaCount;
    unsigned int _randomLines;
    unsigned int _initCharCount;
    unsigned int _totalAlphaWidth;
    unsigned int _randNum;
    unsigned int _totalAlphaHeight;
    std::vector<std::string> _vecReAlpha;
    std::ofstream mImage;
    std::vector<unsigned short> _randomVector;
    std::vector<char> _alphaVect;
    std::map<unsigned short, std::string> _captchaAlphaMap;
private: //functions
    void _writeAlphaExtention();
    unsigned int _calcTotalWidth(unsigned short);
    unsigned int _calcTotalHeight(unsigned short);
    void _generateAlphaImages();
};
//...Numbers Only .../
struct numbersCaptcha :public capthaModule{
    numbersCaptcha();
//    ~numbersCaptcha();
    void init(unsigned int);
    std::vector<std::string>* generate(unsigned short width ,unsigned short height,std::string background,SecuirtyLevel sl=NONE,
                                       int firstNoiseLineWidth=1,std::string firstNoiseLineColor="black",int secondNoiseLineWidth=1,std::string secondNoiseLineColor="black");
    void captchVectorize();
    virtual void setDestinationFileOutput(std::string destAndFilename);

private: //private variables
    std::string _destAndFilename;
    unsigned int _numberCount;
    unsigned int _initNumCount;
    unsigned int _randomLines;

    unsigned int _totalNumberWidth;
    unsigned int _randNum;
    unsigned int _totalNumberHeight;
    std::vector<std::string> _vecReNumber;
    std::ofstream mImage;
    std::vector<unsigned short> _randomVector;
    std::vector<char> _numberVect;
    std::map<unsigned short, std::string> _captchaNumberMap;
private: //functions
    void _writeNumberExtention();
    unsigned int _calcTotalWidth(unsigned short);
    unsigned int _calcTotalHeight(unsigned short);
    void _generateNumberImages();
};
//...Alphabet with numbers.../
struct alphaNumberCaptcha :public capthaModule{
    alphaNumberCaptcha();
    //    ~numbersCaptcha();
    void init(unsigned int);
    std::vector<std::string>* generate(unsigned short width ,unsigned short height,std::string background,SecuirtyLevel sl=NONE,
                                       int firstNoiseLineWidth=1,std::string firstNoiseLineColor="black",int secondNoiseLineWidth=1,std::string secondNoiseLineColor="black");
    void captchVectorize();
    virtual void setDestinationFileOutput(std::string destAndFilename);

private: //private variables
    std::string _destAndFilename;
    unsigned int _alphaNumberCount;
    unsigned int _initCharCount;
    unsigned int _initNumCount;
    unsigned int _randomLines;

    unsigned int _randNum;
    unsigned int _totalAlphaWidth;
    unsigned int _totalNumberWidth;
    unsigned int _totalNumberHeight;
    unsigned int _totalAlphaHeight;

    std::vector<std::string> _vecReNumberAlpha;

    std::ofstream mImage;
    std::vector<unsigned short> _randomVector;
    std::vector<char> _alphaNumberVect;

    std::map<unsigned short, std::string> _captchaNumberAlphaMap;

private: //functions
    void _writeAlphaNumberExtention();
    unsigned int _calcTotalWidth(unsigned short);
    unsigned int _calcTotalHeight(unsigned short);
    void _generateNumberImages();

};
}


#endif // CAPTCHAPLAINCPP_H
