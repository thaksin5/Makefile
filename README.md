# MakeFile

### Automatic Variable
* $@ - replace with target name (-->target : file)
* $^ - replace with all pre-requisites (without duplicate) (target : file<--)
* $<  - replace first pre-requisite
* $+ - replace with all pre-requisites (with duplicate)
* $? - replace only with newer pre-requisites
