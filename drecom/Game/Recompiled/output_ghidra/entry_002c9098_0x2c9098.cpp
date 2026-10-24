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

// Function: entry_002c9098
// Address: 0x2c9098 - 0x2c912c
void entry_002c9098_0x2c9098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c9098_0x2c9098");
#endif

    switch (ctx->pc) {
        case 0x2c90b0u: goto label_2c90b0;
        case 0x2c90d0u: goto label_2c90d0;
        case 0x2c90e8u: goto label_2c90e8;
        case 0x2c9108u: goto label_2c9108;
        case 0x2c9118u: goto label_2c9118;
        case 0x2c9124u: goto label_2c9124;
        default: break;
    }

    ctx->pc = 0x2c9098u;

    // 0x2c9098: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c909c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c90a0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2c90a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c90a4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c90a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c90a8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C90A8u;
    SET_GPR_U32(ctx, 31, 0x2C90B0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C90A8u, 0x2C90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90B0u;
label_2c90b0:
    // 0x2c90b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c90b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c90b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90bc: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2c90bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c90c0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2c90c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c90c4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c90c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c90c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C90C8u;
    SET_GPR_U32(ctx, 31, 0x2C90D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C90C8u, 0x2C90D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90D0u;
label_2c90d0:
    // 0x2c90d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90d4: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c90d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c90d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c90d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c90dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c90e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C90E0u;
    SET_GPR_U32(ctx, 31, 0x2C90E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C90E0u, 0x2C90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90E8u;
label_2c90e8:
    // 0x2c90e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c90f0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c90f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c90f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90f8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c90f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c90fc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c90fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9100: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C9100u;
    SET_GPR_U32(ctx, 31, 0x2C9108u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C9100u, 0x2C9108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9108u;
label_2c9108:
    // 0x2c9108: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c910c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c910cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c9110: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C9110u;
    SET_GPR_U32(ctx, 31, 0x2C9118u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C9110u, 0x2C9118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9118u;
label_2c9118:
    // 0x2c9118: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c911c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C911Cu;
    SET_GPR_U32(ctx, 31, 0x2C9124u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C911Cu, 0x2C9124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9124u;
label_2c9124:
    // 0x2c9124: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x2C9124u;
    {
        const bool branch_taken_0x2c9124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9124) {
            ctx->pc = 0x2C9590u;
            return;
        }
    }
    ctx->pc = 0x2C912Cu;
}
