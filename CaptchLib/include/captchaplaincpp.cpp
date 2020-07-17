#include "captchaplaincpp.h"
captcha::numbersCaptcha::numbersCaptcha():_numberCount(10),_numberVect(10),_totalNumberWidth(0),_totalNumberHeight(0),_initNumCount(0){}

void captcha::numbersCaptcha::init(unsigned int count)
{
    _initNumCount =count;
    _randomVector.clear();
    _vecReNumber.clear();
    _randomVector.resize(count);
    _vecReNumber.resize(count);
    srand(time(NULL));
    for(unsigned int i =0; i <count; i++)
    {

        _randNum = rand() % 9 ;
        _randomVector.at(i)=_randNum;

    }
    for( unsigned int i =0; i < _randomVector.size(); i++){

    }

}

//C++ 2011 not allowed {}
captcha::alphaCaptcha::alphaCaptcha():_alphaCount(26),_alphaVect(26),_totalAlphaWidth(0),_totalAlphaHeight(0),_initCharCount(0){}
void captcha::alphaCaptcha::init(unsigned int count)
{
    _initCharCount=count;
    _randomVector.clear();
    _vecReAlpha.clear();
    _randomVector.resize(count);
    _vecReAlpha.resize(count);

    srand(time(NULL));

    for(unsigned int i =0; i <count; i++)
    {

        _randNum = rand() % 25 ;
        _randomVector.at(i)=_randNum;

    }
    for( unsigned int i =0; i < _randomVector.size(); i++){

    }
}
std::vector<std::string>* captcha::alphaCaptcha::generate(unsigned short width ,unsigned short height,std::string background,SecuirtyLevel sl,int firstNoiseLineWidth,std::string firstNoiseLineColor,int secondNoiseLineWidth,std::string secondNoiseLineColor)
{


    _alphaVect.clear();
    _writeAlphaExtention();
    _totalAlphaWidth=_calcTotalWidth(width);
    _totalAlphaHeight=_calcTotalHeight(height);
    for (unsigned short fCount =0; fCount <_randomVector.size(); fCount++) {
        try {

            if(_vecReAlpha.at(fCount)=="A.png"){

                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                    mImage << a[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="B.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << b[sCount];
                }
                mImage.close();

            }
            if(_vecReAlpha.at(fCount)=="C.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << c[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="D.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << d[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="E.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << e[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="F.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << f[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="G.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                    mImage << g[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="H.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << h[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="I.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                    mImage << ii[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="J.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                    mImage << j[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="K.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                    mImage << k[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="L.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                    mImage << l[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="M.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << m[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="N.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << n[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="O.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << o[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="P.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << p[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="Q.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << q[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="R.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << r[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="S.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << s[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="T.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << t[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="U.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << u[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="V.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << v[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="W.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << w[sCount];
                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="X.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << x[sCount];
                }
                mImage.close();}
            if(_vecReAlpha.at(fCount)=="Y.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << y[sCount];

                }
                mImage.close();
            }
            if(_vecReAlpha.at(fCount)=="Z.png"){
                mImage.open (_vecReAlpha.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){


                    mImage << z[
                        sCount];
                }
                mImage.close();

            }
        }

        catch (int e) {
            std::cerr<<"An error occured : " <<e<<std::endl;

        }


    }

    Image blank_image(Geometry(_totalAlphaWidth,height),background);




    try {
        srand (time(NULL));

        for(unsigned int i =0,x=0; i <_randomVector.size(); i++ ,x+=width){
            InitializeMagick("start");
            for(unsigned int i =0,x=0; i <_randomVector.size(); i++ ,x+=width){

                InitializeMagick("start");
                Image im;
                im.read(_vecReAlpha.at(i));
                im.resize(Magick::Geometry(width, height));
                im.fillColor(Color(firstNoiseLineColor));
                im.strokeColor(Color(firstNoiseLineColor));
                im.lineWidth(firstNoiseLineWidth);
                switch(sl){
                case LOW:
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*2,_randomLines/3,_randomLines*4));
                    _randomLines= rand() % width + 1;
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width;
                    break;
                case MID:
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*2,_randomLines/3,_randomLines*4));
                    _randomLines= rand() % width + 1;
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width;
                    break;
                case HIGH:
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2+ 1;
                    im.draw(DrawableLine(0,_randomLines*2,_randomLines,_randomLines));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines/4,_randomLines/4,_randomLines/2,_randomLines/4));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines/4,_randomLines/4,_randomLines/2,_randomLines/4));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*3,_randomLines/2,_randomLines*5,_randomLines*5));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*2,_randomLines/3,_randomLines*4));

                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    break;


                }
                //                im.strokeWidth(10);

                blank_image.composite(im,x,0,OverCompositeOp);
                blank_image.fillColor(Color(secondNoiseLineColor));
                blank_image.strokeColor(Color(secondNoiseLineColor));

                blank_image.lineWidth(secondNoiseLineWidth);
                switch(sl){
                case MID:
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*5,_randomLines*3,_randomLines*2,_randomLines));
                    _randomLines= rand() % width*2+ 1;
                    break;
                case HIGH:
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*5,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;

                    break;
                case NONE:
                    break;
                default:

                    break;
                }
            }


        }
        //if 5 images so it will be 1000*200 since every image is 200x200
        //blank_image.composite(im,"0",OverCompositeOp);
        //        blank_image.write("outoutComposite.png");
        blank_image.write(_destAndFilename);

    }   catch (int e) {
        std::cerr<<e<<std::endl;

    }

    return &_vecReAlpha;

}
void captcha::alphaCaptcha::captchVectorize()
{
    for(unsigned int i =0; i <_alphaCount; i++){
        _alphaVect[i]=(i+65);
    }
    //preview
    for(unsigned int i=0; i <_alphaCount; i++){
    }
}

void captcha::alphaCaptcha::setDestinationFileOutput(std::string destAndFilename)
{
    if(_destAndFilename!=destAndFilename){
        _destAndFilename=destAndFilename;
    }
}




void captcha::alphaCaptcha::_writeAlphaExtention()
{
    for(unsigned i =0; i <_alphaCount; i++){
        char tempChar =char(i+65);
        std::string s(1,tempChar);
        _captchaAlphaMap.insert({i,s+".png"});
    }
    for(unsigned int i =0; i <_randomVector.size(); i++){
        int num = _randomVector[i];
        std::string data = _captchaAlphaMap[num];
        _vecReAlpha.at(i)=data;

    }
}
unsigned int captcha::alphaCaptcha::_calcTotalWidth(unsigned short width)
{
    if(width!=0&& _alphaCount!=0){
        return width*_initCharCount;
    }else{
        std::cerr<<"Width Value or init function parameter is missing"<<std::endl;
        return -1;
    }
}
unsigned int captcha::alphaCaptcha::_calcTotalHeight(unsigned short height)
{
    if(height!=0&& _alphaCount!=0){
        return height*_initCharCount;
    }else{
        std::cerr<<"Width Value or init function parameter is missing"<<std::endl;
        return -1;
    }
}
void captcha::alphaCaptcha::_generateAlphaImages()
{

}
std::vector<std::string>* captcha::numbersCaptcha::generate(unsigned short width ,unsigned short height,std::string background,SecuirtyLevel sl,int firstNoiseLineWidth,std::string firstNoiseLineColor,int secondNoiseLineWidth,std::string secondNoiseLineColor)
{

    _numberVect.clear();

    _writeNumberExtention();
    _totalNumberWidth=_calcTotalWidth(width);
    _totalNumberHeight=_calcTotalHeight(height);
    for (unsigned short fCount =0; fCount <_randomVector.size(); fCount++) {
        try {

            if(_vecReNumber.at(fCount)=="0.png"){

                mImage.open (_vecReNumber.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                    mImage << zero[sCount];
                }
                mImage.close();
            }
            if(_vecReNumber.at(fCount)=="1.png"){
                mImage.open (_vecReNumber.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << one[sCount];
                }
                mImage.close();

            }
            if(_vecReNumber.at(fCount)=="2.png"){
                mImage.open (_vecReNumber.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << two[sCount];
                }
                mImage.close();
            }
            if(_vecReNumber.at(fCount)=="3.png"){
                mImage.open (_vecReNumber.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << three[sCount];
                }
                mImage.close();
            }
            if(_vecReNumber.at(fCount)=="4.png"){
                mImage.open (_vecReNumber.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << four[sCount];
                }
                mImage.close();
            }
            if(_vecReNumber.at(fCount)=="5.png"){
                mImage.open (_vecReNumber.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << five[sCount];
                }
                mImage.close();
            }
            if(_vecReNumber.at(fCount)=="6.png"){
                mImage.open (_vecReNumber.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << six[sCount];
                }
                mImage.close();
            }
            if(_vecReNumber.at(fCount)=="7.png"){
                mImage.open (_vecReNumber.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << seven[sCount];
                }
                mImage.close();
            }
            if(_vecReNumber.at(fCount)=="8.png"){
                mImage.open (_vecReNumber.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << eight[sCount];
                }
                mImage.close();
            }
            if(_vecReNumber.at(fCount)=="9.png"){
                mImage.open (_vecReNumber.at(fCount), std::ios::app | std::ios::binary);

                for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                    mImage << nine[sCount];
                }
                mImage.close();
            }




        }     catch (int e) {
            std::cerr<<"An error occured : " <<e<<std::endl;

        }

    }



    Image blank_image(Geometry(_totalNumberWidth,height),background);




    try {
        srand(time(NULL));

        for(unsigned int i =0,x=0; i <_randomVector.size(); i++ ,x+=width){
            InitializeMagick("start");
            for(unsigned int i =0,x=0; i <_randomVector.size(); i++ ,x+=width){

                InitializeMagick("start");
                Image im;
                im.read(_vecReNumber.at(i));
                im.resize(Magick::Geometry(width, height));
                im.fillColor(Color(firstNoiseLineColor));
                im.strokeColor(Color(firstNoiseLineColor));
                blank_image.composite(im,x,0,OverCompositeOp);


                im.lineWidth(firstNoiseLineWidth);

                switch(sl){
                case LOW:
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*2,_randomLines/3,_randomLines*4));
                    _randomLines= rand() % width + 1;
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width;
                    break;
                case MID:
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*2,_randomLines/3,_randomLines*4));
                    _randomLines= rand() % width + 1;
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width;
                    break;
                case HIGH:
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2+ 1;
                    im.draw(DrawableLine(0,_randomLines*2,_randomLines,_randomLines));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines/4,_randomLines/4,_randomLines/2,_randomLines/4));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines/4,_randomLines/4,_randomLines/2,_randomLines/4));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*3,_randomLines/2,_randomLines*5,_randomLines*5));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*2,_randomLines/3,_randomLines*4));

                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    break;


                }
                //                im.strokeWidth(10);

                blank_image.composite(im,x,0,OverCompositeOp);
                blank_image.fillColor(Color(secondNoiseLineColor));
                blank_image.strokeColor(Color(secondNoiseLineColor));


                blank_image.lineWidth(secondNoiseLineWidth);

            }
            switch(sl){
            case MID:
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines,_randomLines,_randomLines,_randomLines));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines*5,_randomLines*3,_randomLines*2,_randomLines));
                _randomLines= rand() % width*2+ 1;
                break;
            case HIGH:
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines,_randomLines,_randomLines,_randomLines));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines*5,_randomLines/5,_randomLines*4,_randomLines));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                _randomLines= rand() % width*2 + 1;
                blank_image.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                _randomLines= rand() % width*2 + 1;

                break;
            case NONE:
                break;
            default:

                break;
            }


        }
        //if 5 images so it will be 1000*200 since every image is 200x200
        //blank_image.composite(im,"0",OverCompositeOp);
        //        blank_image.write("outoutComposite.png");
        blank_image.write(_destAndFilename);

    }   catch (int e) {
        std::cerr<<e<<std::endl;

    }
    return &_vecReNumber;
}

void captcha::numbersCaptcha::setDestinationFileOutput(std::string destAndFilename)
{
    if(_destAndFilename!=destAndFilename){
        _destAndFilename=destAndFilename;
    }
}
void captcha::numbersCaptcha::captchVectorize()
{
    for(unsigned int i =0; i <_numberCount; i++){
        _numberVect[i]=i;
    }
    //preview
    for(unsigned int i=0; i <_numberCount; i++){
    }
}
void captcha::numbersCaptcha::_writeNumberExtention()
{
    for(unsigned int i =0; i <_numberCount; i++){
        std::string s = std::to_string(i);
        _captchaNumberMap.insert({i,s+".png"});
    }
    for(unsigned int i =0; i <_randomVector.size(); i++){
        int num = _randomVector[i];
        std::string data = _captchaNumberMap[num];
        _vecReNumber.at(i)=data;

    }
}
unsigned int captcha::numbersCaptcha::_calcTotalWidth(unsigned short width)
{
    if(width!=0&& _numberCount!=0){
        return width*_initNumCount;
    }else{
        std::cerr<<"Width Value or init function parameter is missing"<<std::endl;
        return -1;
    }
}
unsigned int captcha::numbersCaptcha::_calcTotalHeight(unsigned short height)
{
    if(height!=0&& _numberCount!=0){
        return height*_initNumCount;
    }else{
        std::cerr<<"Width Value or init function parameter is missing"<<std::endl;
        return -1;
    }
}














captcha::alphaNumberCaptcha::alphaNumberCaptcha():_alphaNumberCount(36),_alphaNumberVect(36),_totalAlphaWidth(0),_totalAlphaHeight(0),_initCharCount(0),_totalNumberWidth(0),_totalNumberHeight(0){}
void captcha::alphaNumberCaptcha::init(unsigned int count)
{
    // _initNumCount =count;
    _randomVector.clear();

    _initCharCount=count/2;
    _initNumCount=(count %2 ==0 ? count /2 : count/2 +1);
    _randomVector.clear();
    _vecReNumberAlpha.clear();
    _randomVector.resize(count);
    _vecReNumberAlpha.resize(count);

    srand(time(NULL));
    for(unsigned int i =0; i <count; i++)
    {

        _randNum = rand() % 35 ;
        _randomVector.at(i)=_randNum;

    }



}

std::vector<std::string> *captcha::alphaNumberCaptcha::generate(unsigned short width ,unsigned short height,std::string background,SecuirtyLevel sl,int firstNoiseLineWidth,std::string firstNoiseLineColor,int secondNoiseLineWidth,std::string secondNoiseLineColor)
{

    _alphaNumberVect.clear();

    _writeAlphaNumberExtention();
    _totalNumberWidth=_calcTotalWidth(width);
    _totalNumberHeight=_calcTotalHeight(height);
    for(int i =0; i <_vecReNumberAlpha.size(); i++)

        for (unsigned short fCount =0; fCount <_randomVector.size(); fCount++) {
            try {

                if(_vecReNumberAlpha.at(fCount)=="A.png"){

                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                        mImage << a[sCount];


                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="B.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << b[sCount];
                    }
                    mImage.close();

                }
                if(_vecReNumberAlpha.at(fCount)=="C.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << c[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="D.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << d[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="E.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << e[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="F.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << f[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="G.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                        mImage << g[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="H.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << h[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="I.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                        mImage << ii[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="J.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                        mImage << j[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="K.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                        mImage << k[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="L.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                        mImage << l[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="M.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << m[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="N.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << n[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="O.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << o[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="P.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << p[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="Q.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << q[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="R.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << r[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="S.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << s[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="T.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << t[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="U.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << u[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="V.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << v[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="W.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << w[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="X.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << x[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="Y.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << y[sCount];

                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="Z.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){


                        mImage << z[sCount];
                    }
                    mImage.close();

                }

                if(_vecReNumberAlpha.at(fCount)=="0.png"){

                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){
                        mImage << zero[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="1.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << one[sCount];
                    }
                    mImage.close();

                }
                if(_vecReNumberAlpha.at(fCount)=="2.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << two[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="3.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << three[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="4.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << four[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="5.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << five[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="6.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << six[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="7.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << seven[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="8.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << eight[sCount];
                    }
                    mImage.close();
                }
                if(_vecReNumberAlpha.at(fCount)=="9.png"){
                    mImage.open (_vecReNumberAlpha.at(fCount), std::ios::app | std::ios::binary);

                    for(int sCount =0; sCount <encodedImageBUFFER; sCount++){

                        mImage << nine[sCount];
                    }
                    mImage.close();
                }



            }catch (int e) {
                std::cerr<<"An error occured : " <<e<<std::endl;

            }
        }




    Image blank_image(Geometry(_totalNumberWidth,height),background);




    try {
        srand(time(NULL));

        for(unsigned int i =0,x=0; i <_randomVector.size(); i++ ,x+=width){
            InitializeMagick("start");
            for(unsigned int i =0,x=0; i <_randomVector.size(); i++ ,x+=width){

                InitializeMagick("start");
                Image im;
                im.read(_vecReNumberAlpha.at(i));
                im.resize(Magick::Geometry(width, height));
                im.fillColor(Color(firstNoiseLineColor));
                im.strokeColor(Color(firstNoiseLineColor));
                im.lineWidth(firstNoiseLineWidth);
                switch(sl){
                case LOW:
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*2,_randomLines/3,_randomLines*4));
                    _randomLines= rand() % width + 1;
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width;
                    break;
                case MID:
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*2,_randomLines/3,_randomLines*4));
                    _randomLines= rand() % width + 1;
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width;
                    break;
                case HIGH:
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2+ 1;
                    im.draw(DrawableLine(0,_randomLines*2,_randomLines,_randomLines));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines/4,_randomLines/4,_randomLines/2,_randomLines/4));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines/4,_randomLines/4,_randomLines/2,_randomLines/4));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*3,_randomLines/2,_randomLines*5,_randomLines*5));
                    _randomLines= rand() % width + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*2,_randomLines/3,_randomLines*4));

                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/2,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    im.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    break;


                }
                blank_image.composite(im,x,0,OverCompositeOp);
                blank_image.fillColor(Color(secondNoiseLineColor));
                blank_image.strokeColor(Color(secondNoiseLineColor));

                blank_image.lineWidth(secondNoiseLineWidth);
                switch(sl){
                case MID:
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*5,_randomLines*3,_randomLines*2,_randomLines));
                    _randomLines= rand() % width*2+ 1;
                    break;
                case HIGH:
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*5,_randomLines/5,_randomLines*4,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*2,_randomLines*.5,_randomLines*6,_randomLines/2));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines/5,_randomLines*4,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(_randomLines*5,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;
                    blank_image.draw(DrawableLine(0,_randomLines,_randomLines,_randomLines));
                    _randomLines= rand() % width*2 + 1;

                    break;
                case NONE:
                    break;
                default:

                    break;
                }
            }
        }



        blank_image.write(_destAndFilename);



    }catch(int e){

    }

    return &_vecReNumberAlpha;

}

void captcha::alphaNumberCaptcha::captchVectorize()
{
    for(unsigned int i =0; i <_alphaNumberCount; i++){
        if(i<26){
            _alphaNumberVect[i]=(i+65);
        }else{
            _alphaNumberVect[i]=i-26;

        }
    }

}

void captcha::alphaNumberCaptcha::setDestinationFileOutput(std::string destAndFilename)
{
    if(_destAndFilename!=destAndFilename){
        _destAndFilename=destAndFilename;
    }
}

void captcha::alphaNumberCaptcha::_writeAlphaNumberExtention()
{
    for(unsigned i =0; i <_alphaNumberCount; i++){
        if(i<26){
            char tempChar =char(i+65);
            std::string s(1,tempChar);
            _captchaNumberAlphaMap.insert({i,s+".png"});

        }else{
            std::string s = std::to_string(i-26);
            _captchaNumberAlphaMap.insert({i,s+".png"});

        }
    }

    for(unsigned int i =0; i <_randomVector.size(); i++){
        int num = _randomVector[i];
        std::string data = _captchaNumberAlphaMap[num];
        _vecReNumberAlpha.at(i)=data;

    }

}

unsigned int captcha::alphaNumberCaptcha::_calcTotalWidth(unsigned short width)
{
    if(width!=0&& _alphaNumberCount!=0){
        return width*(_initCharCount+_initNumCount);
    }else{
        std::cerr<<"Width Value or init function parameter is missing"<<std::endl;
        return -1;
    }
}

unsigned int captcha::alphaNumberCaptcha::_calcTotalHeight(unsigned short height)
{
    if(height!=0&& _alphaNumberCount!=0){
        return height*_initCharCount;
    }else{
        std::cerr<<"Width Value or init function parameter is missing"<<std::endl;
        return -1;
    }
}

