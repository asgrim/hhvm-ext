#include "hphp/runtime/base/base-includes.h"
#include "hphp/runtime/base/execution-context.h"

namespace HPHP {
/////////////////////////////////////////////////////////////////////////////

void HHVM_FUNCTION(example1_greet, const String& name, bool hello) {
  g_context->write(hello ? "Hello " : "Goodbye ");
  g_context->write(name);
  g_context->write("\n");
}

class Example1Extension : public Extension {
  public:
    Example1Extension(): Extension("example1", "1.0") {}

  void moduleInit() override {
    HHVM_FE(example1_greet);

    loadSystemlib();
  }

} s_example1_extension;

HHVM_GET_MODULE(example1);

/////////////////////////////////////////////////////////////////////////////
} // namespace HPHP
