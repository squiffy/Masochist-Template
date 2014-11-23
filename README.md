# Masochist Template
Use this Xcode template to get started using libmasochist.

### Version
1.0


### Usage
Do a recursive clone on this repo in order for it to work properly.
Just update the git submodule whenever you need to update libmasochist.

```sh
$ sudo chown -R root:wheel masochist.kext
$ sudo kextload masochist.kext
```

For OS X 10.10, you need to add a boot argument if you don't sign your kext.

```sh
$ sudo nvram boot-args='kext-dev-mode=1'
```


### Disclaimer
Please don't do anything stupid/illegal with this. This stuff can break your Mac. If you're unsure, run OS X in a VM.

