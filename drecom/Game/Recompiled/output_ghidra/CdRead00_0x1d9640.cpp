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

// Function: CdRead00
// Address: 0x1d9640 - 0x1d9690
void CdRead00_0x1d9640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdRead00_0x1d9640");
#endif

    switch (ctx->pc) {
        case 0x1d9680u: goto label_1d9680;
        default: break;
    }

    ctx->pc = 0x1d9640u;

    // 0x1d9640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9644: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1d9644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d9648: 0xa7a40018  sh          $a0, 0x18($sp)
    ctx->pc = 0x1d9648u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d964c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d964cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d9650: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1d9650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1d9654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d9654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d9658: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9658u;
    {
        const bool branch_taken_0x1d9658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9658) {
            ctx->pc = 0x1D9668u;
            goto label_1d9668;
        }
    }
    ctx->pc = 0x1D9660u;
    // 0x1d9660: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d9660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d9664: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1d9664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1d9668:
    // 0x1d9668: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d9668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d966c: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x1d966cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d9670: 0x97a40018  lhu         $a0, 0x18($sp)
    ctx->pc = 0x1d9670u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9674: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d9674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9678: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1D9678u;
    SET_GPR_U32(ctx, 31, 0x1D9680u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1D9678u, 0x1D9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9680u;
label_1d9680:
    // 0x1d9680: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1d9680u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9684: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d9684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d9688: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9690u;
}
