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

// Function: Em1d_R0_reset
// Address: 0x371350 - 0x3713a0
void Em1d_R0_reset_0x371350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R0_reset_0x371350");
#endif

    switch (ctx->pc) {
        case 0x371350u: goto label_371350;
        case 0x371354u: goto label_371354;
        case 0x371358u: goto label_371358;
        case 0x37135cu: goto label_37135c;
        case 0x371360u: goto label_371360;
        case 0x371364u: goto label_371364;
        case 0x371368u: goto label_371368;
        case 0x37136cu: goto label_37136c;
        case 0x371370u: goto label_371370;
        case 0x371374u: goto label_371374;
        case 0x371378u: goto label_371378;
        case 0x37137cu: goto label_37137c;
        case 0x371380u: goto label_371380;
        case 0x371384u: goto label_371384;
        case 0x371388u: goto label_371388;
        case 0x37138cu: goto label_37138c;
        case 0x371390u: goto label_371390;
        case 0x371394u: goto label_371394;
        case 0x371398u: goto label_371398;
        case 0x37139cu: goto label_37139c;
        default: break;
    }

    ctx->pc = 0x371350u;

label_371350:
    // 0x371350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x371350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_371354:
    // 0x371354: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x371354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_371358:
    // 0x371358: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x371358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_37135c:
    // 0x37135c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37135cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_371360:
    // 0x371360: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x371360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_371364:
    // 0x371364: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x371364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_371368:
    // 0x371368: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x371368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37136c:
    // 0x37136c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x37136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_371370:
    // 0x371370: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x371370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_371374:
    // 0x371374: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x371374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_371378:
    // 0x371378: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x371378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_37137c:
    // 0x37137c: 0x2442b530  addiu       $v0, $v0, -0x4AD0
    ctx->pc = 0x37137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948144));
label_371380:
    // 0x371380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_371384:
    // 0x371384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x371384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_371388:
    // 0x371388: 0x40f809  jalr        $v0
label_37138c:
    if (ctx->pc == 0x37138Cu) {
        ctx->pc = 0x371390u;
        goto label_371390;
    }
    ctx->pc = 0x371388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x371390u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371388u, 0x371390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x371390u;
label_371390:
    // 0x371390: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x371390u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_371394:
    // 0x371394: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x371394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_371398:
    // 0x371398: 0x3e00008  jr          $ra
label_37139c:
    if (ctx->pc == 0x37139Cu) {
        ctx->pc = 0x3713A0u;
        goto label_fallthrough_0x371398;
    }
    ctx->pc = 0x371398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x371398:
    ctx->pc = 0x3713A0u;
}
