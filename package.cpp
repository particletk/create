#include <particlepm.hpp>

using namespace PPM::Utils;

PPM_PACKAGE(p) {
  p->name("create");
  p->version(PPM::Version("v0.1.3"));
  p->description("A helper for constructing smart pointers of various types.");
  p->github(PPM::GitHub("particletk", "create"));
  p->license(PPM::License("MIT", "https://github.com/particletk/create/blob/master/LICENSE.txt"));

  if (PPM::dev) {
    PPM::TargetPtr demo = p->executable("ptk-create-demo");
    demo->cpp("c++11");
    demo->cpp_files({
      "demo.cpp"
    });
    demo->cpp_flags(flagcat({
      ("-I" + p->pkg_dir())
    }));
  }
}
