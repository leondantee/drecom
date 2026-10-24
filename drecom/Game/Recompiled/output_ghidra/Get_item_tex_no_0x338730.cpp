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

// Function: Get_item_tex_no
// Address: 0x338730 - 0x3387ac
void Get_item_tex_no_0x338730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_item_tex_no_0x338730");
#endif

    switch (ctx->pc) {
        case 0x338730u: goto label_338730;
        case 0x338734u: goto label_338734;
        case 0x338738u: goto label_338738;
        case 0x33873cu: goto label_33873c;
        case 0x338740u: goto label_338740;
        case 0x338744u: goto label_338744;
        case 0x338748u: goto label_338748;
        case 0x33874cu: goto label_33874c;
        case 0x338750u: goto label_338750;
        case 0x338754u: goto label_338754;
        case 0x338758u: goto label_338758;
        case 0x33875cu: goto label_33875c;
        case 0x338760u: goto label_338760;
        case 0x338764u: goto label_338764;
        case 0x338768u: goto label_338768;
        case 0x33876cu: goto label_33876c;
        case 0x338770u: goto label_338770;
        case 0x338774u: goto label_338774;
        case 0x338778u: goto label_338778;
        case 0x33877cu: goto label_33877c;
        case 0x338780u: goto label_338780;
        case 0x338784u: goto label_338784;
        case 0x338788u: goto label_338788;
        case 0x33878cu: goto label_33878c;
        case 0x338790u: goto label_338790;
        case 0x338794u: goto label_338794;
        case 0x338798u: goto label_338798;
        case 0x33879cu: goto label_33879c;
        case 0x3387a0u: goto label_3387a0;
        case 0x3387a4u: goto label_3387a4;
        case 0x3387a8u: goto label_3387a8;
        default: break;
    }

    ctx->pc = 0x338730u;

label_338730:
    // 0x338730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_338734:
    // 0x338734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_338738:
    // 0x338738: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x338738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_33873c:
    // 0x33873c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33873cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338740:
    // 0x338740: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x338740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_338744:
    // 0x338744: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x338744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_338748:
    // 0x338748: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x338748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33874c:
    // 0x33874c: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x33874cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_338750:
    // 0x338750: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_338754:
    if (ctx->pc == 0x338754u) {
        ctx->pc = 0x338758u;
        goto label_338758;
    }
    ctx->pc = 0x338750u;
    {
        const bool branch_taken_0x338750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x338750) {
            ctx->pc = 0x338798u;
            goto label_338798;
        }
    }
    ctx->pc = 0x338758u;
label_338758:
    // 0x338758: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_33875c:
    // 0x33875c: 0x24432150  addiu       $v1, $v0, 0x2150
    ctx->pc = 0x33875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8528));
label_338760:
    // 0x338760: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x338760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_338764:
    // 0x338764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_338768:
    // 0x338768: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x338768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33876c:
    // 0x33876c: 0x400008  jr          $v0
label_338770:
    if (ctx->pc == 0x338770u) {
        ctx->pc = 0x338774u;
        goto label_338774;
    }
    ctx->pc = 0x33876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33876Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x338774u;
label_338774:
    // 0x338774: 0x26100007  addiu       $s0, $s0, 0x7
    ctx->pc = 0x338774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
label_338778:
    // 0x338778: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x338778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_33877c:
    // 0x33877c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x33877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_338780:
    // 0x338780: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x338780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_338784:
    // 0x338784: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_338788:
    // 0x338788: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x338788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_33878c:
    // 0x33878c: 0x10000002  b           . + 4 + (0x2 << 2)
label_338790:
    if (ctx->pc == 0x338790u) {
        ctx->pc = 0x338794u;
        goto label_338794;
    }
    ctx->pc = 0x33878Cu;
    {
        const bool branch_taken_0x33878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33878c) {
            ctx->pc = 0x338798u;
            goto label_338798;
        }
    }
    ctx->pc = 0x338794u;
label_338794:
    // 0x338794: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x338794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_338798:
    // 0x338798: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x338798u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_33879c:
    // 0x33879c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33879cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3387a0:
    // 0x3387a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3387a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3387a4:
    // 0x3387a4: 0x3e00008  jr          $ra
label_3387a8:
    if (ctx->pc == 0x3387A8u) {
        ctx->pc = 0x3387ACu;
        goto label_fallthrough_0x3387a4;
    }
    ctx->pc = 0x3387A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3387A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3387a4:
    ctx->pc = 0x3387ACu;
}
