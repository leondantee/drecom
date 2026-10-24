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

// Function: entry_00182f88
// Address: 0x182f88 - 0x182fc4
void entry_00182f88_0x182f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182f88_0x182f88");
#endif

    switch (ctx->pc) {
        case 0x182fa4u: goto label_182fa4;
        case 0x182fb0u: goto label_182fb0;
        default: break;
    }

    ctx->pc = 0x182f88u;

    // 0x182f88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x182f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x182f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182f90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x182f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182f94: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x182f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x182f98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x182f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182f9c: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x182F9Cu;
    SET_GPR_U32(ctx, 31, 0x182FA4u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x182F9Cu, 0x182FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FA4u;
label_182fa4:
    // 0x182fa4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x182fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182fa8: 0xc05f910  jal         func_17E440
    ctx->pc = 0x182FA8u;
    SET_GPR_U32(ctx, 31, 0x182FB0u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x182FA8u, 0x182FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FB0u;
label_182fb0:
    // 0x182fb0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x182fb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182fb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x182fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x182FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182FC4u;
}
