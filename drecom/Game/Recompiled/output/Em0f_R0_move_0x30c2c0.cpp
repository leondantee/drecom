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

// Function: Em0f_R0_move
// Address: 0x30c2c0 - 0x30c394
void Em0f_R0_move_0x30c2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R0_move_0x30c2c0");
#endif

    switch (ctx->pc) {
        case 0x30c2c0u: goto label_30c2c0;
        case 0x30c2c4u: goto label_30c2c4;
        case 0x30c2c8u: goto label_30c2c8;
        case 0x30c2ccu: goto label_30c2cc;
        case 0x30c2d0u: goto label_30c2d0;
        case 0x30c2d4u: goto label_30c2d4;
        case 0x30c2d8u: goto label_30c2d8;
        case 0x30c2dcu: goto label_30c2dc;
        case 0x30c2e0u: goto label_30c2e0;
        case 0x30c2e4u: goto label_30c2e4;
        case 0x30c2e8u: goto label_30c2e8;
        case 0x30c2ecu: goto label_30c2ec;
        case 0x30c2f0u: goto label_30c2f0;
        case 0x30c2f4u: goto label_30c2f4;
        case 0x30c2f8u: goto label_30c2f8;
        case 0x30c2fcu: goto label_30c2fc;
        case 0x30c300u: goto label_30c300;
        case 0x30c304u: goto label_30c304;
        case 0x30c308u: goto label_30c308;
        case 0x30c30cu: goto label_30c30c;
        case 0x30c310u: goto label_30c310;
        case 0x30c314u: goto label_30c314;
        case 0x30c318u: goto label_30c318;
        case 0x30c31cu: goto label_30c31c;
        case 0x30c320u: goto label_30c320;
        case 0x30c324u: goto label_30c324;
        case 0x30c328u: goto label_30c328;
        case 0x30c32cu: goto label_30c32c;
        case 0x30c330u: goto label_30c330;
        case 0x30c334u: goto label_30c334;
        case 0x30c338u: goto label_30c338;
        case 0x30c33cu: goto label_30c33c;
        case 0x30c340u: goto label_30c340;
        case 0x30c344u: goto label_30c344;
        case 0x30c348u: goto label_30c348;
        case 0x30c34cu: goto label_30c34c;
        case 0x30c350u: goto label_30c350;
        case 0x30c354u: goto label_30c354;
        case 0x30c358u: goto label_30c358;
        case 0x30c35cu: goto label_30c35c;
        case 0x30c360u: goto label_30c360;
        case 0x30c364u: goto label_30c364;
        case 0x30c368u: goto label_30c368;
        case 0x30c36cu: goto label_30c36c;
        case 0x30c370u: goto label_30c370;
        case 0x30c374u: goto label_30c374;
        case 0x30c378u: goto label_30c378;
        case 0x30c37cu: goto label_30c37c;
        case 0x30c380u: goto label_30c380;
        case 0x30c384u: goto label_30c384;
        case 0x30c388u: goto label_30c388;
        case 0x30c38cu: goto label_30c38c;
        case 0x30c390u: goto label_30c390;
        default: break;
    }

    ctx->pc = 0x30c2c0u;

label_30c2c0:
    // 0x30c2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30c2c4:
    // 0x30c2c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30c2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_30c2c8:
    // 0x30c2c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_30c2cc:
    // 0x30c2cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30c2d0:
    // 0x30c2d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30c2d4:
    // 0x30c2d4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x30c2d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_30c2d8:
    // 0x30c2d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30c2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30c2dc:
    // 0x30c2dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30c2e0:
    // 0x30c2e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30c2e4:
    // 0x30c2e4: 0x24429840  addiu       $v0, $v0, -0x67C0
    ctx->pc = 0x30c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940736));
label_30c2e8:
    // 0x30c2e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30c2ec:
    // 0x30c2ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30c2f0:
    // 0x30c2f0: 0x40f809  jalr        $v0
label_30c2f4:
    if (ctx->pc == 0x30C2F4u) {
        ctx->pc = 0x30C2F8u;
        goto label_30c2f8;
    }
    ctx->pc = 0x30C2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30C2F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C2F0u, 0x30C2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C2F8u;
label_30c2f8:
    // 0x30c2f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30c2fc:
    // 0x30c2fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30c300:
    // 0x30c300: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x30c300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_30c304:
    // 0x30c304: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30c304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30c308:
    // 0x30c308: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30c308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30c30c:
    // 0x30c30c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30c310:
    // 0x30c310: 0x24429880  addiu       $v0, $v0, -0x6780
    ctx->pc = 0x30c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940800));
label_30c314:
    // 0x30c314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30c314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30c318:
    // 0x30c318: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30c31c:
    // 0x30c31c: 0x40f809  jalr        $v0
label_30c320:
    if (ctx->pc == 0x30C320u) {
        ctx->pc = 0x30C324u;
        goto label_30c324;
    }
    ctx->pc = 0x30C31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30C324u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C31Cu, 0x30C324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C324u;
label_30c324:
    // 0x30c324: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30c328:
    // 0x30c328: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x30c328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
label_30c32c:
    // 0x30c32c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_30c330:
    if (ctx->pc == 0x30C330u) {
        ctx->pc = 0x30C334u;
        goto label_30c334;
    }
    ctx->pc = 0x30C32Cu;
    {
        const bool branch_taken_0x30c32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c32c) {
            ctx->pc = 0x30C344u;
            goto label_30c344;
        }
    }
    ctx->pc = 0x30C334u;
label_30c334:
    // 0x30c334: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30c338:
    // 0x30c338: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x30c338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
label_30c33c:
    // 0x30c33c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_30c340:
    // 0x30c340: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x30c340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
label_30c344:
    // 0x30c344: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30c348:
    // 0x30c348: 0x8c631344  lw          $v1, 0x1344($v1)
    ctx->pc = 0x30c348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
label_30c34c:
    // 0x30c34c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_30c350:
    if (ctx->pc == 0x30C350u) {
        ctx->pc = 0x30C354u;
        goto label_30c354;
    }
    ctx->pc = 0x30C34Cu;
    {
        const bool branch_taken_0x30c34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c34c) {
            ctx->pc = 0x30C364u;
            goto label_30c364;
        }
    }
    ctx->pc = 0x30C354u;
label_30c354:
    // 0x30c354: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30c354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30c358:
    // 0x30c358: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x30c358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
label_30c35c:
    // 0x30c35c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_30c360:
    // 0x30c360: 0xac831344  sw          $v1, 0x1344($a0)
    ctx->pc = 0x30c360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 3));
label_30c364:
    // 0x30c364: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30c368:
    // 0x30c368: 0x8c631364  lw          $v1, 0x1364($v1)
    ctx->pc = 0x30c368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4964)));
label_30c36c:
    // 0x30c36c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_30c370:
    if (ctx->pc == 0x30C370u) {
        ctx->pc = 0x30C374u;
        goto label_30c374;
    }
    ctx->pc = 0x30C36Cu;
    {
        const bool branch_taken_0x30c36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c36c) {
            ctx->pc = 0x30C384u;
            goto label_30c384;
        }
    }
    ctx->pc = 0x30C374u;
label_30c374:
    // 0x30c374: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30c374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30c378:
    // 0x30c378: 0x8c831364  lw          $v1, 0x1364($a0)
    ctx->pc = 0x30c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4964)));
label_30c37c:
    // 0x30c37c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_30c380:
    // 0x30c380: 0xac831364  sw          $v1, 0x1364($a0)
    ctx->pc = 0x30c380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4964), GPR_U32(ctx, 3));
label_30c384:
    // 0x30c384: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30c384u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30c388:
    // 0x30c388: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30c388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30c38c:
    // 0x30c38c: 0x3e00008  jr          $ra
label_30c390:
    if (ctx->pc == 0x30C390u) {
        ctx->pc = 0x30C394u;
        goto label_fallthrough_0x30c38c;
    }
    ctx->pc = 0x30C38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30c38c:
    ctx->pc = 0x30C394u;
}
