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

// Function: entry_001996a0
// Address: 0x1996a0 - 0x1996f4
void entry_001996a0_0x1996a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001996a0_0x1996a0");
#endif

    switch (ctx->pc) {
        case 0x1996b0u: goto label_1996b0;
        case 0x1996c8u: goto label_1996c8;
        default: break;
    }

    ctx->pc = 0x1996a0u;

    // 0x1996a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1996a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1996a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1996a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1996a8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1996A8u;
    SET_GPR_U32(ctx, 31, 0x1996B0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1996A8u, 0x1996B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996B0u;
label_1996b0:
    // 0x1996b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1996b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1996b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1996b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1996b8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1996b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1996bc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1996bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1996c0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1996C0u;
    SET_GPR_U32(ctx, 31, 0x1996C8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1996C0u, 0x1996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996C8u;
label_1996c8:
    // 0x1996c8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1996c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1996cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1996ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1996d0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1996d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1996d4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1996d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1996d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1996d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1996dc: 0x0  nop
    ctx->pc = 0x1996dcu;
    // NOP
    // 0x1996e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1996E0u;
    {
        const bool branch_taken_0x1996e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1996e0) {
            ctx->pc = 0x1996F4u;
            return;
        }
    }
    ctx->pc = 0x1996E8u;
    // 0x1996e8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1996e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1996ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1996ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1996f0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1996f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1996f4u;
}
