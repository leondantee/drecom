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

// Function: Om88_move
// Address: 0x35e730 - 0x35e788
void Om88_move_0x35e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om88_move_0x35e730");
#endif

    switch (ctx->pc) {
        case 0x35e730u: goto label_35e730;
        case 0x35e734u: goto label_35e734;
        case 0x35e738u: goto label_35e738;
        case 0x35e73cu: goto label_35e73c;
        case 0x35e740u: goto label_35e740;
        case 0x35e744u: goto label_35e744;
        case 0x35e748u: goto label_35e748;
        case 0x35e74cu: goto label_35e74c;
        case 0x35e750u: goto label_35e750;
        case 0x35e754u: goto label_35e754;
        case 0x35e758u: goto label_35e758;
        case 0x35e75cu: goto label_35e75c;
        case 0x35e760u: goto label_35e760;
        case 0x35e764u: goto label_35e764;
        case 0x35e768u: goto label_35e768;
        case 0x35e76cu: goto label_35e76c;
        case 0x35e770u: goto label_35e770;
        case 0x35e774u: goto label_35e774;
        case 0x35e778u: goto label_35e778;
        case 0x35e77cu: goto label_35e77c;
        case 0x35e780u: goto label_35e780;
        case 0x35e784u: goto label_35e784;
        default: break;
    }

    ctx->pc = 0x35e730u;

label_35e730:
    // 0x35e730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35e734:
    // 0x35e734: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35e734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_35e738:
    // 0x35e738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35e73c:
    // 0x35e73c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_35e740:
    // 0x35e740: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x35e740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_35e744:
    // 0x35e744: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x35e744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_35e748:
    // 0x35e748: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35e748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35e74c:
    // 0x35e74c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35e750:
    // 0x35e750: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35e750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_35e754:
    // 0x35e754: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35e754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35e758:
    // 0x35e758: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35e758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35e75c:
    // 0x35e75c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35e760:
    // 0x35e760: 0x2442aaa0  addiu       $v0, $v0, -0x5560
    ctx->pc = 0x35e760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945440));
label_35e764:
    // 0x35e764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35e768:
    // 0x35e768: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35e768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35e76c:
    // 0x35e76c: 0x40f809  jalr        $v0
label_35e770:
    if (ctx->pc == 0x35E770u) {
        ctx->pc = 0x35E774u;
        goto label_35e774;
    }
    ctx->pc = 0x35E76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35E774u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E76Cu, 0x35E774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35E774u;
label_35e774:
    // 0x35e774: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35e774u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35e778:
    // 0x35e778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35e77c:
    // 0x35e77c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35e77cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35e780:
    // 0x35e780: 0x3e00008  jr          $ra
label_35e784:
    if (ctx->pc == 0x35E784u) {
        ctx->pc = 0x35E788u;
        goto label_fallthrough_0x35e780;
    }
    ctx->pc = 0x35E780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35e780:
    ctx->pc = 0x35E788u;
}
