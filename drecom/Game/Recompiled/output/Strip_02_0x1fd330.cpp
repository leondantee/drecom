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

// Function: Strip_02
// Address: 0x1fd330 - 0x1fd374
void Strip_02_0x1fd330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_02_0x1fd330");
#endif

    switch (ctx->pc) {
        case 0x1fd330u: goto label_1fd330;
        case 0x1fd334u: goto label_1fd334;
        case 0x1fd338u: goto label_1fd338;
        case 0x1fd33cu: goto label_1fd33c;
        case 0x1fd340u: goto label_1fd340;
        case 0x1fd344u: goto label_1fd344;
        case 0x1fd348u: goto label_1fd348;
        case 0x1fd34cu: goto label_1fd34c;
        case 0x1fd350u: goto label_1fd350;
        case 0x1fd354u: goto label_1fd354;
        case 0x1fd358u: goto label_1fd358;
        case 0x1fd35cu: goto label_1fd35c;
        case 0x1fd360u: goto label_1fd360;
        case 0x1fd364u: goto label_1fd364;
        case 0x1fd368u: goto label_1fd368;
        case 0x1fd36cu: goto label_1fd36c;
        case 0x1fd370u: goto label_1fd370;
        default: break;
    }

    ctx->pc = 0x1fd330u;

label_1fd330:
    // 0x1fd330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fd334:
    // 0x1fd334: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1fd334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1fd338:
    // 0x1fd338: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1fd338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1fd33c:
    // 0x1fd33c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1fd33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1fd340:
    // 0x1fd340: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fd340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1fd344:
    // 0x1fd344: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x1fd344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_1fd348:
    // 0x1fd348: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fd348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd34c:
    // 0x1fd34c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1fd350:
    // 0x1fd350: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1fd350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
label_1fd354:
    // 0x1fd354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fd358:
    // 0x1fd358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fd358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fd35c:
    // 0x1fd35c: 0x40f809  jalr        $v0
label_1fd360:
    if (ctx->pc == 0x1FD360u) {
        ctx->pc = 0x1FD364u;
        goto label_1fd364;
    }
    ctx->pc = 0x1FD35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD364u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD35Cu, 0x1FD364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD364u;
label_1fd364:
    // 0x1fd364: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1fd364u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd368:
    // 0x1fd368: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fd368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fd36c:
    // 0x1fd36c: 0x3e00008  jr          $ra
label_1fd370:
    if (ctx->pc == 0x1FD370u) {
        ctx->pc = 0x1FD374u;
        goto label_fallthrough_0x1fd36c;
    }
    ctx->pc = 0x1FD36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fd36c:
    ctx->pc = 0x1FD374u;
}
