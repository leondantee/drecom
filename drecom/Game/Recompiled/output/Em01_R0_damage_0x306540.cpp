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

// Function: Em01_R0_damage
// Address: 0x306540 - 0x306588
void Em01_R0_damage_0x306540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R0_damage_0x306540");
#endif

    switch (ctx->pc) {
        case 0x306540u: goto label_306540;
        case 0x306544u: goto label_306544;
        case 0x306548u: goto label_306548;
        case 0x30654cu: goto label_30654c;
        case 0x306550u: goto label_306550;
        case 0x306554u: goto label_306554;
        case 0x306558u: goto label_306558;
        case 0x30655cu: goto label_30655c;
        case 0x306560u: goto label_306560;
        case 0x306564u: goto label_306564;
        case 0x306568u: goto label_306568;
        case 0x30656cu: goto label_30656c;
        case 0x306570u: goto label_306570;
        case 0x306574u: goto label_306574;
        case 0x306578u: goto label_306578;
        case 0x30657cu: goto label_30657c;
        case 0x306580u: goto label_306580;
        case 0x306584u: goto label_306584;
        default: break;
    }

    ctx->pc = 0x306540u;

label_306540:
    // 0x306540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_306544:
    // 0x306544: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x306544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_306548:
    // 0x306548: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x306548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_30654c:
    // 0x30654c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306550:
    // 0x306550: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x306550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306554:
    // 0x306554: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x306554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_306558:
    // 0x306558: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x306558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30655c:
    // 0x30655c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30655cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_306560:
    // 0x306560: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x306560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_306564:
    // 0x306564: 0x244293f0  addiu       $v0, $v0, -0x6C10
    ctx->pc = 0x306564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939632));
label_306568:
    // 0x306568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30656c:
    // 0x30656c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_306570:
    // 0x306570: 0x40f809  jalr        $v0
label_306574:
    if (ctx->pc == 0x306574u) {
        ctx->pc = 0x306578u;
        goto label_306578;
    }
    ctx->pc = 0x306570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306578u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306570u, 0x306578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306578u;
label_306578:
    // 0x306578: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x306578u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30657c:
    // 0x30657c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30657cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_306580:
    // 0x306580: 0x3e00008  jr          $ra
label_306584:
    if (ctx->pc == 0x306584u) {
        ctx->pc = 0x306588u;
        goto label_fallthrough_0x306580;
    }
    ctx->pc = 0x306580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x306580:
    ctx->pc = 0x306588u;
}
