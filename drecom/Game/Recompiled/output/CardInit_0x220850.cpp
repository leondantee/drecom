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

// Function: CardInit
// Address: 0x220850 - 0x220888
void CardInit_0x220850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CardInit_0x220850");
#endif

    switch (ctx->pc) {
        case 0x220860u: goto label_220860;
        case 0x220878u: goto label_220878;
        default: break;
    }

    ctx->pc = 0x220850u;

    // 0x220850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220854: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x220854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x220858: 0xc043f94  jal         func_10FE50
    ctx->pc = 0x220858u;
    SET_GPR_U32(ctx, 31, 0x220860u);
    ctx->pc = 0x10FE50u;
    {
        ctx->pc = 0x220860u;
        ps2_stubs::sceMcInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x220860u) { return; }
    ctx->pc = 0x220860u;
label_220860:
    // 0x220860: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x220860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x220864: 0x2444cf78  addiu       $a0, $v0, -0x3088
    ctx->pc = 0x220864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954872));
    // 0x220868: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220868u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22086c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x22086cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x220870: 0xc046314  jal         func_118C50
    ctx->pc = 0x220870u;
    SET_GPR_U32(ctx, 31, 0x220878u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x220878u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x220878u) { return; }
    ctx->pc = 0x220878u;
label_220878:
    // 0x220878: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x220878u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22087c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22087cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x220880: 0x3e00008  jr          $ra
    ctx->pc = 0x220880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220888u;
}
