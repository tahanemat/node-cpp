#include <napi.h>
#include "headers/example.h"

void PrintSecretWrapped(const Napi::CallbackInfo& info){
    secret::PrintSecret();
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set("printMySecret",Napi::Function::New(env, PrintSecretWrapped));
    return exports;
}

NODE_API_MODULE(nodecpp, Init)