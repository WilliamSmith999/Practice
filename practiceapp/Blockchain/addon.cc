#include "Blockchain.h"
#include <node.h>
//Based on the tutorial by Dave Nash
//Mixed with Grace Hopper Academy C++ addon tutorial
void Test(const v8::FunctionCallbackInfo<v8::Value>& args) {
    Blockchain bChain = Blockchain();

    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Block 2 Data"));

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));

}

void Initialize(v8::Local<v8::Object> exports){
	NODE_SET_METHOD(exports, "Blockchain", Test);
}

NODE_MODULE(addon, Initialize)
