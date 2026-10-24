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

// Function: entry_00313ef0
// Address: 0x313ef0 - 0x313f68
void entry_00313ef0_0x313ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313ef0_0x313ef0");
#endif

    switch (ctx->pc) {
        case 0x313ef8u: goto label_313ef8;
        case 0x313f14u: goto label_313f14;
        case 0x313f40u: goto label_313f40;
        default: break;
    }

    ctx->pc = 0x313ef0u;

    // 0x313ef0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x313EF0u;
    SET_GPR_U32(ctx, 31, 0x313EF8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x313EF0u, 0x313EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313EF8u;
label_313ef8:
    // 0x313ef8: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x313ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x313efc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313f00: 0x0  nop
    ctx->pc = 0x313f00u;
    // NOP
    // 0x313f04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x313f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313f08: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x313f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x313f0c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x313F0Cu;
    SET_GPR_U32(ctx, 31, 0x313F14u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x313F0Cu, 0x313F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313F14u;
label_313f14:
    // 0x313f14: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x313f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x313f18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313f1c: 0x0  nop
    ctx->pc = 0x313f1cu;
    // NOP
    // 0x313f20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x313f20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313f24: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x313f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x313f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313f2c: 0x0  nop
    ctx->pc = 0x313f2cu;
    // NOP
    // 0x313f30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x313f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x313f34: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x313f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x313f38: 0xc06765c  jal         func_19D970
    ctx->pc = 0x313F38u;
    SET_GPR_U32(ctx, 31, 0x313F40u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x313F38u, 0x313F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313F40u;
label_313f40:
    // 0x313f40: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x313f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x313f44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313f48: 0x0  nop
    ctx->pc = 0x313f48u;
    // NOP
    // 0x313f4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x313f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313f50: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x313f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x313f54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x313f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x313f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313f5c: 0x0  nop
    ctx->pc = 0x313f5cu;
    // NOP
    // 0x313f60: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x313f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x313f64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x313f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x313f68u;
}
