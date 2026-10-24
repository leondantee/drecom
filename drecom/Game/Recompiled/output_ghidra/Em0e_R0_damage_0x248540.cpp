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

// Function: Em0e_R0_damage
// Address: 0x248540 - 0x248588
void Em0e_R0_damage_0x248540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R0_damage_0x248540");
#endif

    switch (ctx->pc) {
        case 0x248540u: goto label_248540;
        case 0x248544u: goto label_248544;
        case 0x248548u: goto label_248548;
        case 0x24854cu: goto label_24854c;
        case 0x248550u: goto label_248550;
        case 0x248554u: goto label_248554;
        case 0x248558u: goto label_248558;
        case 0x24855cu: goto label_24855c;
        case 0x248560u: goto label_248560;
        case 0x248564u: goto label_248564;
        case 0x248568u: goto label_248568;
        case 0x24856cu: goto label_24856c;
        case 0x248570u: goto label_248570;
        case 0x248574u: goto label_248574;
        case 0x248578u: goto label_248578;
        case 0x24857cu: goto label_24857c;
        case 0x248580u: goto label_248580;
        case 0x248584u: goto label_248584;
        default: break;
    }

    ctx->pc = 0x248540u;

label_248540:
    // 0x248540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_248544:
    // 0x248544: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x248544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_248548:
    // 0x248548: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x248548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_24854c:
    // 0x24854c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24854cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_248550:
    // 0x248550: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x248550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_248554:
    // 0x248554: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x248554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_248558:
    // 0x248558: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x248558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24855c:
    // 0x24855c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24855cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248560:
    // 0x248560: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x248560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_248564:
    // 0x248564: 0x2442b410  addiu       $v0, $v0, -0x4BF0
    ctx->pc = 0x248564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947856));
label_248568:
    // 0x248568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24856c:
    // 0x24856c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24856cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_248570:
    // 0x248570: 0x40f809  jalr        $v0
label_248574:
    if (ctx->pc == 0x248574u) {
        ctx->pc = 0x248578u;
        goto label_248578;
    }
    ctx->pc = 0x248570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248578u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248570u, 0x248578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248578u;
label_248578:
    // 0x248578: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x248578u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24857c:
    // 0x24857c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24857cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_248580:
    // 0x248580: 0x3e00008  jr          $ra
label_248584:
    if (ctx->pc == 0x248584u) {
        ctx->pc = 0x248588u;
        goto label_fallthrough_0x248580;
    }
    ctx->pc = 0x248580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248580:
    ctx->pc = 0x248588u;
}
