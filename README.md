# particletk/create

A helper for constructing smart pointers of various types.

## Install

```cpp
#include <particlepm.hpp>

// ...

PPM_PACKAGE(p) {
  // ...

  PPM::GitHubPtr ptk_box = p->github_repo("particletk", "create");

  // ...

  target->cpp_flags(flagcat({
    // ...
    ("-I" + ptk_box->dir()),
    // ...
  }));

  // ...
}

```

## Usage

```cpp
#include <particletk/create.hpp>

#include <iostream>
#include <string>

int main(int argc, char** argv) {
  auto ptr = PTK::create<std::string>("Hello, World!");
  std::cout << *ptr.get() << std::endl;

  auto ptr2 = PTK::create_ptr<std::string, std::unique_ptr>("unique_ptr");
  std::cout << *ptr2.get() << std::endl;

  return 0;
}
```
