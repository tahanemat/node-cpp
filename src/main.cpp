#include <napi.h>
#include "headers/example.h"

Napi::Number PrintSecretWrapped(const Napi::CallbackInfo& info){
    Napi::Env env = info.Env();
    Napi::Number returnVal = Napi::Number::New(env, secret::PrintSecret());
    return returnVal;
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set("printMySecret",Napi::Function::New(env, PrintSecretWrapped));
    return exports;
}

NODE_API_MODULE(nodecpp, Init)