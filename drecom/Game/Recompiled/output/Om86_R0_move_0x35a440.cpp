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

// Function: Om86_R0_move
// Address: 0x35a440 - 0x35a488
void Om86_R0_move_0x35a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om86_R0_move_0x35a440");
#endif

    switch (ctx->pc) {
        case 0x35a440u: goto label_35a440;
        case 0x35a444u: goto label_35a444;
        case 0x35a448u: goto label_35a448;
        case 0x35a44cu: goto label_35a44c;
        case 0x35a450u: goto label_35a450;
        case 0x35a454u: goto label_35a454;
        case 0x35a458u: goto label_35a458;
        case 0x35a45cu: goto label_35a45c;
        case 0x35a460u: goto label_35a460;
        case 0x35a464u: goto label_35a464;
        case 0x35a468u: goto label_35a468;
        case 0x35a46cu: goto label_35a46c;
        case 0x35a470u: goto label_35a470;
        case 0x35a474u: goto label_35a474;
        case 0x35a478u: goto label_35a478;
        case 0x35a47cu: goto label_35a47c;
        case 0x35a480u: goto label_35a480;
        case 0x35a484u: goto label_35a484;
        default: break;
    }

    ctx->pc = 0x35a440u;

label_35a440:
    // 0x35a440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35a444:
    // 0x35a444: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35a444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35a448:
    // 0x35a448: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35a448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35a44c:
    // 0x35a44c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35a450:
    // 0x35a450: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35a450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35a454:
    // 0x35a454: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35a454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35a458:
    // 0x35a458: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35a45c:
    // 0x35a45c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35a460:
    // 0x35a460: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35a460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35a464:
    // 0x35a464: 0x2442a8e0  addiu       $v0, $v0, -0x5720
    ctx->pc = 0x35a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944992));
label_35a468:
    // 0x35a468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35a46c:
    // 0x35a46c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35a470:
    // 0x35a470: 0x40f809  jalr        $v0
label_35a474:
    if (ctx->pc == 0x35A474u) {
        ctx->pc = 0x35A478u;
        goto label_35a478;
    }
    ctx->pc = 0x35A470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35A478u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A470u, 0x35A478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35A478u;
label_35a478:
    // 0x35a478: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35a478u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35a47c:
    // 0x35a47c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35a47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35a480:
    // 0x35a480: 0x3e00008  jr          $ra
label_35a484:
    if (ctx->pc == 0x35A484u) {
        ctx->pc = 0x35A488u;
        goto label_fallthrough_0x35a480;
    }
    ctx->pc = 0x35A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35a480:
    ctx->pc = 0x35A488u;
}
