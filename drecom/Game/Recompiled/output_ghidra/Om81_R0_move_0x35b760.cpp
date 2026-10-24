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

// Function: Om81_R0_move
// Address: 0x35b760 - 0x35b7a8
void Om81_R0_move_0x35b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om81_R0_move_0x35b760");
#endif

    switch (ctx->pc) {
        case 0x35b760u: goto label_35b760;
        case 0x35b764u: goto label_35b764;
        case 0x35b768u: goto label_35b768;
        case 0x35b76cu: goto label_35b76c;
        case 0x35b770u: goto label_35b770;
        case 0x35b774u: goto label_35b774;
        case 0x35b778u: goto label_35b778;
        case 0x35b77cu: goto label_35b77c;
        case 0x35b780u: goto label_35b780;
        case 0x35b784u: goto label_35b784;
        case 0x35b788u: goto label_35b788;
        case 0x35b78cu: goto label_35b78c;
        case 0x35b790u: goto label_35b790;
        case 0x35b794u: goto label_35b794;
        case 0x35b798u: goto label_35b798;
        case 0x35b79cu: goto label_35b79c;
        case 0x35b7a0u: goto label_35b7a0;
        case 0x35b7a4u: goto label_35b7a4;
        default: break;
    }

    ctx->pc = 0x35b760u;

label_35b760:
    // 0x35b760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35b764:
    // 0x35b764: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35b768:
    // 0x35b768: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35b768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35b76c:
    // 0x35b76c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35b770:
    // 0x35b770: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35b774:
    // 0x35b774: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35b774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35b778:
    // 0x35b778: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35b77c:
    // 0x35b77c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35b780:
    // 0x35b780: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35b780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35b784:
    // 0x35b784: 0x2442a9f0  addiu       $v0, $v0, -0x5610
    ctx->pc = 0x35b784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945264));
label_35b788:
    // 0x35b788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35b78c:
    // 0x35b78c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35b790:
    // 0x35b790: 0x40f809  jalr        $v0
label_35b794:
    if (ctx->pc == 0x35B794u) {
        ctx->pc = 0x35B798u;
        goto label_35b798;
    }
    ctx->pc = 0x35B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35B798u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B790u, 0x35B798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35B798u;
label_35b798:
    // 0x35b798: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35b798u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b79c:
    // 0x35b79c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b79cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35b7a0:
    // 0x35b7a0: 0x3e00008  jr          $ra
label_35b7a4:
    if (ctx->pc == 0x35B7A4u) {
        ctx->pc = 0x35B7A8u;
        goto label_fallthrough_0x35b7a0;
    }
    ctx->pc = 0x35B7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35b7a0:
    ctx->pc = 0x35B7A8u;
}
