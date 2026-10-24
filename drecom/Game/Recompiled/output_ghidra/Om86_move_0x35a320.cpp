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

// Function: Om86_move
// Address: 0x35a320 - 0x35a378
void Om86_move_0x35a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om86_move_0x35a320");
#endif

    switch (ctx->pc) {
        case 0x35a320u: goto label_35a320;
        case 0x35a324u: goto label_35a324;
        case 0x35a328u: goto label_35a328;
        case 0x35a32cu: goto label_35a32c;
        case 0x35a330u: goto label_35a330;
        case 0x35a334u: goto label_35a334;
        case 0x35a338u: goto label_35a338;
        case 0x35a33cu: goto label_35a33c;
        case 0x35a340u: goto label_35a340;
        case 0x35a344u: goto label_35a344;
        case 0x35a348u: goto label_35a348;
        case 0x35a34cu: goto label_35a34c;
        case 0x35a350u: goto label_35a350;
        case 0x35a354u: goto label_35a354;
        case 0x35a358u: goto label_35a358;
        case 0x35a35cu: goto label_35a35c;
        case 0x35a360u: goto label_35a360;
        case 0x35a364u: goto label_35a364;
        case 0x35a368u: goto label_35a368;
        case 0x35a36cu: goto label_35a36c;
        case 0x35a370u: goto label_35a370;
        case 0x35a374u: goto label_35a374;
        default: break;
    }

    ctx->pc = 0x35a320u;

label_35a320:
    // 0x35a320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35a320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35a324:
    // 0x35a324: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35a324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_35a328:
    // 0x35a328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35a328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35a32c:
    // 0x35a32c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_35a330:
    // 0x35a330: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x35a330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_35a334:
    // 0x35a334: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x35a334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_35a338:
    // 0x35a338: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35a33c:
    // 0x35a33c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35a340:
    // 0x35a340: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35a340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_35a344:
    // 0x35a344: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35a348:
    // 0x35a348: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35a348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35a34c:
    // 0x35a34c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35a350:
    // 0x35a350: 0x2442a8d0  addiu       $v0, $v0, -0x5730
    ctx->pc = 0x35a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944976));
label_35a354:
    // 0x35a354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35a354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35a358:
    // 0x35a358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35a35c:
    // 0x35a35c: 0x40f809  jalr        $v0
label_35a360:
    if (ctx->pc == 0x35A360u) {
        ctx->pc = 0x35A364u;
        goto label_35a364;
    }
    ctx->pc = 0x35A35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35A364u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A35Cu, 0x35A364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35A364u;
label_35a364:
    // 0x35a364: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35a364u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35a368:
    // 0x35a368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35a368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35a36c:
    // 0x35a36c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35a36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35a370:
    // 0x35a370: 0x3e00008  jr          $ra
label_35a374:
    if (ctx->pc == 0x35A374u) {
        ctx->pc = 0x35A378u;
        goto label_fallthrough_0x35a370;
    }
    ctx->pc = 0x35A370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35a370:
    ctx->pc = 0x35A378u;
}
