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

// Function: entry_002f5d40
// Address: 0x2f5d40 - 0x2f5dec
void entry_002f5d40_0x2f5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5d40_0x2f5d40");
#endif

    switch (ctx->pc) {
        case 0x2f5d88u: goto label_2f5d88;
        case 0x2f5dacu: goto label_2f5dac;
        case 0x2f5dd0u: goto label_2f5dd0;
        default: break;
    }

    ctx->pc = 0x2f5d40u;

    // 0x2f5d40: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2f5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2f5d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5d48: 0x0  nop
    ctx->pc = 0x2f5d48u;
    // NOP
    // 0x2f5d4c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f5d50: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2f5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2f5d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5d58: 0x0  nop
    ctx->pc = 0x2f5d58u;
    // NOP
    // 0x2f5d5c: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f5d60: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2f5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2f5d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5d68: 0x0  nop
    ctx->pc = 0x2f5d68u;
    // NOP
    // 0x2f5d6c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f5d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2f5d70: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f5d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5d78: 0x0  nop
    ctx->pc = 0x2f5d78u;
    // NOP
    // 0x2f5d7c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f5d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2f5d80: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5D80u;
    SET_GPR_U32(ctx, 31, 0x2F5D88u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5D80u, 0x2F5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D88u;
label_2f5d88:
    // 0x2f5d88: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2f5d8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5d90: 0x0  nop
    ctx->pc = 0x2f5d90u;
    // NOP
    // 0x2f5d94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5d94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5d98: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5d9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5da0: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f5da4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5DA4u;
    SET_GPR_U32(ctx, 31, 0x2F5DACu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5DA4u, 0x2F5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DACu;
label_2f5dac:
    // 0x2f5dac: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2f5db0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5db4: 0x0  nop
    ctx->pc = 0x2f5db4u;
    // NOP
    // 0x2f5db8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5db8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5dbc: 0xc60002d4  lwc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5dc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5dc4: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f5dc8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5DC8u;
    SET_GPR_U32(ctx, 31, 0x2F5DD0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5DC8u, 0x2F5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DD0u;
label_2f5dd0:
    // 0x2f5dd0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2f5dd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5dd8: 0x0  nop
    ctx->pc = 0x2f5dd8u;
    // NOP
    // 0x2f5ddc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5de0: 0xc60002d8  lwc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f5de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5de4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5de8: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f5de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    ctx->pc = 0x2f5decu;
}
