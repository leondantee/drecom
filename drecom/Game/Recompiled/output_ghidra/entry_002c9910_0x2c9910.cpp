#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_002c9910
// Address: 0x2c9910 - 0x2c99b8
void entry_002c9910_0x2c9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c9910_0x2c9910");
#endif

    switch (ctx->pc) {
        case 0x2c9918u: goto label_2c9918;
        case 0x2c9950u: goto label_2c9950;
        case 0x2c9988u: goto label_2c9988;
        default: break;
    }

    ctx->pc = 0x2c9910u;

    // 0x2c9910: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9910u;
    SET_GPR_U32(ctx, 31, 0x2C9918u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9910u, 0x2C9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9918u;
label_2c9918:
    // 0x2c9918: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c991c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c991cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9920: 0x0  nop
    ctx->pc = 0x2c9920u;
    // NOP
    // 0x2c9924: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9928: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2c9928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2c992c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c992cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9930: 0x0  nop
    ctx->pc = 0x2c9930u;
    // NOP
    // 0x2c9934: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c9934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9938: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c993c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c993cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9940: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9944: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c9944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c9948: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9948u;
    SET_GPR_U32(ctx, 31, 0x2C9950u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9948u, 0x2C9950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9950u;
label_2c9950:
    // 0x2c9950: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c9954: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9958: 0x0  nop
    ctx->pc = 0x2c9958u;
    // NOP
    // 0x2c995c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c995cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9960: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2c9960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2c9964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9968: 0x0  nop
    ctx->pc = 0x2c9968u;
    // NOP
    // 0x2c996c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c996cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9970: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c9970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9974: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9978: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c997c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c997cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c9980: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9980u;
    SET_GPR_U32(ctx, 31, 0x2C9988u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9980u, 0x2C9988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9988u;
label_2c9988:
    // 0x2c9988: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c998c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c998cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9990: 0x0  nop
    ctx->pc = 0x2c9990u;
    // NOP
    // 0x2c9994: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9998: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c9998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c999c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c999cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c99a0: 0x0  nop
    ctx->pc = 0x2c99a0u;
    // NOP
    // 0x2c99a4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c99a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c99a8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c99a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c99ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c99acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c99b0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c99b4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2c99b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2c99b8u;
}
