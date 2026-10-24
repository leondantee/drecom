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

// Function: entry_00199f30
// Address: 0x199f30 - 0x199f84
void entry_00199f30_0x199f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199f30_0x199f30");
#endif

    switch (ctx->pc) {
        case 0x199f40u: goto label_199f40;
        case 0x199f58u: goto label_199f58;
        default: break;
    }

    ctx->pc = 0x199f30u;

    // 0x199f30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199f34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x199f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199f38: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x199F38u;
    SET_GPR_U32(ctx, 31, 0x199F40u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x199F38u, 0x199F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F40u;
label_199f40:
    // 0x199f40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199f44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199f48: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x199f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x199f4c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x199f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x199f50: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x199F50u;
    SET_GPR_U32(ctx, 31, 0x199F58u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x199F50u, 0x199F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F58u;
label_199f58:
    // 0x199f58: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x199f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x199f5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199f60: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x199f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199f64: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199f68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199f6c: 0x0  nop
    ctx->pc = 0x199f6cu;
    // NOP
    // 0x199f70: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x199F70u;
    {
        const bool branch_taken_0x199f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199f70) {
            ctx->pc = 0x199F84u;
            return;
        }
    }
    ctx->pc = 0x199F78u;
    // 0x199f78: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199f7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199f80: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x199f84u;
}
