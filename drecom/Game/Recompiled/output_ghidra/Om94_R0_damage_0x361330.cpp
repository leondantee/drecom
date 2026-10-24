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

// Function: Om94_R0_damage
// Address: 0x361330 - 0x361378
void Om94_R0_damage_0x361330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om94_R0_damage_0x361330");
#endif

    switch (ctx->pc) {
        case 0x361330u: goto label_361330;
        case 0x361334u: goto label_361334;
        case 0x361338u: goto label_361338;
        case 0x36133cu: goto label_36133c;
        case 0x361340u: goto label_361340;
        case 0x361344u: goto label_361344;
        case 0x361348u: goto label_361348;
        case 0x36134cu: goto label_36134c;
        case 0x361350u: goto label_361350;
        case 0x361354u: goto label_361354;
        case 0x361358u: goto label_361358;
        case 0x36135cu: goto label_36135c;
        case 0x361360u: goto label_361360;
        case 0x361364u: goto label_361364;
        case 0x361368u: goto label_361368;
        case 0x36136cu: goto label_36136c;
        case 0x361370u: goto label_361370;
        case 0x361374u: goto label_361374;
        default: break;
    }

    ctx->pc = 0x361330u;

label_361330:
    // 0x361330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x361330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_361334:
    // 0x361334: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x361334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_361338:
    // 0x361338: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x361338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36133c:
    // 0x36133c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_361340:
    // 0x361340: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x361340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_361344:
    // 0x361344: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x361344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_361348:
    // 0x361348: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36134c:
    // 0x36134c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36134cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_361350:
    // 0x361350: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x361350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_361354:
    // 0x361354: 0x2442ac90  addiu       $v0, $v0, -0x5370
    ctx->pc = 0x361354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945936));
label_361358:
    // 0x361358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x361358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36135c:
    // 0x36135c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_361360:
    // 0x361360: 0x40f809  jalr        $v0
label_361364:
    if (ctx->pc == 0x361364u) {
        ctx->pc = 0x361368u;
        goto label_361368;
    }
    ctx->pc = 0x361360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x361368u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361360u, 0x361368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x361368u;
label_361368:
    // 0x361368: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x361368u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36136c:
    // 0x36136c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36136cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_361370:
    // 0x361370: 0x3e00008  jr          $ra
label_361374:
    if (ctx->pc == 0x361374u) {
        ctx->pc = 0x361378u;
        goto label_fallthrough_0x361370;
    }
    ctx->pc = 0x361370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x361370:
    ctx->pc = 0x361378u;
}
