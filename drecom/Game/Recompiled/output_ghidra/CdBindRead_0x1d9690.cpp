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

// Function: CdBindRead
// Address: 0x1d9690 - 0x1d96e0
void CdBindRead_0x1d9690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdBindRead_0x1d9690");
#endif

    switch (ctx->pc) {
        case 0x1d96d0u: goto label_1d96d0;
        default: break;
    }

    ctx->pc = 0x1d9690u;

    // 0x1d9690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9694: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1d9694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d9698: 0xa7a40018  sh          $a0, 0x18($sp)
    ctx->pc = 0x1d9698u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d969c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d969cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d96a0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1d96a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1d96a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d96a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D96A8u;
    {
        const bool branch_taken_0x1d96a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d96a8) {
            ctx->pc = 0x1D96B8u;
            goto label_1d96b8;
        }
    }
    ctx->pc = 0x1D96B0u;
    // 0x1d96b0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d96b4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1d96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1d96b8:
    // 0x1d96b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d96bc: 0x34460002  ori         $a2, $v0, 0x2
    ctx->pc = 0x1d96bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d96c0: 0x97a40018  lhu         $a0, 0x18($sp)
    ctx->pc = 0x1d96c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d96c4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d96c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d96c8: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1D96C8u;
    SET_GPR_U32(ctx, 31, 0x1D96D0u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1D96C8u, 0x1D96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D96D0u;
label_1d96d0:
    // 0x1d96d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1d96d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d96d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d96d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d96d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D96D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D96D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D96E0u;
}
