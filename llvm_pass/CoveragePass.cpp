#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
using namespace llvm;
namespace { struct CoveragePass : public FunctionPass { static char ID; CoveragePass() : FunctionPass(ID) {} bool runOnFunction(Function &F) override { return true; } }; } char CoveragePass::ID = 0;
