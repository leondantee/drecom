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

// Function: Pl_r0_em_die
// Address: 0x14d520 - 0x14d58c
void Pl_r0_em_die_0x14d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_em_die_0x14d520");
#endif

    switch (ctx->pc) {
        case 0x14d520u: goto label_14d520;
        case 0x14d524u: goto label_14d524;
        case 0x14d528u: goto label_14d528;
        case 0x14d52cu: goto label_14d52c;
        case 0x14d530u: goto label_14d530;
        case 0x14d534u: goto label_14d534;
        case 0x14d538u: goto label_14d538;
        case 0x14d53cu: goto label_14d53c;
        case 0x14d540u: goto label_14d540;
        case 0x14d544u: goto label_14d544;
        case 0x14d548u: goto label_14d548;
        case 0x14d54cu: goto label_14d54c;
        case 0x14d550u: goto label_14d550;
        case 0x14d554u: goto label_14d554;
        case 0x14d558u: goto label_14d558;
        case 0x14d55cu: goto label_14d55c;
        case 0x14d560u: goto label_14d560;
        case 0x14d564u: goto label_14d564;
        case 0x14d568u: goto label_14d568;
        case 0x14d56cu: goto label_14d56c;
        case 0x14d570u: goto label_14d570;
        case 0x14d574u: goto label_14d574;
        case 0x14d578u: goto label_14d578;
        case 0x14d57cu: goto label_14d57c;
        case 0x14d580u: goto label_14d580;
        case 0x14d584u: goto label_14d584;
        case 0x14d588u: goto label_14d588;
        default: break;
    }

    ctx->pc = 0x14d520u;

label_14d520:
    // 0x14d520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14d524:
    // 0x14d524: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x14d524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_14d528:
    // 0x14d528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14d52c:
    // 0x14d52c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_14d530:
    // 0x14d530: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d534:
    // 0x14d534: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x14d534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
label_14d538:
    // 0x14d538: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d53c:
    // 0x14d53c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x14d53cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_14d540:
    // 0x14d540: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d544:
    // 0x14d544: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14d544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14d548:
    // 0x14d548: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14d548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14d54c:
    // 0x14d54c: 0x24425490  addiu       $v0, $v0, 0x5490
    ctx->pc = 0x14d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21648));
label_14d550:
    // 0x14d550: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x14d550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14d554:
    // 0x14d554: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14d558:
    // 0x14d558: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x14d558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_14d55c:
    // 0x14d55c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d560:
    // 0x14d560: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14d560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14d564:
    // 0x14d564: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14d564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14d568:
    // 0x14d568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14d56c:
    // 0x14d56c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14d570:
    // 0x14d570: 0x40f809  jalr        $v0
label_14d574:
    if (ctx->pc == 0x14D574u) {
        ctx->pc = 0x14D578u;
        goto label_14d578;
    }
    ctx->pc = 0x14D570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14D578u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D570u, 0x14D578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D578u;
label_14d578:
    // 0x14d578: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x14d578u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14d57c:
    // 0x14d57c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14d580:
    // 0x14d580: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14d584:
    // 0x14d584: 0x3e00008  jr          $ra
label_14d588:
    if (ctx->pc == 0x14D588u) {
        ctx->pc = 0x14D58Cu;
        goto label_fallthrough_0x14d584;
    }
    ctx->pc = 0x14D584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d584:
    ctx->pc = 0x14D58Cu;
}
