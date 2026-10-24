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

// Function: Ectrl_18
// Address: 0x359350 - 0x359394
void Ectrl_18_0x359350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_18_0x359350");
#endif

    switch (ctx->pc) {
        case 0x359350u: goto label_359350;
        case 0x359354u: goto label_359354;
        case 0x359358u: goto label_359358;
        case 0x35935cu: goto label_35935c;
        case 0x359360u: goto label_359360;
        case 0x359364u: goto label_359364;
        case 0x359368u: goto label_359368;
        case 0x35936cu: goto label_35936c;
        case 0x359370u: goto label_359370;
        case 0x359374u: goto label_359374;
        case 0x359378u: goto label_359378;
        case 0x35937cu: goto label_35937c;
        case 0x359380u: goto label_359380;
        case 0x359384u: goto label_359384;
        case 0x359388u: goto label_359388;
        case 0x35938cu: goto label_35938c;
        case 0x359390u: goto label_359390;
        default: break;
    }

    ctx->pc = 0x359350u;

label_359350:
    // 0x359350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_359354:
    // 0x359354: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x359354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_359358:
    // 0x359358: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x359358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35935c:
    // 0x35935c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359360:
    // 0x359360: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359364:
    // 0x359364: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x359364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_359368:
    // 0x359368: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x359368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35936c:
    // 0x35936c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35936cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_359370:
    // 0x359370: 0x2442a780  addiu       $v0, $v0, -0x5880
    ctx->pc = 0x359370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944640));
label_359374:
    // 0x359374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359378:
    // 0x359378: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x359378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35937c:
    // 0x35937c: 0x40f809  jalr        $v0
label_359380:
    if (ctx->pc == 0x359380u) {
        ctx->pc = 0x359384u;
        goto label_359384;
    }
    ctx->pc = 0x35937Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359384u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35937Cu, 0x359384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359384u;
label_359384:
    // 0x359384: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x359384u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359388:
    // 0x359388: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35938c:
    // 0x35938c: 0x3e00008  jr          $ra
label_359390:
    if (ctx->pc == 0x359390u) {
        ctx->pc = 0x359394u;
        goto label_fallthrough_0x35938c;
    }
    ctx->pc = 0x35938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35938Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35938c:
    ctx->pc = 0x359394u;
}
