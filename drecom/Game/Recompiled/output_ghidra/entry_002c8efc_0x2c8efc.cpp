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

// Function: entry_002c8efc
// Address: 0x2c8efc - 0x2c8f90
void entry_002c8efc_0x2c8efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8efc_0x2c8efc");
#endif

    switch (ctx->pc) {
        case 0x2c8f14u: goto label_2c8f14;
        case 0x2c8f34u: goto label_2c8f34;
        case 0x2c8f4cu: goto label_2c8f4c;
        case 0x2c8f6cu: goto label_2c8f6c;
        case 0x2c8f7cu: goto label_2c8f7c;
        case 0x2c8f88u: goto label_2c8f88;
        default: break;
    }

    ctx->pc = 0x2c8efcu;

    // 0x2c8efc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f00: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8f04: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2c8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8f08: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c8f08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8f0c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C8F0Cu;
    SET_GPR_U32(ctx, 31, 0x2C8F14u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C8F0Cu, 0x2C8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F14u;
label_2c8f14:
    // 0x2c8f14: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f18: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c8f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c8f1c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f20: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2c8f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8f24: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2c8f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8f28: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c8f28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8f2c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C8F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C8F34u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C8F2Cu, 0x2C8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F34u;
label_2c8f34:
    // 0x2c8f34: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f38: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c8f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c8f3c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8f40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8f44: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C8F44u;
    SET_GPR_U32(ctx, 31, 0x2C8F4Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C8F44u, 0x2C8F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F4Cu;
label_2c8f4c:
    // 0x2c8f4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8f54: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c8f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8f58: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f5c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c8f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c8f60: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f64: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C8F64u;
    SET_GPR_U32(ctx, 31, 0x2C8F6Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C8F64u, 0x2C8F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F6Cu;
label_2c8f6c:
    // 0x2c8f6c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8f70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8f74: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C8F74u;
    SET_GPR_U32(ctx, 31, 0x2C8F7Cu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C8F74u, 0x2C8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F7Cu;
label_2c8f7c:
    // 0x2c8f7c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f80: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C8F80u;
    SET_GPR_U32(ctx, 31, 0x2C8F88u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C8F80u, 0x2C8F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F88u;
label_2c8f88:
    // 0x2c8f88: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x2C8F88u;
    {
        const bool branch_taken_0x2c8f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f88) {
            ctx->pc = 0x2C9590u;
            return;
        }
    }
    ctx->pc = 0x2C8F90u;
}
