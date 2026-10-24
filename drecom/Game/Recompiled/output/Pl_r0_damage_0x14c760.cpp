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

// Function: Pl_r0_damage
// Address: 0x14c760 - 0x14c7c8
void Pl_r0_damage_0x14c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_damage_0x14c760");
#endif

    switch (ctx->pc) {
        case 0x14c760u: goto label_14c760;
        case 0x14c764u: goto label_14c764;
        case 0x14c768u: goto label_14c768;
        case 0x14c76cu: goto label_14c76c;
        case 0x14c770u: goto label_14c770;
        case 0x14c774u: goto label_14c774;
        case 0x14c778u: goto label_14c778;
        case 0x14c77cu: goto label_14c77c;
        case 0x14c780u: goto label_14c780;
        case 0x14c784u: goto label_14c784;
        case 0x14c788u: goto label_14c788;
        case 0x14c78cu: goto label_14c78c;
        case 0x14c790u: goto label_14c790;
        case 0x14c794u: goto label_14c794;
        case 0x14c798u: goto label_14c798;
        case 0x14c79cu: goto label_14c79c;
        case 0x14c7a0u: goto label_14c7a0;
        case 0x14c7a4u: goto label_14c7a4;
        case 0x14c7a8u: goto label_14c7a8;
        case 0x14c7acu: goto label_14c7ac;
        case 0x14c7b0u: goto label_14c7b0;
        case 0x14c7b4u: goto label_14c7b4;
        case 0x14c7b8u: goto label_14c7b8;
        case 0x14c7bcu: goto label_14c7bc;
        case 0x14c7c0u: goto label_14c7c0;
        case 0x14c7c4u: goto label_14c7c4;
        default: break;
    }

    ctx->pc = 0x14c760u;

label_14c760:
    // 0x14c760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14c764:
    // 0x14c764: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14c764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_14c768:
    // 0x14c768: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x14c768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_14c76c:
    // 0x14c76c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14c76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14c770:
    // 0x14c770: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14c770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14c774:
    // 0x14c774: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14c774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_14c778:
    // 0x14c778: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14c778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14c77c:
    // 0x14c77c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14c77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14c780:
    // 0x14c780: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14c780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_14c784:
    // 0x14c784: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_14c788:
    // 0x14c788: 0xa4401574  sh          $zero, 0x1574($v0)
    ctx->pc = 0x14c788u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5492), (uint16_t)GPR_U32(ctx, 0));
label_14c78c:
    // 0x14c78c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_14c790:
    // 0x14c790: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_14c794:
    // 0x14c794: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x14c794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_14c798:
    // 0x14c798: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14c798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14c79c:
    // 0x14c79c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14c7a0:
    // 0x14c7a0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14c7a4:
    // 0x14c7a4: 0x24425400  addiu       $v0, $v0, 0x5400
    ctx->pc = 0x14c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21504));
label_14c7a8:
    // 0x14c7a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14c7ac:
    // 0x14c7ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14c7b0:
    // 0x14c7b0: 0x40f809  jalr        $v0
label_14c7b4:
    if (ctx->pc == 0x14C7B4u) {
        ctx->pc = 0x14C7B8u;
        goto label_14c7b8;
    }
    ctx->pc = 0x14C7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14C7B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C7B0u, 0x14C7B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C7B8u;
label_14c7b8:
    // 0x14c7b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14c7b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14c7bc:
    // 0x14c7bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14c7bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14c7c0:
    // 0x14c7c0: 0x3e00008  jr          $ra
label_14c7c4:
    if (ctx->pc == 0x14C7C4u) {
        ctx->pc = 0x14C7C8u;
        goto label_fallthrough_0x14c7c0;
    }
    ctx->pc = 0x14C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c7c0:
    ctx->pc = 0x14C7C8u;
}
