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

// Function: Strip_0a
// Address: 0x200cd0 - 0x200d14
void Strip_0a_0x200cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_0a_0x200cd0");
#endif

    switch (ctx->pc) {
        case 0x200cd0u: goto label_200cd0;
        case 0x200cd4u: goto label_200cd4;
        case 0x200cd8u: goto label_200cd8;
        case 0x200cdcu: goto label_200cdc;
        case 0x200ce0u: goto label_200ce0;
        case 0x200ce4u: goto label_200ce4;
        case 0x200ce8u: goto label_200ce8;
        case 0x200cecu: goto label_200cec;
        case 0x200cf0u: goto label_200cf0;
        case 0x200cf4u: goto label_200cf4;
        case 0x200cf8u: goto label_200cf8;
        case 0x200cfcu: goto label_200cfc;
        case 0x200d00u: goto label_200d00;
        case 0x200d04u: goto label_200d04;
        case 0x200d08u: goto label_200d08;
        case 0x200d0cu: goto label_200d0c;
        case 0x200d10u: goto label_200d10;
        default: break;
    }

    ctx->pc = 0x200cd0u;

label_200cd0:
    // 0x200cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_200cd4:
    // 0x200cd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x200cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_200cd8:
    // 0x200cd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x200cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_200cdc:
    // 0x200cdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x200cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_200ce0:
    // 0x200ce0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x200ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_200ce4:
    // 0x200ce4: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x200ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_200ce8:
    // 0x200ce8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x200ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_200cec:
    // 0x200cec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x200cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_200cf0:
    // 0x200cf0: 0x24429f90  addiu       $v0, $v0, -0x6070
    ctx->pc = 0x200cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942608));
label_200cf4:
    // 0x200cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200cf8:
    // 0x200cf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x200cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200cfc:
    // 0x200cfc: 0x40f809  jalr        $v0
label_200d00:
    if (ctx->pc == 0x200D00u) {
        ctx->pc = 0x200D04u;
        goto label_200d04;
    }
    ctx->pc = 0x200CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200D04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200CFCu, 0x200D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200D04u;
label_200d04:
    // 0x200d04: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x200d04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_200d08:
    // 0x200d08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x200d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_200d0c:
    // 0x200d0c: 0x3e00008  jr          $ra
label_200d10:
    if (ctx->pc == 0x200D10u) {
        ctx->pc = 0x200D14u;
        goto label_fallthrough_0x200d0c;
    }
    ctx->pc = 0x200D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200d0c:
    ctx->pc = 0x200D14u;
}
