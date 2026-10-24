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

// Function: Om09_move
// Address: 0x37c450 - 0x37c4bc
void Om09_move_0x37c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om09_move_0x37c450");
#endif

    switch (ctx->pc) {
        case 0x37c450u: goto label_37c450;
        case 0x37c454u: goto label_37c454;
        case 0x37c458u: goto label_37c458;
        case 0x37c45cu: goto label_37c45c;
        case 0x37c460u: goto label_37c460;
        case 0x37c464u: goto label_37c464;
        case 0x37c468u: goto label_37c468;
        case 0x37c46cu: goto label_37c46c;
        case 0x37c470u: goto label_37c470;
        case 0x37c474u: goto label_37c474;
        case 0x37c478u: goto label_37c478;
        case 0x37c47cu: goto label_37c47c;
        case 0x37c480u: goto label_37c480;
        case 0x37c484u: goto label_37c484;
        case 0x37c488u: goto label_37c488;
        case 0x37c48cu: goto label_37c48c;
        case 0x37c490u: goto label_37c490;
        case 0x37c494u: goto label_37c494;
        case 0x37c498u: goto label_37c498;
        case 0x37c49cu: goto label_37c49c;
        case 0x37c4a0u: goto label_37c4a0;
        case 0x37c4a4u: goto label_37c4a4;
        case 0x37c4a8u: goto label_37c4a8;
        case 0x37c4acu: goto label_37c4ac;
        case 0x37c4b0u: goto label_37c4b0;
        case 0x37c4b4u: goto label_37c4b4;
        case 0x37c4b8u: goto label_37c4b8;
        default: break;
    }

    ctx->pc = 0x37c450u;

label_37c450:
    // 0x37c450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37c454:
    // 0x37c454: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x37c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_37c458:
    // 0x37c458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37c45c:
    // 0x37c45c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x37c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_37c460:
    // 0x37c460: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x37c460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_37c464:
    // 0x37c464: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x37c464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_37c468:
    // 0x37c468: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_37c46c:
    // 0x37c46c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x37c46cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_37c470:
    // 0x37c470: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37c470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_37c474:
    // 0x37c474: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_37c478:
    if (ctx->pc == 0x37C478u) {
        ctx->pc = 0x37C47Cu;
        goto label_37c47c;
    }
    ctx->pc = 0x37C474u;
    {
        const bool branch_taken_0x37c474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c474) {
            ctx->pc = 0x37C4A8u;
            goto label_37c4a8;
        }
    }
    ctx->pc = 0x37C47Cu;
label_37c47c:
    // 0x37c47c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_37c480:
    // 0x37c480: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_37c484:
    // 0x37c484: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x37c484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_37c488:
    // 0x37c488: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37c488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37c48c:
    // 0x37c48c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37c490:
    // 0x37c490: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37c490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_37c494:
    // 0x37c494: 0x2442ba60  addiu       $v0, $v0, -0x45A0
    ctx->pc = 0x37c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949472));
label_37c498:
    // 0x37c498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37c49c:
    // 0x37c49c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37c4a0:
    // 0x37c4a0: 0x40f809  jalr        $v0
label_37c4a4:
    if (ctx->pc == 0x37C4A4u) {
        ctx->pc = 0x37C4A8u;
        goto label_37c4a8;
    }
    ctx->pc = 0x37C4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37C4A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C4A0u, 0x37C4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C4A8u;
label_37c4a8:
    // 0x37c4a8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x37c4a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37c4ac:
    // 0x37c4ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c4b0:
    // 0x37c4b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_37c4b4:
    // 0x37c4b4: 0x3e00008  jr          $ra
label_37c4b8:
    if (ctx->pc == 0x37C4B8u) {
        ctx->pc = 0x37C4BCu;
        goto label_fallthrough_0x37c4b4;
    }
    ctx->pc = 0x37C4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37c4b4:
    ctx->pc = 0x37C4BCu;
}
