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

// Function: Om09_R0_move
// Address: 0x37c760 - 0x37c7a8
void Om09_R0_move_0x37c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om09_R0_move_0x37c760");
#endif

    switch (ctx->pc) {
        case 0x37c760u: goto label_37c760;
        case 0x37c764u: goto label_37c764;
        case 0x37c768u: goto label_37c768;
        case 0x37c76cu: goto label_37c76c;
        case 0x37c770u: goto label_37c770;
        case 0x37c774u: goto label_37c774;
        case 0x37c778u: goto label_37c778;
        case 0x37c77cu: goto label_37c77c;
        case 0x37c780u: goto label_37c780;
        case 0x37c784u: goto label_37c784;
        case 0x37c788u: goto label_37c788;
        case 0x37c78cu: goto label_37c78c;
        case 0x37c790u: goto label_37c790;
        case 0x37c794u: goto label_37c794;
        case 0x37c798u: goto label_37c798;
        case 0x37c79cu: goto label_37c79c;
        case 0x37c7a0u: goto label_37c7a0;
        case 0x37c7a4u: goto label_37c7a4;
        default: break;
    }

    ctx->pc = 0x37c760u;

label_37c760:
    // 0x37c760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37c764:
    // 0x37c764: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x37c764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_37c768:
    // 0x37c768: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x37c768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_37c76c:
    // 0x37c76c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37c770:
    // 0x37c770: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37c774:
    // 0x37c774: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x37c774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_37c778:
    // 0x37c778: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37c778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37c77c:
    // 0x37c77c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37c780:
    // 0x37c780: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37c780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_37c784:
    // 0x37c784: 0x2442ba70  addiu       $v0, $v0, -0x4590
    ctx->pc = 0x37c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949488));
label_37c788:
    // 0x37c788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37c78c:
    // 0x37c78c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37c790:
    // 0x37c790: 0x40f809  jalr        $v0
label_37c794:
    if (ctx->pc == 0x37C794u) {
        ctx->pc = 0x37C798u;
        goto label_37c798;
    }
    ctx->pc = 0x37C790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37C798u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C790u, 0x37C798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C798u;
label_37c798:
    // 0x37c798: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37c798u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c79c:
    // 0x37c79c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37c79cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37c7a0:
    // 0x37c7a0: 0x3e00008  jr          $ra
label_37c7a4:
    if (ctx->pc == 0x37C7A4u) {
        ctx->pc = 0x37C7A8u;
        goto label_fallthrough_0x37c7a0;
    }
    ctx->pc = 0x37C7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37c7a0:
    ctx->pc = 0x37C7A8u;
}
