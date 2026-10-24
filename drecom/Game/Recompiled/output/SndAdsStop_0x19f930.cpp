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

// Function: SndAdsStop
// Address: 0x19f930 - 0x19f964
void SndAdsStop_0x19f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndAdsStop_0x19f930");
#endif

    switch (ctx->pc) {
        case 0x19f954u: goto label_19f954;
        default: break;
    }

    ctx->pc = 0x19f930u;

    // 0x19f930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f934: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19f934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19f938: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f93c: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x19f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x19f940: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19f940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19f944: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F944u;
    {
        const bool branch_taken_0x19f944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f944) {
            ctx->pc = 0x19F954u;
            goto label_19f954;
        }
    }
    ctx->pc = 0x19F94Cu;
    // 0x19f94c: 0xc0ce6b4  jal         func_339AD0
    ctx->pc = 0x19F94Cu;
    SET_GPR_U32(ctx, 31, 0x19F954u);
    ctx->pc = 0x339AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339AD0u, 0x19F94Cu, 0x19F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F954u;
label_19f954:
    // 0x19f954: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19f954u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f958: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19f958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19f95c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F964u;
}
