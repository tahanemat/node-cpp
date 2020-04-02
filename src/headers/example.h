#include <napi.h>

namespace secret {
    void PrintSecret();
}
void PrintSecretWrapped(const Napi::CallbackInfo& info);
Napi::Object Init(Napi::Env env, Napi::Object exports);