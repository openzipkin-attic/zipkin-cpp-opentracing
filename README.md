# zipkin-cpp

Zipkin's C++ tracer library

## Compile and install

```
libtoolize # or glibtoolize
./autogen.sh
./configure
sudo make install
```

To test (requires gtest - see [here for OS X](http://stackoverflow.com/questions/20746232/how-to-properly-setup-googletest-on-os-x-aside-from-xcode), [here for ubuntu](http://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/) and [here for Red Hat](http://stackoverflow.com/questions/13513905/how-to-setup-googletest-as-a-shared-library-on-linux)/for Red Hat note also [this](http://stackoverflow.com/questions/4743233/is-usr-local-lib-searched-for-shared-libraries)):

```
cd test
make
./test
```
