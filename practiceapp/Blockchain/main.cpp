#include "Blockchain.h"
//#include <node.h>

int main(/*const v8::FunctionCallbackInfo<v8::Value>& args*/) {
    Blockchain bChain = Blockchain();

    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Block 2 Data"));

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));

    return 0;
}
/*
void Initialize(){
	NODE_SET_METHOD(exports, "Blockchain", main)
}

NODE_MODULE(addon, Initialize)
*/
