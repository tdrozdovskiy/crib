# ![](docs/images/icon/java-icon2-64.png) uJVM 
 
## Contents
1. [Introduction](#1-introduction)
2. [License](#2-license)
3. [Platforms supported](#3-platforms-supported)
4. [Get and build uJVM software](#4-get-and-build-ujvm-software)
5. [Source code structure](#5-source-code-structure)
6. [Coding standards](#6-coding-standards)
7. [Documentation](#7-documentation)
8. [Contributing](#8-contributing)
9. [Other Remarks](#9-other-remarks)

## 1. Introduction
The `uJVM` git repository contains the source code of a Java Virtual Machine
for MCU. This source code may be built to provide basic Java application
support for various embedded/low power/low cost H/W platforms. Primary objective
for which uJVM was created is to provide foundation for platform-independent,
easily ported mini-apps that can be written by developers without extensive
knowledge of H/W interfaces and platform-specific details.
uJVM adheres to requirements set forth in
[The Java Virtual Machine Specification Java SE 8 Edition](https://docs.oracle.com/javase/specs/jvms/se8/jvms8.pdf).

---
## 2. License
The software is distributed mostly under the
[BSD 2-Clause](http://opensource.org/licenses/BSD-2-Clause) open source
license.
Some third-party components are used. Licensing terms for these components can
be seen in [COPYING] file.
uJVM is developed for internal use and is not meant to be provided to third
parties. This restriction is temporary as it is planned to complete the
implementation of the uJVM in accordance with the Technology Compatibility
Kit (TCK). This allows for more extensive licensing for use from Oracle.

---
## 3. Platforms supported

| **x86_64 Linux** | **STM32F103-BluePill** | **STM32F4Discovery** | **STM32F429I-DISCO** |
|------------------|------------------------|----------------------|----------------------|
|[![](docs/images/platforms/x86_64_linux.png)](docs/x86_64_linux.md) |[![](docs/images/platforms/stm32f103_bluepill.jpg)](docs/stm32f103_bluepill.md)|[![](docs/images/platforms/stm32f4discovery.png)](docs/stm32f4discovery.md)|[![](docs/images/platforms/stm32f429i_disco.png)](docs/stm32f429i_disco.md)|
| **Arduino MEGA 2560** | **MSP-EXP432P401R** | **EK-TM4C1294XL** | **NuMaker-PFM-M2351** |
|[![](docs/images/platforms/arduino_mega2560.png)](docs/arduino_mega2560.md)|[![](docs/images/platforms/msp_exp432p401r.jpg)](docs/msp_exp432p401r.md)|[![](docs/images/platforms/ek_tm4c1294xl.jpg)](docs/ek_tm4c1294xl.md)|[![](docs/images/platforms/numaker_pfm_m2351.png)](docs/numaker_pfm_m2351.md)|
| **How to add a platform** | | | |
|[![](docs/images/platforms/add_new_board.jpg)](docs/port-new-platform.md)| | | |


Several platforms are supported. In order to manage slight differences
between platforms, a `PLATFORM` flag has been introduced.

| Platform              | Composite PLATFORM flag     | Published | Maintained |
|-----------------------|-----------------------------|-----------|------------|
| x86_64 Linux          |`PLATFORM=x86_64_linux`      | Yes       | v0.1       |
| [STM32F103-BluePill]  |`PLATFORM=stm32f103_bluepill`| Yes       | v0.1       |
| [STM32F4Discovery]    |`PLATFORM=stm32f4discovery`  | Yes       | v0.1       |
| [STM32F429I-DISCO]    |`PLATFORM=stm32f429i_disco`  | Yes       | v0.1       |
| [Arduino MEGA 2560]   |`PLATFORM=arduino_mega2560`  | Yes       | v0.1       |
| [MSP-EXP432P401R]     |`PLATFORM=msp_exp432p401r`   | Yes       | v0.1       |
| [EK-TM4C1294XL]       |`PLATFORM=ek_tm4c1294xl`     | Yes       | v0.1       |
| [NuMaker-PFM-M2351]   |`PLATFORM=numaker_pfm_m2351` | Yes       | v0.1       |

For add a new platform see the [how to add a platform].

---
## 4. Get and build uJVM software
Please see [build] for instructions how to run uJVM on various devices.

---
## 5. Source code structure
The general [source code structure] for uJVM is similar to the structure of the
multy platforms source code. 

---
## 6. Coding standards
In this project we are trying to adhere to the uJVM coding convention 
(see [CodingStyle]). However there are a few exceptions that we had to make since
the code also uses other open source components. The exceptions are as follows:

-	And we also exclude third party code that we might use in this
	project, such as miniz.

---
## 7. Documentation
The uJVM documentation for the project is located in the [docs] folder.
The latest version of the specification that describes the uJVM source code can
be generated using [doxygen] tool. 

```sh
$ make docs_gen
```
and view it

```sh
$ make docs_show
```

---
## 8. Contributing
If you want to contribute to the uJVM project and make it better, your help is
very welcome. Contributing is also a great way to learn more about social
coding on Github, new technologies and and their ecosystems. [How to contribute
you can find here](CONTRIBUTING.md).

---
## 9. Other remarks
uJVM extensively uses sample code provided by [uJ](http://dmitry.gr/?r=05.Projects&proj=12.%20uJ%20-%20a%20micro%20JVM).
Developers of uJVM would like to express their gratitude for invaluable info
provided by Dmitry Grinberg. 

[docs]: ./docs
[COPYING]: COPYING
[build]: docs/build.md
[how to add a platform]: docs/port-new-platform.md
[CodingStyle]: docs/ujvm-coding-standard.md
[source code structure]: docs/source-code-structure.md
[doxygen]: http://www.stack.nl/~dimitri/doxygen/index.html
[STM32F103-BluePill]: https://wiki.stm32duino.com/index.php?title=Blue_Pill
[STM32F4Discovery]: https://www.st.com/resource/en/user_manual/dm00039084.pdf
[STM32F429I-DISCO]: https://www.st.com/en/evaluation-tools/32f429idiscovery.html
[Arduino MEGA 2560]: https://www.robotshop.com/media/files/pdf/arduinomega2560datasheet.pdf
[MSP-EXP432P401R]: http://www.ti.com/tool/msp-exp432p401r
[EK-TM4C1294XL]: http://www.ti.com/tool/EK-TM4C1294XL
[NuMaker-PFM-M2351]: http://www.nuvoton.com.cn/hq/products/iot-solution/iot-platform/numaker-maker-platform/numaker-pfm-m2351?__locale=en
