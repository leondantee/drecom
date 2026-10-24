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

// Function: Em02_R0_die
// Address: 0x2a5520 - 0x2a5568
void Em02_R0_die_0x2a5520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R0_die_0x2a5520");
#endif

    switch (ctx->pc) {
        case 0x2a5520u: goto label_2a5520;
        case 0x2a5524u: goto label_2a5524;
        case 0x2a5528u: goto label_2a5528;
        case 0x2a552cu: goto label_2a552c;
        case 0x2a5530u: goto label_2a5530;
        case 0x2a5534u: goto label_2a5534;
        case 0x2a5538u: goto label_2a5538;
        case 0x2a553cu: goto label_2a553c;
        case 0x2a5540u: goto label_2a5540;
        case 0x2a5544u: goto label_2a5544;
        case 0x2a5548u: goto label_2a5548;
        case 0x2a554cu: goto label_2a554c;
        case 0x2a5550u: goto label_2a5550;
        case 0x2a5554u: goto label_2a5554;
        case 0x2a5558u: goto label_2a5558;
        case 0x2a555cu: goto label_2a555c;
        case 0x2a5560u: goto label_2a5560;
        case 0x2a5564u: goto label_2a5564;
        default: break;
    }

    ctx->pc = 0x2a5520u;

label_2a5520:
    // 0x2a5520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a5524:
    // 0x2a5524: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a5524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2a5528:
    // 0x2a5528: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a5528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2a552c:
    // 0x2a552c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2a552cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2a5530:
    // 0x2a5530: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a5530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2a5534:
    // 0x2a5534: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2a5534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2a5538:
    // 0x2a5538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a5538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a553c:
    // 0x2a553c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a553cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a5540:
    // 0x2a5540: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2a5540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2a5544:
    // 0x2a5544: 0x24426bc0  addiu       $v0, $v0, 0x6BC0
    ctx->pc = 0x2a5544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27584));
label_2a5548:
    // 0x2a5548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a554c:
    // 0x2a554c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a5550:
    // 0x2a5550: 0x40f809  jalr        $v0
label_2a5554:
    if (ctx->pc == 0x2A5554u) {
        ctx->pc = 0x2A5558u;
        goto label_2a5558;
    }
    ctx->pc = 0x2A5550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5558u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5550u, 0x2A5558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5558u;
label_2a5558:
    // 0x2a5558: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a5558u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a555c:
    // 0x2a555c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a555cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a5560:
    // 0x2a5560: 0x3e00008  jr          $ra
label_2a5564:
    if (ctx->pc == 0x2A5564u) {
        ctx->pc = 0x2A5568u;
        goto label_fallthrough_0x2a5560;
    }
    ctx->pc = 0x2A5560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a5560:
    ctx->pc = 0x2A5568u;
}
