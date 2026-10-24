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

// Function: Get_item_tex_no2
// Address: 0x3387b0 - 0x338828
void Get_item_tex_no2_0x3387b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_item_tex_no2_0x3387b0");
#endif

    switch (ctx->pc) {
        case 0x3387b0u: goto label_3387b0;
        case 0x3387b4u: goto label_3387b4;
        case 0x3387b8u: goto label_3387b8;
        case 0x3387bcu: goto label_3387bc;
        case 0x3387c0u: goto label_3387c0;
        case 0x3387c4u: goto label_3387c4;
        case 0x3387c8u: goto label_3387c8;
        case 0x3387ccu: goto label_3387cc;
        case 0x3387d0u: goto label_3387d0;
        case 0x3387d4u: goto label_3387d4;
        case 0x3387d8u: goto label_3387d8;
        case 0x3387dcu: goto label_3387dc;
        case 0x3387e0u: goto label_3387e0;
        case 0x3387e4u: goto label_3387e4;
        case 0x3387e8u: goto label_3387e8;
        case 0x3387ecu: goto label_3387ec;
        case 0x3387f0u: goto label_3387f0;
        case 0x3387f4u: goto label_3387f4;
        case 0x3387f8u: goto label_3387f8;
        case 0x3387fcu: goto label_3387fc;
        case 0x338800u: goto label_338800;
        case 0x338804u: goto label_338804;
        case 0x338808u: goto label_338808;
        case 0x33880cu: goto label_33880c;
        case 0x338810u: goto label_338810;
        case 0x338814u: goto label_338814;
        case 0x338818u: goto label_338818;
        case 0x33881cu: goto label_33881c;
        case 0x338820u: goto label_338820;
        case 0x338824u: goto label_338824;
        default: break;
    }

    ctx->pc = 0x3387b0u;

label_3387b0:
    // 0x3387b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3387b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3387b4:
    // 0x3387b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3387b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3387b8:
    // 0x3387b8: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x3387b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
label_3387bc:
    // 0x3387bc: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x3387bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
label_3387c0:
    // 0x3387c0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3387c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3387c4:
    // 0x3387c4: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3387c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_3387c8:
    // 0x3387c8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3387c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3387cc:
    // 0x3387cc: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x3387ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3387d0:
    // 0x3387d0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_3387d4:
    if (ctx->pc == 0x3387D4u) {
        ctx->pc = 0x3387D8u;
        goto label_3387d8;
    }
    ctx->pc = 0x3387D0u;
    {
        const bool branch_taken_0x3387d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3387d0) {
            ctx->pc = 0x338814u;
            goto label_338814;
        }
    }
    ctx->pc = 0x3387D8u;
label_3387d8:
    // 0x3387d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3387d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3387dc:
    // 0x3387dc: 0x24432180  addiu       $v1, $v0, 0x2180
    ctx->pc = 0x3387dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8576));
label_3387e0:
    // 0x3387e0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3387e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3387e4:
    // 0x3387e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3387e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3387e8:
    // 0x3387e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3387e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3387ec:
    // 0x3387ec: 0x400008  jr          $v0
label_3387f0:
    if (ctx->pc == 0x3387F0u) {
        ctx->pc = 0x3387F4u;
        goto label_3387f4;
    }
    ctx->pc = 0x3387ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3387ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3387F4u;
label_3387f4:
    // 0x3387f4: 0x26100007  addiu       $s0, $s0, 0x7
    ctx->pc = 0x3387f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
label_3387f8:
    // 0x3387f8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3387f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3387fc:
    // 0x3387fc: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x3387fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
label_338800:
    // 0x338800: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_338804:
    // 0x338804: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x338804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_338808:
    // 0x338808: 0x10000002  b           . + 4 + (0x2 << 2)
label_33880c:
    if (ctx->pc == 0x33880Cu) {
        ctx->pc = 0x338810u;
        goto label_338810;
    }
    ctx->pc = 0x338808u;
    {
        const bool branch_taken_0x338808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338808) {
            ctx->pc = 0x338814u;
            goto label_338814;
        }
    }
    ctx->pc = 0x338810u;
label_338810:
    // 0x338810: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x338810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_338814:
    // 0x338814: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x338814u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_338818:
    // 0x338818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33881c:
    // 0x33881c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33881cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_338820:
    // 0x338820: 0x3e00008  jr          $ra
label_338824:
    if (ctx->pc == 0x338824u) {
        ctx->pc = 0x338828u;
        goto label_fallthrough_0x338820;
    }
    ctx->pc = 0x338820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x338820:
    ctx->pc = 0x338828u;
}
