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

// Function: entry_002cae40
// Address: 0x2cae40 - 0x2caee8
void entry_002cae40_0x2cae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cae40_0x2cae40");
#endif

    switch (ctx->pc) {
        case 0x2cae48u: goto label_2cae48;
        case 0x2cae80u: goto label_2cae80;
        case 0x2caeb8u: goto label_2caeb8;
        default: break;
    }

    ctx->pc = 0x2cae40u;

    // 0x2cae40: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CAE40u;
    SET_GPR_U32(ctx, 31, 0x2CAE48u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CAE40u, 0x2CAE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE48u;
label_2cae48:
    // 0x2cae48: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cae48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cae4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cae4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cae50: 0x0  nop
    ctx->pc = 0x2cae50u;
    // NOP
    // 0x2cae54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cae54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cae58: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cae58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cae5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cae5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae60: 0x0  nop
    ctx->pc = 0x2cae60u;
    // NOP
    // 0x2cae64: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cae64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cae68: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2cae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cae6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cae70: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cae74: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cae78: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CAE78u;
    SET_GPR_U32(ctx, 31, 0x2CAE80u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CAE78u, 0x2CAE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE80u;
label_2cae80:
    // 0x2cae80: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cae80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cae84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cae84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cae88: 0x0  nop
    ctx->pc = 0x2cae88u;
    // NOP
    // 0x2cae8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cae8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cae90: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2cae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2cae94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cae94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae98: 0x0  nop
    ctx->pc = 0x2cae98u;
    // NOP
    // 0x2cae9c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cae9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2caea0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2caea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caea4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2caea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2caea8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2caea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2caeac: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2caeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2caeb0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CAEB0u;
    SET_GPR_U32(ctx, 31, 0x2CAEB8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CAEB0u, 0x2CAEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEB8u;
label_2caeb8:
    // 0x2caeb8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2caeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2caebc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2caebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2caec0: 0x0  nop
    ctx->pc = 0x2caec0u;
    // NOP
    // 0x2caec4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2caec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2caec8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2caec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2caecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2caeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2caed0: 0x0  nop
    ctx->pc = 0x2caed0u;
    // NOP
    // 0x2caed4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2caed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2caed8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2caed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caedc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2caedcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2caee0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2caee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2caee4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2caee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2caee8u;
}
