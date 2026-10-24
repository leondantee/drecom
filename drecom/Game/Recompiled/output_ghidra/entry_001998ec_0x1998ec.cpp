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

// Function: entry_001998ec
// Address: 0x1998ec - 0x199940
void entry_001998ec_0x1998ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001998ec_0x1998ec");
#endif

    switch (ctx->pc) {
        case 0x1998fcu: goto label_1998fc;
        case 0x199914u: goto label_199914;
        default: break;
    }

    ctx->pc = 0x1998ecu;

    // 0x1998ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1998ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1998f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1998f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1998f4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1998F4u;
    SET_GPR_U32(ctx, 31, 0x1998FCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1998F4u, 0x1998FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998FCu;
label_1998fc:
    // 0x1998fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1998fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199900: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199904: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x199904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x199908: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x199908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x19990c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19990Cu;
    SET_GPR_U32(ctx, 31, 0x199914u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19990Cu, 0x199914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199914u;
label_199914:
    // 0x199914: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x199914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x199918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19991c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199920: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199928: 0x0  nop
    ctx->pc = 0x199928u;
    // NOP
    // 0x19992c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19992Cu;
    {
        const bool branch_taken_0x19992c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19992c) {
            ctx->pc = 0x199940u;
            return;
        }
    }
    ctx->pc = 0x199934u;
    // 0x199934: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199938: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19993c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19993cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x199940u;
}
