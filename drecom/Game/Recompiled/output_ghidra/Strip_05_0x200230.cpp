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

// Function: Strip_05
// Address: 0x200230 - 0x200274
void Strip_05_0x200230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_05_0x200230");
#endif

    switch (ctx->pc) {
        case 0x200230u: goto label_200230;
        case 0x200234u: goto label_200234;
        case 0x200238u: goto label_200238;
        case 0x20023cu: goto label_20023c;
        case 0x200240u: goto label_200240;
        case 0x200244u: goto label_200244;
        case 0x200248u: goto label_200248;
        case 0x20024cu: goto label_20024c;
        case 0x200250u: goto label_200250;
        case 0x200254u: goto label_200254;
        case 0x200258u: goto label_200258;
        case 0x20025cu: goto label_20025c;
        case 0x200260u: goto label_200260;
        case 0x200264u: goto label_200264;
        case 0x200268u: goto label_200268;
        case 0x20026cu: goto label_20026c;
        case 0x200270u: goto label_200270;
        default: break;
    }

    ctx->pc = 0x200230u;

label_200230:
    // 0x200230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_200234:
    // 0x200234: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x200234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_200238:
    // 0x200238: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x200238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_20023c:
    // 0x20023c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20023cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_200240:
    // 0x200240: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x200240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_200244:
    // 0x200244: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x200244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_200248:
    // 0x200248: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x200248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20024c:
    // 0x20024c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_200250:
    // 0x200250: 0x24429f70  addiu       $v0, $v0, -0x6090
    ctx->pc = 0x200250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942576));
label_200254:
    // 0x200254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200258:
    // 0x200258: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x200258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20025c:
    // 0x20025c: 0x40f809  jalr        $v0
label_200260:
    if (ctx->pc == 0x200260u) {
        ctx->pc = 0x200264u;
        goto label_200264;
    }
    ctx->pc = 0x20025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200264u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20025Cu, 0x200264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200264u;
label_200264:
    // 0x200264: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x200264u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_200268:
    // 0x200268: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x200268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20026c:
    // 0x20026c: 0x3e00008  jr          $ra
label_200270:
    if (ctx->pc == 0x200270u) {
        ctx->pc = 0x200274u;
        goto label_fallthrough_0x20026c;
    }
    ctx->pc = 0x20026Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20026Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20026c:
    ctx->pc = 0x200274u;
}
