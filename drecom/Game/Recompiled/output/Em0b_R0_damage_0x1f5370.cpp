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

// Function: Em0b_R0_damage
// Address: 0x1f5370 - 0x1f53e0
void Em0b_R0_damage_0x1f5370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R0_damage_0x1f5370");
#endif

    switch (ctx->pc) {
        case 0x1f5370u: goto label_1f5370;
        case 0x1f5374u: goto label_1f5374;
        case 0x1f5378u: goto label_1f5378;
        case 0x1f537cu: goto label_1f537c;
        case 0x1f5380u: goto label_1f5380;
        case 0x1f5384u: goto label_1f5384;
        case 0x1f5388u: goto label_1f5388;
        case 0x1f538cu: goto label_1f538c;
        case 0x1f5390u: goto label_1f5390;
        case 0x1f5394u: goto label_1f5394;
        case 0x1f5398u: goto label_1f5398;
        case 0x1f539cu: goto label_1f539c;
        case 0x1f53a0u: goto label_1f53a0;
        case 0x1f53a4u: goto label_1f53a4;
        case 0x1f53a8u: goto label_1f53a8;
        case 0x1f53acu: goto label_1f53ac;
        case 0x1f53b0u: goto label_1f53b0;
        case 0x1f53b4u: goto label_1f53b4;
        case 0x1f53b8u: goto label_1f53b8;
        case 0x1f53bcu: goto label_1f53bc;
        case 0x1f53c0u: goto label_1f53c0;
        case 0x1f53c4u: goto label_1f53c4;
        case 0x1f53c8u: goto label_1f53c8;
        case 0x1f53ccu: goto label_1f53cc;
        case 0x1f53d0u: goto label_1f53d0;
        case 0x1f53d4u: goto label_1f53d4;
        case 0x1f53d8u: goto label_1f53d8;
        case 0x1f53dcu: goto label_1f53dc;
        default: break;
    }

    ctx->pc = 0x1f5370u;

label_1f5370:
    // 0x1f5370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f5374:
    // 0x1f5374: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1f5374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1f5378:
    // 0x1f5378: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1f5378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1f537c:
    // 0x1f537c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1f5380:
    // 0x1f5380: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1f5384:
    // 0x1f5384: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x1f5384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_1f5388:
    // 0x1f5388: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f538c:
    if (ctx->pc == 0x1F538Cu) {
        ctx->pc = 0x1F5390u;
        goto label_1f5390;
    }
    ctx->pc = 0x1F5388u;
    {
        const bool branch_taken_0x1f5388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5388) {
            ctx->pc = 0x1F53A4u;
            goto label_1f53a4;
        }
    }
    ctx->pc = 0x1F5390u;
label_1f5390:
    // 0x1f5390: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1f5394:
    // 0x1f5394: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1f5398:
    // 0x1f5398: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x1f5398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
label_1f539c:
    // 0x1f539c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f53a0:
    // 0x1f53a0: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x1f53a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
label_1f53a4:
    // 0x1f53a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f53a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1f53a8:
    // 0x1f53a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1f53ac:
    // 0x1f53ac: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1f53acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1f53b0:
    // 0x1f53b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f53b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f53b4:
    // 0x1f53b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f53b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f53b8:
    // 0x1f53b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f53bc:
    // 0x1f53bc: 0x24429ed0  addiu       $v0, $v0, -0x6130
    ctx->pc = 0x1f53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942416));
label_1f53c0:
    // 0x1f53c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f53c4:
    // 0x1f53c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f53c8:
    // 0x1f53c8: 0x40f809  jalr        $v0
label_1f53cc:
    if (ctx->pc == 0x1F53CCu) {
        ctx->pc = 0x1F53D0u;
        goto label_1f53d0;
    }
    ctx->pc = 0x1F53C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F53D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F53C8u, 0x1F53D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F53D0u;
label_1f53d0:
    // 0x1f53d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1f53d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f53d4:
    // 0x1f53d4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f53d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f53d8:
    // 0x1f53d8: 0x3e00008  jr          $ra
label_1f53dc:
    if (ctx->pc == 0x1F53DCu) {
        ctx->pc = 0x1F53E0u;
        goto label_fallthrough_0x1f53d8;
    }
    ctx->pc = 0x1F53D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F53D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f53d8:
    ctx->pc = 0x1F53E0u;
}
