#include <napi.h>

namespace secret {
    int PrintSecret();
}
Napi::Number PrintSecretWrapped(const Napi::CallbackInfo& info);
Napi::Object Init(Napi::Env env, Napi::Object exports);