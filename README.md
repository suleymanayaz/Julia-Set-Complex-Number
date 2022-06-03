# ✨ Julia Set ✨


[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)]()

✨ Supernatural images created by complex numbers ✨
## Project Achievements

- Simple to intermediate pointer use
- Write a module that holds methods together
- Getting information about the PGM file content
- Basic image processing
- Learning gray-level tones

![My Image](/Example_Image/readmeImages/account_operation_image.PNG)

> Calculating whether complex numbers are members of the Julia set.

![My Image2](/Example_Image/readmeImages/juliaset_graph.PNG)

> Explanation of how complex numbers belonging to the Julia set should be colored on the graph and picture.

![My Image3](/Example_Image/readmeImages/example_complex_image.PNG)
> Sample output images

## Tech

- C programing Language


## Installation

This requires [TDM-GCC 4.9.2](https://sourceforge.net/projects/tdm-gcc/files/TDM-GCC%204.9%20series/4.9.2-tdm-1%20DW2/) 4.9.2 to run.

If you want to filter the image you want, in the [pgmimage.h](/src/pgmimages.h) file:

```sh
void pgmFormattedWrite(Complex *z1,Complex *zc,Complex *zk,int k,float r,FILE *pgmFILE){
  ...	
  if( (pgmFILE = fopen( "./JuliaCluster.pgm","w")) != NULL){ // pgm file path
  ...
```
You should change the file path in the line.



## License

MIT

**Free Software, Hell Yeah!**
