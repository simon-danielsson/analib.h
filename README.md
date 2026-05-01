<h2 align="center">ana.h</h2>
  
<p align="center">
  <em>A generic header-only C library</em>
</p>
  
<p align="center">
    <img src="https://img.shields.io/badge/C_version-23-cyan?style=flat-square" alt="C version" />
    <img src="https://img.shields.io/badge/license-MIT-green?style=flat-square" alt="MIT License" />
  <img src="https://img.shields.io/github/last-commit/simon-danielsson/ana.h/main?style=flat-square&color=blue" alt="Last commit" />
</p>
  
<p align="center">
  <a href="#info">Info</a> •
  <a href="#usage">Usage</a> •
  <a href="#license">License</a>
</p>  

---
<div id="info"></div>

## Info
    
This library is built to house some of the most common utilities I make use of when building programs in C - I have chosen not to constrain the library to any specific utility or theme. 
  
> [!IMPORTANT]  
ana.h is a criminally opinionated library catering only to myself, and myself only. If you are not me, there is a good chance you will not enjoy using this library.
  
Inspiration has been taken from the following projects:  
- [sv.h](https://github.com/tsoding/sv)  
- [nob.h](https://github.com/tsoding/nob.h)  
  
---
<div id="usage"></div>

## Usage
  
Copy [ana.h](./ana.h) into your project and include it like this:  
  
```c
#define ANA_IMPLEMENTATION
#include "./ana.h"
```
  
Feel free to use [test.c](./tests/test.c) as a makeshift quick-start guide.
  
---
<div id="license"></div>

## License
This project is licensed under the [MIT License](https://github.com/simon-danielsson/analib-c/blob/main/LICENSE).  
