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

// Function: e2d_id28_type01
// Address: 0x2b3d40 - 0x2b3d6c
void e2d_id28_type01_0x2b3d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id28_type01_0x2b3d40");
#endif

    switch (ctx->pc) {
        case 0x2b3d5cu: goto label_2b3d5c;
        default: break;
    }

    ctx->pc = 0x2b3d40u;

    // 0x2b3d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3d44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b3d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b3d48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b3d4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3d50: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b3d54: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B3D54u;
    SET_GPR_U32(ctx, 31, 0x2B3D5Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B3D54u, 0x2B3D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D5Cu;
label_2b3d5c:
    // 0x2b3d5c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b3d5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3d60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b3d64: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3D6Cu;
}
