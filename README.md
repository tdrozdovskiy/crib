# CRIB
## Contents
1. [LinuxKernel](#1-linux_kernel)
2. [CodeStyle](#2-codestyle)
3. [Platforms supported](#3-platforms-supported)
4. [Get and build OP-TEE software](#4-get-and-build-op-tee-software)
5. [Coding standards](#5-coding-standards)
    5. [checkpatch](#51-checkpatch)

---
## 1. LinuxKernel
The `optee_os git`, contains the source code for the TEE in Linux using the
ARM&reg; TrustZone&reg; technology. This component meets the GlobalPlatform
TEE System Architecture specification. It also provides the TEE Internal core API
v1.1 as defined by the GlobalPlatform TEE Standard for the development of
Trusted Applications. For a general overview of OP-TEE and to find out how to
contribute, please see the [Notice.md](Notice.md) file.

The Trusted OS is accessible from the Rich OS (Linux) using the
[GlobalPlatform TEE Client API Specification v1.0](http://www.globalplatform.org/specificationsdevice.asp),
which also is used to trigger secure execution of applications within the TEE.

---
## 2. CodeStyle
The software is distributed mostly under the
[BSD 2-Clause](http://opensource.org/licenses/BSD-2-Clause) open source
license, apart from some files in the `optee_os/lib/libutils` directory
which are distributed under the
[BSD 3-Clause](http://opensource.org/licenses/BSD-3-Clause) or public domain
licenses.

[Shell](shell/README.md)
